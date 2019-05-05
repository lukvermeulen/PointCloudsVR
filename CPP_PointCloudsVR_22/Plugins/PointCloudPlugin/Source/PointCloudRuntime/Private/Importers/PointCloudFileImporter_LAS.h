// Copyright 2019 Michal Cieciura. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "PointCloudShared.h"
#include "PointCloudFileImporter.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#if WITH_EDITOR
#include "Widgets/SWidget.h"
#endif

#include "PointCloudFileImporter_LAS.generated.h"

#pragma pack(push)
#pragma pack(1)

/** Contains the common structure data between all formats */
struct FPointCloudImporter_LAS_PointDataRecordFormatCommon
{
	int32 X;
	int32 Y;
	int32 Z;
	uint16 Intensity;
};

/** Contains the RGB extension structure data compatible with all formats */
struct FPointCloudImporter_LAS_PointDataRecordFormatCommonRGB
{
	uint16 Red;
	uint16 Green;
	uint16 Blue;
};

/** Contains the Waveform extension structure data compatible with all formats */
struct FPointCloudImporter_LAS_PointDataRecordFormatCommonWaveform
{
	uint8 WavePacketDescriptorIndex;
	uint64 ByteOffsetToWaveformData;
	uint32 WaveformPacketSize;
	float ReturnPointWaveformLocation;
	float ParametricDX;
	float ParametricDY;
	float ParametricDZ;
};

/**
 * LAS - Point Data Record Format 0
 * As per LAS Specification v.1.4 - R14
 */
struct FPointCloudImporter_LAS_PointDataRecordFormat0 : FPointCloudImporter_LAS_PointDataRecordFormatCommon
{
	uint8 ReturnNumber : 3;
	uint8 NumberOfReturns : 3;
	uint8 ScanDirectionFlag : 1;
	uint8 EdgeOfFlightLine : 1;
	uint8 Classification;
	int8 ScanAngle;
	uint8 UserData;
	uint16 PointSourceID;
};

/**
 * LAS - Point Data Record Format 1
 * As per LAS Specification v.1.4 - R14
 */
struct FPointCloudImporter_LAS_PointDataRecordFormat1 : FPointCloudImporter_LAS_PointDataRecordFormat0
{
	double GPSTime;
};

/**
 * LAS - Point Data Record Format 2
 * As per LAS Specification v.1.4 - R14
 */
struct FPointCloudImporter_LAS_PointDataRecordFormat2 : FPointCloudImporter_LAS_PointDataRecordFormat0, FPointCloudImporter_LAS_PointDataRecordFormatCommonRGB { };

/**
 * LAS - Point Data Record Format 3
 * As per LAS Specification v.1.4 - R14
 */
struct FPointCloudImporter_LAS_PointDataRecordFormat3 : FPointCloudImporter_LAS_PointDataRecordFormat1, FPointCloudImporter_LAS_PointDataRecordFormatCommonRGB { };

/**
 * LAS - Point Data Record Format 4
 * As per LAS Specification v.1.4 - R14
 */
struct FPointCloudImporter_LAS_PointDataRecordFormat4 : FPointCloudImporter_LAS_PointDataRecordFormat1, FPointCloudImporter_LAS_PointDataRecordFormatCommonWaveform { };

/**
 * LAS - Point Data Record Format 5
 * As per LAS Specification v.1.4 - R14
 */
struct FPointCloudImporter_LAS_PointDataRecordFormat5 : FPointCloudImporter_LAS_PointDataRecordFormat3, FPointCloudImporter_LAS_PointDataRecordFormatCommonWaveform { };

/**
 * LAS - Point Data Record Format 6
 * As per LAS Specification v.1.4 - R14
 */
struct FPointCloudImporter_LAS_PointDataRecordFormat6 : FPointCloudImporter_LAS_PointDataRecordFormatCommon
{
	uint8 ReturnNumber : 4;
	uint8 NumberOfReturns : 4;
	uint8 ClassificationFlags : 4;
	uint8 ScannerChannel : 2;
	uint8 ScanDirectionFlag : 1;
	uint8 EdgeOfFlightLine : 1;
	uint8 Classification;
	uint8 UserData;
	int16 ScanAngle;
	uint16 PointSourceID;
	double GPSTime;
};

/**
 * LAS - Point Data Record Format 7
 * As per LAS Specification v.1.4 - R14
 */
struct FPointCloudImporter_LAS_PointDataRecordFormat7 : FPointCloudImporter_LAS_PointDataRecordFormat6, FPointCloudImporter_LAS_PointDataRecordFormatCommonRGB { };

/**
 * LAS - Point Data Record Format 8
 * As per LAS Specification v.1.4 - R14
 */
struct FPointCloudImporter_LAS_PointDataRecordFormat8 : FPointCloudImporter_LAS_PointDataRecordFormat7
{
	uint16 NIR;
};

/**
 * LAS - Point Data Record Format 9
 * As per LAS Specification v.1.4 - R14
 */
struct FPointCloudImporter_LAS_PointDataRecordFormat9 : FPointCloudImporter_LAS_PointDataRecordFormat6, FPointCloudImporter_LAS_PointDataRecordFormatCommonWaveform { };

/**
 * LAS - Point Data Record Format 10
 * As per LAS Specification v.1.4 - R14
 */
