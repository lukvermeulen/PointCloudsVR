// Copyright 2018-2019 Michal Cieciura. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "PointCloudShared.h"

class UPointCloud;

/**
 * Holds helper functions for dealing with point clouds.
 * Mostly import and processing related functionality
 */
class POINTCLOUDRUNTIME_API FPointCloudHelper
{
public:
	static FColor GetLODColors(const uint8 LOD);

	/** Reduces the density of the points using provided settings. */
	static void DensityReduction(TArray<FPointCloudPoint>& Points, const float MinDistanceBetweenPoints);

	/** Attempts to reduce the noise in the point cloud using settings provided. */
	static void NoiseReduction(TArray<FPointCloudPoint>& Points, const float MaxDistanceBetweenPoints, const int32 MinPointDensity);

	/** Transforms the point cloud using settings provided. */
	static void Transform(TArray<FPointCloudPoint>& Points, const EPointCloudOffset Offset, const FVector Translation, const FVector Scale, bool bUseLowPrecision);

	/**
	 * Splits the given points into sections of specified size.
	 * Can specify minimum number of points the section needs to contain to not be rejected
	 * Returns the array of chunks the points were split into.
	 */
	static TArray<TArray<FPointCloudPoint*>> SplitIntoSections(TArray<FPointCloudPoint*>& Points, const FVector SectionSize, int32 MinSectionCount = 1, int32 MaxSectionCount = 0);
	static TArray<TArray<FPointCloudPoint*>> SplitIntoSections(TArray<FPointCloudPoint>& Points, const FVector SectionSize, int32 MinSectionCount = 1, int32 MaxSectionCount = 0);

	/** Adjusts the Section Size if necessary */
	static FVector AdjustSectionSize(TArray<FPointCloudPoint>& Points, const FVector SectionSize);

	/** Returns the number of enabled points inside the provided set */
	static int32 CountEnabledPoints(const TArray<FPointCloudPoint*>& Points);
	static int32 CountEnabledPoints(const TArray<FPointCloudPoint>& Points);

	/** Returns the enabled points inside the provided set */
	static TArray<FPointCloudPoint*> GetEnabledPoints(TArray<FPointCloudPoint>& Points);

	/** Returns bounds of the provided set */
	static FBox CalculateBounds(const TArray<FPointCloudPoint*>& Points);
	static FBox CalculateBounds(const TArray<FPointCloudPoint>& Points);
	static FBox CalculateBounds(const TArray<FPointCloudPoint*>& Points, const FTransform& Transform);
	static FBox CalculateBounds(const TArray<FPointCloudPoint>& Points, const FTransform& Transform);

	/** Returns VRAM used by a single point, in bytes */
	static int32 CalculatePointSize(UPointCloud *PointCloud, bool bIncludeVB, bool bIncludeIB);

	/** Returns Color Mode as string */
	static FString GetColorModeAsString(class UPointCloud *PointCloud);

private:
	static void AdjustBounds(FBox &Bounds);
};