// Copyright 2018-2019 Michal Cieciura. All Rights Reserved.

#include "PointCloudFileImporter.h"
#include "PointCloudShared.h"
#include "PointCloud.h"
#include "Misc/Paths.h"

UPointCloudFileImporter* UPointCloudFileImporter::Instance = NULL;

bool UPointCloudFileImporter::Import(const FString& Filename, TSharedPtr<FPointCloudImportSettings> ImportSettings, TArray<FPointCloudPoint>& OutPoints, EPointCloudColorMode &OutColorMode)
{
	IPointCloudFileImporterInterface *Importer = GetImporterForType(Filename);
	if (Importer)
	{
		return Importer->HandleImport(Filename, ImportSettings, OutPoints, OutColorMode);
	}

	return false;
}

TSharedPtr<FPointCloudImportSettings> UPointCloudFileImporter::GetImportSettingsForType(const FString &Filename)
{
	IPointCloudFileImporterInterface *Importer = GetImporterForType(Filename);
	if (Importer)
	{
		return Importer->GetImportSettings(Filename);
	}

	return NULL;
}

TArray<FString> UPointCloudFileImporter::GetSupportedExtensions()
{
	TArray<FString> Extensions;

	for (FPointCloudRegisteredFileImporter Importer : Instance->RegisteredImporters)
	{
		Extensions.Append(Importer.Extensions);
	}

	return Extensions;
}

void UPointCloudFileImporter::RegisterImporter(IPointCloudFileImporterInterface* Importer, TArray<FString> Extensions)
{
	Instance->RegisteredImporters.Emplace(Importer, Extensions);
}

IPointCloudFileImporterInterface* UPointCloudFileImporter::GetImporterForType(const FString& Filename)
{
	FString FileExtension = FPaths::GetExtension(Filename);

	for (FPointCloudRegisteredFileImporter Importer : Instance->RegisteredImporters)
	{
		if (Importer.Extensions.Contains(FileExtension))
		{
			return Importer.Importer;
		}
	}

	return NULL;
}

void UPointCloudFileImporter::SerializeImportSettings(FArchive& Ar, TSharedPtr<FPointCloudImportSettings> *ImportSettings)
{
	if (!ImportSettings)
	{
		return;
	}

	if (Ar.IsLoading())
	{
		FString FilePath;
		Ar << FilePath;

		IPointCloudFileImporterInterface* Importer = GetImporterForType(FilePath);
		if (Importer)
		{
			TSharedPtr<FPointCloudImportSettings> _ImportSettings = Importer->GetImportSettings(FilePath);
			_ImportSettings->Serialize(Ar);
			*ImportSettings = _ImportSettings;
		}
	}
	else if (ImportSettings->IsValid())
	{
		Ar << (*ImportSettings)->Filename;
		(*ImportSettings)->Serialize(Ar);
	}
}

UPointCloudFileImporter::UPointCloudFileImporter()
{
	// This will assign an Instance pointer
	if (!Instance)
	{
		Instance = this;
	}
}