struct FPointCloudImporter_LAS_PointDataRecordFormat10 : FPointCloudImporter_LAS_PointDataRecordFormat8, FPointCloudImporter_LAS_PointDataRecordFormatCommonWaveform { };

/**
 * LAS - Public Header Block
 * As per LAS Specification v.1.4 - R14
 */
struct FPointCloudImporter_LAS_PublicHeaderBlock
{
	/** Base set, 227 bytes */
	uint32 FileSignature;	// Technically, this should be char[4] but uint32 is faster to compare
	uint16 FileSourceID;
	uint16 GlobalEncoding;
	uint32 ProjectID_GUIDData1;
	uint16 ProjectID_GUIDData2;
	uint16 ProjectID_GUIDData3;
	uint8 ProjectID_GUIDData4[8];
	uint8 VersionMajor;
	uint8 VersionMinor;
	char SystemIdentifier[32];
	char GeneratingSoftware[32];
	uint16 FileCreationDayofYear;
	uint16 FileCreationYear;
	uint16 HeaderSize;
	uint32 OffsetToPointData;
	uint32 NumberOfVLRs;
	uint8 PointDataRecordFormat;
	uint16 PointDataRecordLength;
	uint32 LegacyNumberOfPointRecords;
	uint32 LegacyNumberOfPointsByReturn[5];
	double XScaleFactor;
	double YScaleFactor;
	double ZScaleFactor;
	double XOffset;
	double YOffset;
	double ZOffset;
	double MaxX;
	double MaxY;
	double MaxZ;
	double MinX;
	double MinY;
	double MinZ;

	/** Added in 1.3, extra 8 bytes */
	uint64 StartOfWaveformDataPacketRecord;

	/** Added in 1.4, extra 140 bytes */
	uint64 StartOfFirstEVLR;
	uint32 NumberOfEVLRs;
	uint64 NumberOfPointRecords;
	uint64 NumberOfPointsByReturn[15];

	FORCEINLINE bool IsValid()
	{
		// char[] { 'L', 'A', 'S', 'F' } read as uint32 - 1179861324
		return FileSignature == 1179861324; 
	}
	FORCEINLINE uint64 GetNumberOfPoints()
	{
		return VersionMinor < 4 ? LegacyNumberOfPointRecords : NumberOfPointRecords;
	}

	/** Returns true if the point data contains user-specific extra bytes */
	bool PointDataContainsExtraContent()
	{
		uint16 Size = 0;

		switch (PointDataRecordFormat)
		{
		case 0: Size = sizeof(FPointCloudImporter_LAS_PointDataRecordFormat0); break;
		case 1: Size = sizeof(FPointCloudImporter_LAS_PointDataRecordFormat1); break;
		case 2: Size = sizeof(FPointCloudImporter_LAS_PointDataRecordFormat2); break;
		case 3: Size = sizeof(FPointCloudImporter_LAS_PointDataRecordFormat3); break;
		case 4: Size = sizeof(FPointCloudImporter_LAS_PointDataRecordFormat4); break;
		case 5: Size = sizeof(FPointCloudImporter_LAS_PointDataRecordFormat5); break;
		case 6: Size = sizeof(FPointCloudImporter_LAS_PointDataRecordFormat6); break;
		case 7: Size = sizeof(FPointCloudImporter_LAS_PointDataRecordFormat7); break;
		case 8: Size = sizeof(FPointCloudImporter_LAS_PointDataRecordFormat8); break;
		case 9: Size = sizeof(FPointCloudImporter_LAS_PointDataRecordFormat9); break;
		case 10: Size = sizeof(FPointCloudImporter_LAS_PointDataRecordFormat10); break;
		}

		return PointDataRecordLength != Size;
	}
};
#pragma pack(pop)

struct FPointCloudImportSettings_LAS : public FPointCloudImportSettings
{
	FPointCloudImporter_LAS_PublicHeaderBlock PublicHeaderBlock;

public:
	FPointCloudImportSettings_LAS(const FString& Filename);
	virtual bool IsFileCompatible(const FString& InFilename) override { return true; }
	virtual void Serialize(FArchive& Ar) override { }

private:
	/** Reads and parses header information about the given file. */
	void ReadFileHeader(const FString& InFilename);

	friend class UPointCloudFileImporter_LAS;

#if WITH_EDITOR
public:
	virtual TSharedPtr<SWidget> GetWidget() override;
#endif
};

/**
 * Inherits from UBlueprintFunctionLibrary to allow exposure to Blueprint Library in the same class.
 */
UCLASS()
class UPointCloudFileImporter_LAS : public UBlueprintFunctionLibrary, public IPointCloudFileImporterInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category = "Point Cloud", meta = (DisplayName = "Load Point Cloud From File (LAS)"))
	static UPointCloud* LoadPointCloudFromFile_LAS(FString Filename);

protected:
	virtual bool HandleImport(const FString& Filename, TSharedPtr<FPointCloudImportSettings> ImportSettings, TArray<FPointCloudPoint>& OutPoints, EPointCloudColorMode& OutColorMode) override;
	virtual TSharedPtr<FPointCloudImportSettings> GetImportSettings(const FString& Filename) override { return TSharedPtr<FPointCloudImportSettings>(new FPointCloudImportSettings_LAS(Filename)); }

	UPointCloudFileImporter_LAS() { PC_REGISTER_IMPORTER("LAS"); }
};