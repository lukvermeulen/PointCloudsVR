// Copyright 2019 Michal Cieciura. All Rights Reserved.

#include "PointCloudFileImporter_LAS.h"
#include "PointCloudShared.h"
#include "PointCloudStatics.h"
#include "PointCloud.h"
#include "HAL/FileManager.h"
#include "Misc/FileHelper.h"

// Determines the level of precision loss, above which the cloud will be automatically re-centered
#define PC_MAXPRECISIONLOSS 0.01

// Empirically, 50MB seemed like a good balance for performance
#define PC_MAXBUFFERSIZE 52428800LL

FPointCloudImportSettings_LAS::FPointCloudImportSettings_LAS(const FString& Filename)
	: FPointCloudImportSettings(Filename)
{
	ReadFileHeader(Filename);
}

void FPointCloudImportSettings_LAS::ReadFileHeader(const FString& InFilename)
{
	TUniquePtr<FArchive> Reader(IFileManager::Get().CreateFileReader(*Filename));
	if (Reader)
	{
		int64 TotalSize = Reader->TotalSize();

		// Check the minimum size for the file to be valid
		if (TotalSize > 227)
		{
			// Reserve space for the full public header block
			uint8* Data = (uint8*)FMemory::Malloc(375);

			// Start by reading the basic set, for LAS file versions prior to 1.4
			Reader->Serialize(Data, 227);

			// Populate the basic set
			FMemory::Memcpy(&PublicHeaderBlock, Data, 227);

			uint16 BytesRead = 227;

			// Check if the file has valid marker
			if (PublicHeaderBlock.IsValid())
			{
				// Read extra 8 bytes added post 1.2
				if (PublicHeaderBlock.VersionMinor > 2)
				{
					Reader->Serialize(Data + BytesRead, 8);
					BytesRead += 8;

					// Read extra 140 bytes added post 1.3
					if (PublicHeaderBlock.VersionMinor > 3)
					{
						Reader->Serialize(Data + BytesRead, 140);
						BytesRead += 140;
					}

					// Re-populate the header struct
					FMemory::Memcpy(&PublicHeaderBlock, Data, BytesRead);
				}

			}

			delete[] Data;
			Data = nullptr;
		}

		Reader->Close();
		Reader = nullptr;
	}
}

#if WITH_EDITOR
#define LOCTEXT_NAMESPACE "PointCloudImportSettings"

#include "DetailLayoutBuilder.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Input/SComboBox.h"
#include "Widgets/Input/SButton.h"

TSharedPtr<SWidget> FPointCloudImportSettings_LAS::GetWidget()
{
	TSharedPtr<SVerticalBox> SettingsWidget;

	// Initialize widget structure
	{
		SAssignNew(SettingsWidget, SVerticalBox)
		+ SVerticalBox::Slot()
		.AutoHeight()
		.Padding(2)
		[
			SNew(STextBlock).Text(FText::Format(LOCTEXT("FileVersion", "File Version: {0}.{1}"), FText::AsNumber(PublicHeaderBlock.VersionMajor), FText::AsNumber(PublicHeaderBlock.VersionMinor))).Font(IDetailLayoutBuilder::GetDetailFont())
		]
		+ SVerticalBox::Slot()
		.AutoHeight()
		.Padding(2)
		[
			SNew(STextBlock).Text(FText::Format(LOCTEXT("PointCount", "Point Count: {0}"), FText::AsNumber(PublicHeaderBlock.GetNumberOfPoints()))).Font(IDetailLayoutBuilder::GetDetailFont())
		]
		+ SVerticalBox::Slot()
		.AutoHeight()
		.Padding(2)
		[
			SNew(STextBlock).Text(FText::Format(LOCTEXT("PointFormat", "Point Format: {0}"), FText::AsNumber(PublicHeaderBlock.PointDataRecordFormat))).Font(IDetailLayoutBuilder::GetDetailFont())
		];
	}

	return SettingsWidget;
}

#undef LOCTEXT_NAMESPACE
#endif // WITH_EDITOR

UPointCloud* UPointCloudFileImporter_LAS::LoadPointCloudFromFile_LAS(FString Filename)
{
	// #implement Blueprint exposure
	return NULL;
}

