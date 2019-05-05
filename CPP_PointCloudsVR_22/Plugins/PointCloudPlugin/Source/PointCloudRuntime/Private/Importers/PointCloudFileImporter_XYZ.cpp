// Copyright 2018-2019 Michal Cieciura. All Rights Reserved.

#include "PointCloudFileImporter_XYZ.h"
#include "PointCloudShared.h"
#include "PointCloudStatics.h"
#include "PointCloud.h"
#include "Misc/Paths.h"
#include "HAL/FileManager.h"
#include "Misc/FileHelper.h"

// Determines the level of precision loss, above which the cloud will be automatically re-centered
#define PC_MAXPRECISIONLOSS 0.01

// Empirically, 50MB seemed like a good balance for performance
#define PC_MAXBUFFERSIZE 52428800LL

// #todo: Simplify those
#define PC_STREAMTEXTFILE_OFFSET(Offset)															\
	{																								\
		uint32 ReadSize = FMath::Min(RemainingSize, PC_MAXBUFFERSIZE - Offset);				\
		DataPtr = Data + Offset;																	\
		Reader->Serialize(DataPtr, ReadSize);														\
		RemainingLoadedSize = ReadSize;																\
		RemainingSize -= ReadSize;																	\
	}

#define PC_STREAMTEXTFILE if (--RemainingLoadedSize <= 0 && RemainingSize >= 0) { PC_STREAMTEXTFILE_OFFSET(0) }
#define PC_STREAMTEXTFILE_WITHCHECK																	\
	if (--RemainingLoadedSize <= 0 && RemainingSize >= 0)											\
	{																								\
		uint32 OldBufferSize = DataPtr - (uint8*)ChunkStart;										\
																									\
		if (OldBufferSize > 0)																		\
		{																							\
			FMemory::Memcpy(Data, ChunkStart, OldBufferSize);										\
			ChunkStart = (char*)Data;																\
		}																							\
																									\
		PC_STREAMTEXTFILE_OFFSET(OldBufferSize)														\
	}

