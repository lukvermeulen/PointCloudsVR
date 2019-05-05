// Copyright 2018-2019 Michal Cieciura. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "PointCloudShared.h"
#include "PointCloudFileImporter.h"

#if WITH_EDITOR
#include "Widgets/Input/SComboBox.h"
#include "Widgets/Input/SSpinBox.h"
#endif

#include "PointCloudFileImporter_XYZ.generated.h"

/**
 * This set of classes is responsible for importing column-based text formats with extensions XYZ and TXT. 
 */

/** Used to help expose the import settings to Blueprints */
USTRUCT(BlueprintType)
struct FPointCloudImportSettings_XYZ_Columns
{
	GENERATED_BODY()

public:
	/** Index of a column containing Location X data */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Import Settings")
	int32 LocationX;

	/** Index of a column containing Location Y data */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Import Settings")
	int32 LocationY;

	/** Index of a column containing Location Z data */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Import Settings")
	int32 LocationZ;

	/**
	 * Index of a column containing Red channel or Intensity data.
	 * Set to -1 if neither is available
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Import Settings")
	int32 Red;

	/** Index of a column containing Green channel. Set to -1 if not available */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Import Settings")
	int32 Green;

	/** Index of a column containing Blue channel. Set to -1 if not available */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Import Settings")
	int32 Blue;

	/** Index of a column containing Alpha channel. Set to -1 if not available */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Import Settings")
	int32 Alpha;

public:
	FPointCloudImportSettings_XYZ_Columns()
	{
		LocationX = 0;
		LocationY = 1;
		LocationZ = 2;
		Red = 3;
		Green = 4;
		Blue = 5;
		Alpha = -1;
	}
};

struct FPointCloudImportSettings_XYZ : public FPointCloudImportSettings
{
	int32 LinesToSkip;
	bool bHasDescriptions;
	uint32 EstimatedPointCount;
	FString Delimiter;
	TArray<FString> Columns;
	TArray<int32> SelectedColumns;
	FVector2D RGBRange;

	/** Specify first and last line to read from the file */
	uint32 FirstLine;
	uint32 LastLine;

public:
	FPointCloudImportSettings_XYZ(const FString& Filename);
	virtual bool IsFileCompatible(const FString& InFilename) override;

	/** Links the FPointCloudImportSettings_XYZ with FArchive serialization */
	virtual void Serialize(FArchive& Ar) override
	{
		Ar << LinesToSkip << bHasDescriptions << EstimatedPointCount << Delimiter << Columns << SelectedColumns << RGBRange << FirstLine << LastLine;
	}

private:
	/** Reads and parses header information about the given file. */
	void ReadFileHeader(const FString& InFilename);

	/**
	 * Scans the given file and searches for Min and Max values within the given columns.
	 * Optionally, attempts to find the best color range match for the given MinMax pair
	 */
	FVector2D ReadFileMinMaxColumns(TArray<int32> ColumnsToScan, bool bBestMatch);

	friend class UPointCloudFileImporter_XYZ;

#if WITH_EDITOR
private:
	TArray<TSharedPtr<FString>> Options;
	TSharedPtr<SSpinBox<float>> RGBRangeMin;
	TSharedPtr<SSpinBox<float>> RGBRangeMax;

public:
	virtual TSharedPtr<SWidget> GetWidget() override;

private:
	TSharedRef<SWidget> HandleGenerateWidget(FString Item) const;
#endif
};

/**
 * Inherits from UBlueprintFunctionLibrary to allow exposure to Blueprint Library in the same class.
 */
UCLASS()
class UPointCloudFileImporter_XYZ : public UBlueprintFunctionLibrary, public IPointCloudFileImporterInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category = "Point Cloud", meta = (DisplayName = "Load Point Cloud From File (XYZ)"))
	static UPointCloud* LoadPointCloudFromFile_XYZ(FString Filename, int32 FirstLine, int32 LastLine, FVector2D RGBRange, FPointCloudImportSettings_XYZ_Columns Columns);

protected:
	virtual bool HandleImport(const FString& Filename, TSharedPtr<FPointCloudImportSettings> ImportSettings, TArray<FPointCloudPoint>& OutPoints, EPointCloudColorMode &OutColorMode) override;
	virtual TSharedPtr<FPointCloudImportSettings> GetImportSettings(const FString& Filename) override { return TSharedPtr<FPointCloudImportSettings>(new FPointCloudImportSettings_XYZ(Filename)); }

	UPointCloudFileImporter_XYZ() { PC_REGISTER_IMPORTER("TXT", "XYZ"); }
};