// Copyright 2018-2019 Michal Cieciura. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "PointCloudShared.h"
#include "UObject/Interface.h"
#include "Widgets/SWidget.h"
#include "PointCloudFileImporter.generated.h"

#define PC_REGISTER_IMPORTER(...) UPointCloudFileImporter::RegisterImporter(this, {__VA_ARGS__})

class UPointCloud;
class UPointCloudFileImporter;

/** Base for all importer settings */
struct POINTCLOUDRUNTIME_API FPointCloudImportSettings
{
	FString Filename;

	/** Holds a flag determining whether the same settings should be applied to the whole import at once */
	bool bImportAll;

	FPointCloudImportSettings(const FString& Filename)
		: Filename(Filename)
		, bImportAll(false)
	{
	}
	virtual ~FPointCloudImportSettings() {}

	/**
	 * Should return true if the given file is compatible with this instance of settings
	 * Useful for detecting different headers
	 */
	virtual bool IsFileCompatible(const FString& InFilename) { return false; }

	/**
	 * Links the FPointCloudImportSettings with FArchive serialization
	 * No need to manually serialize Filename - it is handled by UPointCloudFileImporter::SerializeImportSettings
	 */
	virtual void Serialize(FArchive& Ar) { }

#if WITH_EDITOR
	/** Used to create properties window */
	virtual TSharedPtr<SWidget> GetWidget() { return nullptr; }
#endif
};

/** Expose interface to UE's reflection system */
UINTERFACE()
class UPointCloudFileImporterInterface : public UInterface
{
	GENERATED_BODY()
};

/** Interface used by all importers */
class IPointCloudFileImporterInterface
{
	GENERATED_BODY()

public:
	/** This is what will actually be called to process the import of the file */
	virtual bool HandleImport(const FString& Filename, TSharedPtr<FPointCloudImportSettings> ImportSettings, TArray<FPointCloudPoint>& OutPoints, EPointCloudColorMode &OutColorMode) { return false; }

	/** Returns a shared pointer for the import settings of this importer */
	virtual TSharedPtr<FPointCloudImportSettings> GetImportSettings(const FString& Filename) { return NULL; }
};

/** Links extensions to file importers capable of handling them */
struct FPointCloudRegisteredFileImporter
{
	IPointCloudFileImporterInterface* Importer;
	TArray<FString> Extensions;

	FPointCloudRegisteredFileImporter(IPointCloudFileImporterInterface* Importer, TArray<FString> Extensions)
		: Importer(Importer)
		, Extensions(Extensions)
	{
	}
};

/**
 * Base for all importers
 * Holds information about all registered importers
 */
UCLASS()
class POINTCLOUDRUNTIME_API UPointCloudFileImporter : public UObject
{
	GENERATED_BODY()

protected:
	static UPointCloudFileImporter* Instance;
	TArray<FPointCloudRegisteredFileImporter> RegisteredImporters;

public:
	/**
	 * Automatically detects correct format and performs the import.
	 * Populates OutPoints and OutColorMode parameters
	 * Returns true if the import was successful.
	 */
	static bool Import(const FString& Filename, TSharedPtr<FPointCloudImportSettings> ImportSettings, TArray<FPointCloudPoint>& OutPoints, EPointCloudColorMode &OutColorMode);

	/**
	 * Returns the import settings instance depending on the format provided
	 */
	static TSharedPtr<FPointCloudImportSettings> GetImportSettingsForType(const FString &Filename);

	/** Returns the list of all registered extensions */
	static TArray<FString> GetSupportedExtensions();

	/** Called to register an importer for the supported formats list */
	static void RegisterImporter(IPointCloudFileImporterInterface* Importer, TArray<FString> Extensions);

	/** Returns pointer to the importer, which supports the given format */
	static IPointCloudFileImporterInterface* GetImporterForType(const FString& Filename);

	/** Responsible for serialization using correct serializer for the given format. */
	static void SerializeImportSettings(FArchive& Ar, TSharedPtr<FPointCloudImportSettings> *ImportSettings);

protected:
	UPointCloudFileImporter();
	~UPointCloudFileImporter() {}
};