bool UPointCloudFileImporter_XYZ::HandleImport(const FString& Filename, TSharedPtr<FPointCloudImportSettings> ImportSettings, TArray<FPointCloudPoint>& OutPoints, EPointCloudColorMode &OutColorMode)
{
	// Modified FFileHelper::LoadFileToString, FFileHelper::LoadFileToStringArray and String::ParseIntoArray
	// #todo Add multithreading support
	TUniquePtr<FArchive> Reader(IFileManager::Get().CreateFileReader(*Filename));
	if (Reader)
	{
		FPointCloudImportSettings_XYZ *Settings = (FPointCloudImportSettings_XYZ*)(ImportSettings.IsValid() ? ImportSettings : GetImportSettings(Filename)).Get();

		uint32 FirstIndex = Settings->FirstLine;
		uint32 LastIndex = Settings->LastLine;
		TArray<int32> SelectedColumns = Settings->SelectedColumns;
		FVector2D RGBRange = Settings->RGBRange;

		// Flags which columns should have data assigned and used
		bool IsColumnPopulated[] = { (SelectedColumns[0] > -1), (SelectedColumns[1] > -1), (SelectedColumns[2] > -1), (SelectedColumns[3] > -1), (SelectedColumns[4] > -1), (SelectedColumns[5] > -1), (SelectedColumns[6] > -1) };

		// Check Data Usage
		uint8 NumExpectedLocations = IsColumnPopulated[0] + IsColumnPopulated[1] + IsColumnPopulated[2];
		uint8 NumExpectedColors = IsColumnPopulated[3] + IsColumnPopulated[4] + IsColumnPopulated[5] + IsColumnPopulated[6];
		uint8 NumExpectedColumns = NumExpectedLocations + NumExpectedColors;
		switch (NumExpectedColors)
		{
		case 1:
			OutColorMode = EPointCloudColorMode::Intensity;
			break;

		case 2:
		case 3:
		case 4:
			OutColorMode = EPointCloudColorMode::RGB;
			break;

		default:
			OutColorMode = EPointCloudColorMode::None;
			break;
		}

		// If the range has not been set, set it now
		if (NumExpectedColors > 0 && FMath::IsNearlyZero(RGBRange.X) && FMath::IsNearlyZero(RGBRange.Y))
		{
			RGBRange = Settings->ReadFileMinMaxColumns({ SelectedColumns[3], SelectedColumns[4], SelectedColumns[5], SelectedColumns[6] }, true);
		}

		float RGBMulti = 1 / (RGBRange.Y - RGBRange.X);

		OutPoints.Empty((LastIndex == 0 ? Settings->EstimatedPointCount : LastIndex + 1) - FirstIndex);

		FirstIndex += Settings->LinesToSkip;
		LastIndex += Settings->LinesToSkip;

		uint8 LoadedColumns = 0;

		int32 LookupTableSize = -1;
		int32 *LookupTableCount = nullptr;
		int32 **LookupTable = nullptr;

		// Build lookup table
		{
			for (int32 i = 0; i < SelectedColumns.Num(); i++)
			{
				LookupTableSize = FMath::Max(LookupTableSize, SelectedColumns[i]);
			}

			LookupTableSize++;

			if (!LookupTableSize)
			{
				return false;
			}

			LookupTableCount = new int32[LookupTableSize];

			for (int32 i = 0; i < LookupTableSize; i++)
			{
				LookupTableCount[i] = 0;

				for (int32 j = 0; j < SelectedColumns.Num(); j++)
				{
					if (SelectedColumns[j] == i)
					{
						LookupTableCount[i]++;
					}
				}
			}

			LookupTable = new int32*[LookupTableSize];

			for (int32 i = 0; i < LookupTableSize; i++)
			{
				if (LookupTableCount[i] == 0)
				{
					LookupTable[i] = nullptr;
					continue;
				}

				LookupTable[i] = new int32[LookupTableCount[i]];

				for (int32 j = 0, k = 0; j < SelectedColumns.Num(); j++)
				{
					if (SelectedColumns[j] == i)
					{
						LookupTable[i][k++] = j;
					}
				}
			}
		}

		// Read and process the data
		{
			// Used to store and apply offset to data to prevent precision loss
			double* RecenterOffset = new double[SelectedColumns.Num()]();
			bool bPrecisionChecked = false;

			int64 TotalSize = Reader->TotalSize();
			int64 RemainingSize = TotalSize;
			int64 RemainingLoadedSize = 0;

			// Prepare pointers
			uint8 *Data = (uint8*)FMemory::Malloc(PC_MAXBUFFERSIZE);
			uint8 *DataPtr = nullptr;

			PC_STREAMTEXTFILE;

			double* TempFloats = new double[SelectedColumns.Num()]();
			uint8 Iterator = 0;
			bool bEndOfLine = false;
			uint32 LineIndex = 0;
			while (RemainingLoadedSize > 0)
			{
				const char* ChunkStart = (char*)DataPtr;
				while (RemainingLoadedSize > 0 && *DataPtr != '\r' && *DataPtr != '\n' && *DataPtr != Settings->Delimiter[0])
				{
					DataPtr++;
					PC_STREAMTEXTFILE_WITHCHECK;
				}

				// Don't parse until the first index specified
				if (LineIndex >= FirstIndex)
				{
					if (LastIndex == Settings->LinesToSkip || LastIndex < FirstIndex || LineIndex <= LastIndex)
					{
						// Number of data slots associated with this column
						int32 DataAssociated = Iterator < LookupTableSize ? LookupTableCount[Iterator] : 0;

						if (DataAssociated)
						{
							double value = atof(ChunkStart);

							for (int32 i = 0; i < DataAssociated; i++)
							{
								TempFloats[LookupTable[Iterator][i]] = value - RecenterOffset[LookupTable[Iterator][i]];
							}

							LoadedColumns += DataAssociated;
						}

						Iterator++;
					}
					else
					{
						// Stop parsing after the last line specified
						break;
					}
				}

				if (*DataPtr == Settings->Delimiter[0])
				{
					DataPtr++;
					PC_STREAMTEXTFILE;
				}
				if (*DataPtr == '\r')
				{
					DataPtr++;
					PC_STREAMTEXTFILE;
					bEndOfLine = true;
				}
				if (*DataPtr == '\n')
				{
					DataPtr++;
					PC_STREAMTEXTFILE;
					bEndOfLine = true;
				}
				if (*DataPtr == 0)
				{
					bEndOfLine = true;
				}

				if (bEndOfLine)
				{
					if (LoadedColumns == NumExpectedColumns)
					{
						// Check for and correct precision loss
						if (!bPrecisionChecked)
						{
							bPrecisionChecked = true;

							bool bPrecisionCorrected = false;
							for (int32 p = 0; p < 3; p++)
							{
								if (FMath::Abs(TempFloats[p] - (double)(float)TempFloats[p]) > PC_MAXPRECISIONLOSS)
								{
									RecenterOffset[p] = TempFloats[p];
									TempFloats[p] = 0;

									bPrecisionCorrected = true;
								}
							}

							if (bPrecisionCorrected)
							{
								PC_LOG("Large offset detected - corrected by %f, %f, %f", RecenterOffset[0], RecenterOffset[1], RecenterOffset[2]);
							}
						}

						float X = IsColumnPopulated[0] ? TempFloats[0] : 0;
						float Y = IsColumnPopulated[1] ? TempFloats[1] : 0;
						float Z = IsColumnPopulated[2] ? TempFloats[2] : 0;

						switch (OutColorMode)
						{
						case EPointCloudColorMode::Intensity:
						{
							float R = IsColumnPopulated[3] ? FMath::Clamp(((float)TempFloats[3] - RGBRange.X) * RGBMulti, 0.0f, 1.0f) : 1;
							OutPoints.Emplace(X, Y, Z, R);
							break;
						}

						case EPointCloudColorMode::RGB:
						{
							float R = IsColumnPopulated[3] ? FMath::Clamp(((float)TempFloats[3] - RGBRange.X) * RGBMulti, 0.0f, 1.0f) : 1;
							float G = IsColumnPopulated[4] ? FMath::Clamp(((float)TempFloats[4] - RGBRange.X) * RGBMulti, 0.0f, 1.0f) : 1;
							float B = IsColumnPopulated[5] ? FMath::Clamp(((float)TempFloats[5] - RGBRange.X) * RGBMulti, 0.0f, 1.0f) : 1;
							float A = IsColumnPopulated[6] ? FMath::Clamp(((float)TempFloats[6] - RGBRange.X) * RGBMulti, 0.0f, 1.0f) : 1;

							OutPoints.Emplace(X, Y, Z, R, G, B, A);
							break;
						}

						default:	// None
						{
							OutPoints.Emplace(X, Y, Z);
							break;
						}
						}
					}

					LineIndex++;
					Iterator = 0;
					bEndOfLine = false;
					LoadedColumns = 0;
				}
			}

			Reader->Close();
			Reader = nullptr;
			delete[] TempFloats;
			delete[] RecenterOffset;
			TempFloats = NULL;
			FMemory::Free(Data);
			Data = NULL;
			DataPtr = NULL;
		}

		// Free lookup table
		if (LookupTableSize)
		{
			for (int32 i = 0; i < LookupTableSize; i++)
			{
				if (LookupTable[i])
				{
					delete[] LookupTable[i];
					LookupTable[i] = nullptr;
				}
			}

			delete[] LookupTable;
			delete[] LookupTableCount;
		}

		return true;
	}

	return false;
}

