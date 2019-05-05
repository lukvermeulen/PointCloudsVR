// Copyright 2018-2019 Michal Cieciura. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "PointCloudShared.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PointCloudStatics.generated.h"

class UPointCloud;
struct FPointCloudImportSettings;

/**
 * Provides convenient set of Blueprint exposed functions
 */
UCLASS()
class POINTCLOUDRUNTIME_API UPointCloudStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/** Location prior to transformation applied */
	UFUNCTION(BlueprintPure, Category = "Point Cloud")
	static FORCEINLINE FVector GetOriginalLocation(FPointCloudPoint InPoint) { return InPoint.OriginalLocation; }

	/** Location after transformation applied */
	UFUNCTION(BlueprintPure, Category = "Point Cloud")
	static FORCEINLINE FVector GetLocation(FPointCloudPoint InPoint) { return InPoint.Location; }

	UFUNCTION(BlueprintPure, Category = "Point Cloud")
	static FORCEINLINE FColor GetColor(FPointCloudPoint InPoint) { return InPoint.Color; }

	UFUNCTION(BlueprintPure, Category = "Point Cloud")
	static FORCEINLINE bool IsEnabled(FPointCloudPoint InPoint) { return InPoint.IsEnabled(); }

	/** Location prior to transformation applied */
	UFUNCTION(BlueprintCallable, Category = "Point Cloud")
	static void SetOriginalLocation(UPARAM(ref) FPointCloudPoint &InPoint, FVector NewOriginalLocation) { InPoint.OriginalLocation = NewOriginalLocation; }

	UFUNCTION(BlueprintCallable, Category = "Point Cloud")
	static void SetColor(UPARAM(ref) FPointCloudPoint &InPoint, FColor NewColor) { InPoint.Color = NewColor; }

	/**
	 * Manually sets enabled state
	 * This will also prevent reduction settings from changing the status
	 */
	UFUNCTION(BlueprintCallable, Category = "Point Cloud")
	static void SetEnabled(UPARAM(ref) FPointCloudPoint &InPoint, bool NewEnabled)
	{
		InPoint.SetEnabled(NewEnabled);
		InPoint.SetEnabledOverride(true);
	}

	/** This will restore automatic state selection when rebuilding */
	UFUNCTION(BlueprintCallable, Category = "Point Cloud")
	static void SetEnabledAuto(UPARAM(ref) FPointCloudPoint &InPoint) { InPoint.SetEnabledOverride(false); }

	UFUNCTION(BlueprintPure, Category = "Point Cloud")
	static FPointCloudPoint MakePointCloudPoint(FVector Location, FColor Color, bool bEnabled);
		
	UFUNCTION(BlueprintPure, Category = "Point Cloud", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject"))
	static UPointCloud* MakeEmptyPointCloud(UObject* WorldContextObject);

	/** Returns new Point Cloud object, imported using the settings provided */
	static UPointCloud* LoadPointCloudFromFile(const FString &Filename, TSharedPtr<FPointCloudImportSettings> ImportSettings, UObject* InParent = (UObject*)GetTransientPackage(), FName InName = NAME_None, EObjectFlags Flags = RF_NoFlags);
};