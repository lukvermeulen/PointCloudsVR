// Copyright 2018-2019 Michal Cieciura. All Rights Reserved.
 
#include "PointCloudStatics.h"
#include "PointCloud.h"
#include "PointCloudFileImporter.h"
#include "Misc/FileHelper.h"
#include "PointCloudHelper.h"
#include "Misc/Paths.h"

FPointCloudPoint UPointCloudStatics::MakePointCloudPoint(FVector Location, FColor Color, bool bEnabled)
{
	return FPointCloudPoint(Location, Color, bEnabled);
}

UPointCloud* UPointCloudStatics::MakeEmptyPointCloud(UObject* WorldContextObject)
{
	return NewObject<UPointCloud>(WorldContextObject);
}

UPointCloud* UPointCloudStatics::LoadPointCloudFromFile(const FString &Filename, TSharedPtr<FPointCloudImportSettings> ImportSettings, UObject* InParent, FName InName, EObjectFlags Flags)
{
	TArray<FPointCloudPoint> Points;
	EPointCloudColorMode ColorMode = EPointCloudColorMode::None;

	UPointCloud *PC = NULL;

	if (UPointCloudFileImporter::Import(Filename, ImportSettings, Points, ColorMode))
	{
		PC = NewObject<UPointCloud>(InParent, InName, Flags);
		PC->ImportSettings = ImportSettings;
		PC->SetColorMode(ColorMode);
		PC->SetPointCloudData(Points);
		PC->SetNewSourcePath(Filename, false);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Parsing Failed"));
	}

	return PC;
}