UPointCloud* UPointCloudFileImporter_XYZ::LoadPointCloudFromFile_XYZ(FString Filename, int32 FirstLine, int32 LastLine, FVector2D RGBRange, FPointCloudImportSettings_XYZ_Columns Columns)
{
	TSharedPtr<FPointCloudImportSettings_XYZ> ImportSettings(new FPointCloudImportSettings_XYZ(Filename));
	ImportSettings->FirstLine = FirstLine;
	ImportSettings->LastLine = LastLine;
	ImportSettings->RGBRange = RGBRange;
	ImportSettings->SelectedColumns = { FMath::Max(-1, Columns.LocationX), FMath::Max(-1, Columns.LocationY), FMath::Max(-1, Columns.LocationZ), FMath::Max(-1, Columns.Red), FMath::Max(-1, Columns.Green), FMath::Max(-1, Columns.Blue), FMath::Max(-1, Columns.Alpha) };

	return UPointCloudStatics::LoadPointCloudFromFile(Filename, ImportSettings);
}

FPointCloudImportSettings_XYZ::FPointCloudImportSettings_XYZ(const FString& Filename)
	: FPointCloudImportSettings(Filename)
	, LinesToSkip(0)
	, bHasDescriptions(false)
	, EstimatedPointCount(0)
	, RGBRange(FVector2D::ZeroVector)
	, FirstLine(0)
	, LastLine(0)
{
	// Initialize all 7 columns as -1 (none)
	for (int32 i = 0; i < 7; i++)
	{
		SelectedColumns.Add(-1);
	}

	ReadFileHeader(Filename);
}