bool UPointCloudFileImporter_LAS::HandleImport(const FString& Filename, TSharedPtr<FPointCloudImportSettings> ImportSettings, TArray<FPointCloudPoint>& OutPoints, EPointCloudColorMode& OutColorMode)
{
	FPointCloudImportSettings_LAS* Settings = (FPointCloudImportSettings_LAS*)(ImportSettings.IsValid() ? ImportSettings : GetImportSettings(Filename)).Get();
	FPointCloudImporter_LAS_PublicHeaderBlock Header = Settings->PublicHeaderBlock;

	// Return immediately if header is invalid
	if (!Header.IsValid())
	{
		return false;
	}

	bool bSuccess = false;

	FBenchmarkTimer::Reset();

	TUniquePtr<FArchive> Reader(IFileManager::Get().CreateFileReader(*Filename));
	if (Reader)
	{
		int64 TotalSize = Reader->TotalSize();
		int64 RemainingPoints = Header.GetNumberOfPoints();

		// Set the position at the beginning of the PointData
		Reader->Seek(Header.OffsetToPointData);
		
		// Calculate max buffer size
		int64 MaxPointsToRead = FMath::Min(RemainingPoints, PC_MAXBUFFERSIZE / Header.PointDataRecordLength);

		// Used to store and apply offset to data to prevent precision loss
		double RecenterOffset[] = {0, 0, 0};
		bool bPrecisionChecked = false;

		// Clear any existing data
		OutPoints.Empty(Header.GetNumberOfPoints());
		// #implement Line selection
		// OutPoints.Empty((LastIndex == 0 ? Settings->EstimatedPointCount : LastIndex + 1) - FirstIndex);

		// Set to true if any Intensity information is encountered
		bool bHasIntensityData = false;

		// Reserve space for the data
		uint8* Data = new uint8[MaxPointsToRead * Header.PointDataRecordLength];

		while (RemainingPoints > 0)
		{
			// Calculate the amount of data to read
			int64 PointsToRead = FMath::Min(MaxPointsToRead, RemainingPoints);
			int64 DataToRead = PointsToRead * Header.PointDataRecordLength;

			// Read the data
			Reader->Serialize(Data, DataToRead);

			// Decrement the remaining points
			RemainingPoints -= PointsToRead;

			uint8* DataPointer = Data;

			// Parse the data
			for (int64 i = 0; i < PointsToRead; i++)
			{
				FPointCloudImporter_LAS_PointDataRecordFormatCommon* Record = (FPointCloudImporter_LAS_PointDataRecordFormatCommon*)DataPointer;

				bHasIntensityData = bHasIntensityData || Record->Intensity > 0;

				float X = 0;
				float Y = 0;
				float Z = 0;
				float R = Record->Intensity / 65535.0f;
				float G = 1.0f;
				float B = 1.0f;
				float A = 1.0f;

				// Extract location information
				{
					// Calculate the actual location of the point
					double Location[] = {
						Header.XScaleFactor * Record->X + Header.XOffset - RecenterOffset[0],
						Header.YScaleFactor * Record->Y + Header.YOffset - RecenterOffset[1],
						Header.ZScaleFactor * Record->Z + Header.ZOffset - RecenterOffset[2]
					};

					// Check for and correct precision loss
					if (!bPrecisionChecked)
					{
						bPrecisionChecked = true;

						bool bPrecisionCorrected = false;
						for (int32 p = 0; p < 3; p++)
						{
							if (FMath::Abs(Location[p] - (double)(float)Location[p]) > PC_MAXPRECISIONLOSS)
							{
								RecenterOffset[p] = Location[p];
								Location[p] = 0;

								bPrecisionCorrected = true;
							}
						}

						if (bPrecisionCorrected)
						{
							PC_LOG("Large offset detected - corrected by %f, %f, %f", RecenterOffset[0], RecenterOffset[1], RecenterOffset[2]);
						}
					}

					// Convert location to floats
					X = Location[0];
					Y = Location[1];
					Z = Location[2];
				}

				// Extract color information
				{
					FPointCloudImporter_LAS_PointDataRecordFormatCommonRGB* RecordRGB = nullptr;

					switch (Header.PointDataRecordFormat)
					{
					case 2: RecordRGB = (FPointCloudImporter_LAS_PointDataRecordFormat2*)DataPointer; break;
					case 3: RecordRGB = (FPointCloudImporter_LAS_PointDataRecordFormat3*)DataPointer; break;
					case 5: RecordRGB = (FPointCloudImporter_LAS_PointDataRecordFormat5*)DataPointer; break;
					case 7: RecordRGB = (FPointCloudImporter_LAS_PointDataRecordFormat7*)DataPointer; break;
					case 8: RecordRGB = (FPointCloudImporter_LAS_PointDataRecordFormat8*)DataPointer; break;
					case 10: RecordRGB = (FPointCloudImporter_LAS_PointDataRecordFormat10*)DataPointer; break;
					}

					if (RecordRGB)
					{
						R = RecordRGB->Red / 65535.0f;
						G = RecordRGB->Green / 65535.0f;
						B = RecordRGB->Blue / 65535.0f;
					}
				}

				OutPoints.Emplace(X, Y, Z, R, G, B, A);

				// Increment the data pointer
				DataPointer += Header.PointDataRecordLength;
			}
		}

		// Set ColorMode
		switch (Header.PointDataRecordFormat)
		{
		case 2:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
			OutColorMode = EPointCloudColorMode::RGB;
			break;

		default:
			OutColorMode = EPointCloudColorMode::Intensity;
			break;
		}

		// Switch ColorMode to None if necessary
		if (OutColorMode == EPointCloudColorMode::Intensity && !bHasIntensityData)
		{
			OutColorMode = EPointCloudColorMode::None;

			// Override the R channel, to prevent the cloud from becoming black
			for (int64 i = 0; i < OutPoints.Num(); i++)
			{
				OutPoints[i].Color.R = 255;
			}
		}

		bSuccess = true;

		// Free memory
		delete[] Data;
		Data = nullptr;
		Reader->Close();
		Reader = nullptr;
	}

	FBenchmarkTimer::Log("Loading");

	return bSuccess;
}

#undef PC_MAXBUFFERSIZE
#undef PC_MAXPRECISIONLOSS