bool FPointCloudImportSettings_XYZ::IsFileCompatible(const FString& InFilename)
{
	FPointCloudImportSettings_XYZ OtherFile(InFilename);
	return (OtherFile.LinesToSkip == LinesToSkip) && (OtherFile.Columns.Num() == Columns.Num());
}

void FPointCloudImportSettings_XYZ::ReadFileHeader(const FString& InFilename)
{
	TUniquePtr<FArchive> Reader(IFileManager::Get().CreateFileReader(*InFilename));
	if (Reader)
	{
		Filename = FPaths::IsRelative(InFilename) ? FPaths::ConvertRelativePathToFull(InFilename) : InFilename;

		int64 TotalSize = Reader->TotalSize();
		int64 Size = FMath::Min(TotalSize, (int64)204800);

		uint8* Data = (uint8*)FMemory::Malloc(Size);
		Reader->Serialize(Data, Size);
		Reader->Close();
		Reader = nullptr;
		uint8 *DataPtr = Data;

		int32 UnrecognizableLines = 0;
		bool bFetchNextLine = true;

		FString Line;
		uint8 *LineStart = NULL;

		while (bFetchNextLine)
		{
			bFetchNextLine = false;

			LineStart = DataPtr;

			while (*DataPtr != 0 && *DataPtr != '\r' && *DataPtr != '\n')
			{
				DataPtr++;
			}

			FFileHelper::BufferToString(Line, LineStart, DataPtr - LineStart);

			// Determine Delimiter
			if (Line.Contains(","))
			{
				Delimiter = ",";
			}
			else if (Line.Contains(" "))
			{
				Delimiter = " ";
			}
			else if (Line.Contains("\t"))
			{
				Delimiter = "\t";
			}

			Line.ParseIntoArray(Columns, *Delimiter);

			if (Columns.Num() < 3)
			{
				// Skip line
				UnrecognizableLines++;
				bFetchNextLine = true;

				if (*DataPtr == '\r')
				{
					DataPtr++;
				}
				if (*DataPtr == '\n')
				{
					DataPtr++;
				}
			}
		}

		LineStart = NULL;

		// Check if first line is text-based
		bHasDescriptions = Columns.Num() > 0 && !FCString::IsNumeric(*Columns[0]);

		// Attempt to assign defaults
		for (int32 i = 0; i < Columns.Num(); i++)
		{
			if (bHasDescriptions)
			{
				FString ColName = *Columns[i];

				// Clean the name
				ColName = ColName.Replace(TEXT("\\"), TEXT("")).Replace(TEXT("/"), TEXT(""));

				if (ColName.Equals("x", ESearchCase::IgnoreCase))
				{
					SelectedColumns[0] = i;
				}
				else if (ColName.Equals("y", ESearchCase::IgnoreCase))
				{
					SelectedColumns[1] = i;
				}
				else if (ColName.Equals("z", ESearchCase::IgnoreCase))
				{
					SelectedColumns[2] = i;
				}
				else if (ColName.Equals("intensity", ESearchCase::IgnoreCase))
				{
					SelectedColumns[3] = i;
				}
				else if (ColName.Contains("red"))
				{
					SelectedColumns[3] = i;
				}
				else if (ColName.Contains("green"))
				{
					SelectedColumns[4] = i;
				}
				else if (ColName.Contains("blue"))
				{
					SelectedColumns[5] = i;
				}
				else if (ColName.Contains("alpha"))
				{
					SelectedColumns[6] = i;
				}
			}
			else
			{
				// Leave alpha as None by default
				if (i < SelectedColumns.Num() && i < 6)
				{
					SelectedColumns[i] = i;
				}
			}
		}

		// Skip irrelevant lines
		LinesToSkip = UnrecognizableLines + bHasDescriptions;

		// Estimate number of points
		uint64 ContentSize = TotalSize;
		if (LinesToSkip > 0)
		{
			Size -= Line.Len() + 1;
			ContentSize -= Line.Len() + 1;

			if (*DataPtr == '\r')
			{
				DataPtr++;
			}
			if (*DataPtr == '\n')
			{
				DataPtr++;
			}
		}

		int32 LineCount = 0;
		int32 Count = 0;
		while (*DataPtr != 0)
		{
			while (*DataPtr != 0 && *DataPtr != '\r' && *DataPtr != '\n')
			{
				Count++;
				DataPtr++;
			}

			if (Count > 0)
			{
				LineCount++;
				Count = 0;
			}

			if (*DataPtr == '\r')
			{
				DataPtr++;
			}
			if (*DataPtr == '\n')
			{
				DataPtr++;
			}
		}

		EstimatedPointCount = ContentSize * LineCount / Size;

		FMemory::Free(Data);
		DataPtr = NULL;
	}
}

FVector2D FPointCloudImportSettings_XYZ::ReadFileMinMaxColumns(TArray<int32> ColumnsToScan, bool bBestMatch)
{
	// Check if we actually have any columns to search for
	bool bHasValidColumns = false;
	for (int32 i = 0; i < ColumnsToScan.Num(); i++)
	{
		if (ColumnsToScan[i] > -1)
		{
			bHasValidColumns = true;
			break;
		}
	}

	if (!bHasValidColumns)
	{
		return FVector2D::ZeroVector;
	}

	FVector2D Result;

	TUniquePtr<FArchive> Reader(IFileManager::Get().CreateFileReader(*Filename));
	if (Reader)
	{
		Result = FVector2D(FLT_MAX, -FLT_MAX);
		float Tmp = 0;

		int64 TotalSize = Reader->TotalSize();
		int64 RemainingSize = TotalSize;
		int64 RemainingLoadedSize = 0;

		// Prepare pointers
		uint8 *Data = (uint8*)FMemory::Malloc(PC_MAXBUFFERSIZE);
		uint8 *DataPtr = nullptr;

		PC_STREAMTEXTFILE;

		uint8 Iterator = 0;
		bool bEndOfLine = false;
		int32 LineNumber = 0;
		while (RemainingLoadedSize > 0 && LineNumber < 100000)
		{
			const char* ChunkStart = (char*)DataPtr;
			while (RemainingLoadedSize > 0 && *DataPtr != '\r' && *DataPtr != '\n' && *DataPtr != Delimiter[0])
			{
				DataPtr++;
				PC_STREAMTEXTFILE_WITHCHECK;
			}

			// Make sure we skip the header
			if (LineNumber >= LinesToSkip && ColumnsToScan.Contains(Iterator++))
			{
				Tmp = (float)atof(ChunkStart);
				Result.X = FMath::Min(Result.X, Tmp);
				Result.Y = FMath::Max(Result.Y, Tmp);
			}

			if (*DataPtr == Delimiter[0])
			{
				DataPtr++;
				PC_STREAMTEXTFILE;
			}
			if (*DataPtr == '\r')
			{
				DataPtr++;
				PC_STREAMTEXTFILE;
				bEndOfLine = true;
			}
			if (*DataPtr == '\n')
			{
				DataPtr++;
				PC_STREAMTEXTFILE;
				bEndOfLine = true;
			}

			if (bEndOfLine)
			{
				Iterator = 0;
				bEndOfLine = false;
				LineNumber++;
			}
		}

		Reader->Close();
		Reader = nullptr;
		FMemory::Free(Data);
		Data = NULL;
		DataPtr = NULL;
	}

	if (bBestMatch)
	{
		if (Result.X < 0)
		{
			if (Result.Y > 32768) { return Result; }	// Not really sure the scale here, return original
			else if (Result.Y > 512) { return FVector2D(-32767, 32768); }
			else if (Result.Y > 128) { return FVector2D(-511, 512); }
			else { return FVector2D(-127, 128); }
		}
		else
		{
			if (Result.Y > 65535) { return Result; }	// Not really sure the scale here, return original
			else if (Result.Y > 1023) { return FVector2D(0, 65535); }
			else if (Result.Y > 255) { return FVector2D(0, 1023); }
			else if (Result.Y > 1) { return FVector2D(0, 255); }
			else { return FVector2D(0, 1); }
		}
	}
	else
	{
		return Result;
	}
}

#if WITH_EDITOR
#define LOCTEXT_NAMESPACE "PointCloudImportSettings"

#define ADD_DROPDOWN(Index, Label) 	+ SHorizontalBox::Slot()	\
									.Padding(2)	\
									.FillWidth(0.3f)	\
									[	\
										SNew(SComboBox<TSharedPtr<FString>>)	\
										.OptionsSource(&Options)	\
										.InitiallySelectedItem(Options[SelectedColumns[Index] + 1])	\
										.OnSelectionChanged_Lambda([this](TSharedPtr<FString> NewItem, ESelectInfo::Type SelectInfo) { SelectedColumns[Index] = Options.IndexOfByKey(NewItem) - 1; })	\
										.OnGenerateWidget_Lambda([this](TSharedPtr<FString> Item) { return HandleGenerateWidget(*Item); })	\
										[	\
											HandleGenerateWidget(Label)	\
										]	\
									]

#include "DetailLayoutBuilder.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Input/SComboBox.h"
#include "Widgets/Input/SButton.h"

TSharedPtr<SWidget> FPointCloudImportSettings_XYZ::GetWidget()
{	
	Options.Empty();
	Options.Add(MakeShareable<FString>(new FString("- NONE -")));

	for (int32 i = 0; i < Columns.Num(); i++)
	{
		FString ColName;

		// Text based column headers
		if (bHasDescriptions)
		{
			ColName = Columns[i];
		}
		else
		{
			ColName = FString("Column ");
			ColName.AppendInt(i);
		}

		Options.Add(MakeShareable<FString>(new FString(*ColName)));
	}		

	TSharedPtr<SVerticalBox> SettingsWidget;
	
	// Initialize widget structure
	{
		SAssignNew(SettingsWidget, SVerticalBox)
		+ SVerticalBox::Slot()
		.AutoHeight()
		.Padding(2)
		[
			SNew(STextBlock).Text(FText::Format(LOCTEXT("PointCount", "Estimated Point Count: {0}"), FText::AsNumber(EstimatedPointCount))).Font(IDetailLayoutBuilder::GetDetailFont())
		]
		+ SVerticalBox::Slot()
		.AutoHeight()
		.Padding(2)
		[
			SNew(STextBlock).Text(LOCTEXT("AssignColumns", "Specify data source for each property.\nIf only one color is assigned, intensity mode will be assumed.")).Font(IDetailLayoutBuilder::GetDetailFont())
		]
		+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(SHorizontalBox)
			ADD_DROPDOWN(0, "Loc X")
			ADD_DROPDOWN(1, "Loc Y")
			ADD_DROPDOWN(2, "Loc Y")
			ADD_DROPDOWN(3, "Red")
			ADD_DROPDOWN(4, "Green")
			ADD_DROPDOWN(5, "Blue")
			ADD_DROPDOWN(6, "Alpha")
		]
		+ SVerticalBox::Slot()
		.AutoHeight()
		.Padding(2)
		[
			SNew(STextBlock).Text(LOCTEXT("RGBRange", "Specify color range to use for normalization.")).Font(IDetailLayoutBuilder::GetDetailFont())
		]
		+ SVerticalBox::Slot()
		.AutoHeight()
		.Padding(2)
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.FillWidth(0.65f)
			[
				SNew(SHorizontalBox)
				.ToolTipText(LOCTEXT("PointCloudImportSettings_RGBRange_ToolTip", "Values outside the specified range will be clamped to either MIN or MAX value.\nLeaving both values at 0 will auto-determine the range."))
				+ SHorizontalBox::Slot()
				.Padding(2)
				.FillWidth(0.5f)
				[
					SAssignNew(RGBRangeMin, SSpinBox<float>)
					.MinValue(FLT_MIN)
					.MaxValue(FLT_MAX)
					.Value(RGBRange.X)
					.OnValueChanged_Lambda([this](float NewValue) { RGBRange.X = NewValue; })
				]
				+ SHorizontalBox::Slot()
				.Padding(2)
				.FillWidth(0.5f)
				[
					SAssignNew(RGBRangeMax, SSpinBox<float>)
					.MinValue(FLT_MIN)
					.MaxValue(FLT_MAX)
					.Value(RGBRange.Y)
					.OnValueChanged_Lambda([this](float NewValue) { RGBRange.Y = NewValue; })
				]
			]
			+ SHorizontalBox::Slot()
			.FillWidth(0.125f)
			.Padding(2)
			[
				SNew(SButton)
				.HAlign(HAlign_Center)
				.Text(LOCTEXT("GetMinMaxScal", "Scan"))
				.ToolTipText(LOCTEXT("GetMinMaxScan_ToolTip", "This will scan through the file to determine the min and max values."))
				.OnClicked_Lambda([this]()
				{
					RGBRange = ReadFileMinMaxColumns({ SelectedColumns[3], SelectedColumns[4], SelectedColumns[5], SelectedColumns[6] }, false);
					RGBRangeMin->SetValue(RGBRange.X);
					RGBRangeMax->SetValue(RGBRange.Y);
					return FReply::Handled();
				})
			]
			+ SHorizontalBox::Slot()
			.FillWidth(0.225f)
			.Padding(2)
			[
				SNew(SButton)
				.HAlign(HAlign_Center)
				.Text(LOCTEXT("GetMinMaxMatch", "Scan & Match"))
				.ToolTipText(LOCTEXT("GetMinMaxMatch_ToolTip", "This will scan through the file to determine the min and max values. Best matching range will be chosen."))
				.OnClicked_Lambda([this]()
				{
					RGBRange = ReadFileMinMaxColumns({ SelectedColumns[3], SelectedColumns[4], SelectedColumns[5], SelectedColumns[6] }, true);
					RGBRangeMin->SetValue(RGBRange.X);
					RGBRangeMax->SetValue(RGBRange.Y);
					return FReply::Handled();
				})
			]
		]
		+ SVerticalBox::Slot()
		.AutoHeight()
		.Padding(2)
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(2)
			[
				SNew(STextBlock).Text(LOCTEXT("LineRange", "Specify line range to import. 0 will disable that end's limit.")).Font(IDetailLayoutBuilder::GetDetailFont())
			]
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(2)
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.Padding(2)
				.FillWidth(0.5f)
				[
					SNew(SSpinBox<uint32>)
					.MaxValue(-1)
					.Value(FirstLine)
					.OnValueChanged_Lambda([this](uint32 NewValue) { FirstLine = NewValue; })
				]
				+ SHorizontalBox::Slot()
				.Padding(2)
				.FillWidth(0.5f)
				[
					SNew(SSpinBox<uint32>)
					.MaxValue(-1)
					.Value(LastLine)
					.OnValueChanged_Lambda([this](uint32 NewValue) { LastLine = NewValue; })
				]
			]
		];
	}

	return SettingsWidget;
}

TSharedRef<SWidget> FPointCloudImportSettings_XYZ::HandleGenerateWidget(FString Item) const
{
	TSharedPtr<STextBlock> NewItem = SNew(STextBlock).Text(FText::FromString(Item)).Font(IDetailLayoutBuilder::GetDetailFont());
	NewItem->SetMargin(FMargin(2));
	return NewItem.ToSharedRef();
}

#undef ADD_DROPDOWN
#undef LOCTEXT_NAMESPACE
#endif // WITH_EDITOR

#undef PC_MAXPRECISIONLOSS
#undef PC_MAXBUFFERSIZE
#undef PC_STREAMTEXTFILE
#undef PC_STREAMTEXTFILE_OFFSET
#undef PC_STREAMTEXTFILE_WITHCHECK