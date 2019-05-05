// Copyright 2018-2019 Michal Cieciura. All Rights Reserved.

#include "PointCloudHelper.h"
#include "PointCloudShared.h"
#include "PointCloud.h"
#include "Async/Async.h"
#include "Async/Future.h"
#include "UObject/Package.h"

FColor LODColors[8] = { FColor(255, 255, 255), FColor(255, 0, 0), FColor(0, 255, 0), FColor(0, 0, 255), FColor(255, 255, 0), FColor(255, 0, 255), FColor(0, 255, 255), FColor(128, 0, 128) };
FColor FPointCloudHelper::GetLODColors(const uint8 LOD)
{
	return LODColors[FMath::Min(LOD, (uint8)7)];
}

void FPointCloudHelper::DensityReduction(TArray<FPointCloudPoint>& Points, const float MinDistanceBetweenPoints)
{
	if (MinDistanceBetweenPoints > 0)
	{	
		FVector CellSize = CalculateBounds(Points).GetSize() * 0.101;
		for (int32 pass = 0; pass < 2; pass++)
		{
			TArray<TArray<FPointCloudPoint*>> Sections = SplitIntoSections(Points, CellSize, 10, 2800);

			int32 NumThreads = Sections.Num();
			TFuture<bool> *Results = new TFuture<bool>[NumThreads];

			// Fire threads
			for (int32 i = 0; i < NumThreads; i++)
			{
				Results[i] = Async<bool>(EAsyncExecution::ThreadPool, [i, &Sections, &MinDistanceBetweenPoints]
				{
					TArray<FPointCloudPoint*>& Section = Sections[i];

					for (int32 j = 0; j < Section.Num(); j++)
					{
						if (!Section[j]->IsEnabled())
						{
							continue;
						}

						for (int32 k = 0; k < Section.Num(); k++)
						{
							if (j == k || !Section[k]->IsEnabled() || Section[k]->IsEnabledOverriden())
							{
								continue;
							}

							Section[k]->SetEnabled(Section[j]->GridDistance(Section[k]) > MinDistanceBetweenPoints);
						}
					}

					return true;
				});
			}

			// Sync
			for (int32 i = 0; i < NumThreads; i++)
			{
				if (Results[i].Get()) {}
			}

			delete[] Results;

			CellSize *= 0.75;
		}
	}
}

void FPointCloudHelper::NoiseReduction(TArray<FPointCloudPoint>& Points, const float MaxDistanceBetweenPoints, const int32 MinPointDensity)
{
	if (MaxDistanceBetweenPoints <= 0 || MinPointDensity <= 0)
	{
		return;
	}

	TArray<TArray<FPointCloudPoint*>> Sections = SplitIntoSections(Points, CalculateBounds(Points).GetSize() * 0.101, 1, 2800);

	int32 NumThreads = Sections.Num();
	TFuture<bool> *Results = new TFuture<bool>[NumThreads];

	// Fire threads
	for (int32 i = 0; i < NumThreads; i++)
	{
		Results[i] = Async<bool>(EAsyncExecution::ThreadPool, [i, &Sections, &MaxDistanceBetweenPoints, &MinPointDensity]
		{
			TArray<FPointCloudPoint*>& Section = Sections[i];
			
			for (int32 j = 0; j < Section.Num(); j++)
			{				
				if (!Section[j]->IsEnabled() || Section[j]->IsEnabledOverriden())
				{
					continue;
				}

				int32 Neighbors = 0;
				Section[j]->SetEnabled(false);

				for (int32 k = 0; k < Section.Num(); k++)
				{
					if (j == k || !Section[k]->IsEnabled())
					{
						continue;
					}

					if (Section[j]->GridDistance(Section[k]) <= MaxDistanceBetweenPoints)
					{
						// If minimum density reached, no need to check this point further
						if (++Neighbors >= MinPointDensity)
						{
							Section[j]->SetEnabled(true);
							break;
						}
					}
				}
			}

			return true;
		});
	}

	// Sync
	for (int32 i = 0; i < NumThreads; i++)
	{
		if (Results[i].Get()) {}
	}

	delete[] Results;
}

void FPointCloudHelper::Transform(TArray<FPointCloudPoint>& Points, const EPointCloudOffset Offset, const FVector Translation, const FVector Scale, bool bUseLowPrecision)
{
	FVector OffsetTranslation = FVector::ZeroVector;

	switch (Offset)
	{
	case EPointCloudOffset::Center:
		OffsetTranslation = CalculateBounds(Points).GetCenter();
		break;
	
	case EPointCloudOffset::FirstPoint:
		for (int32 i = 0; i < Points.Num(); i++)
		{
			if (Points[i].IsEnabled())
			{
				OffsetTranslation = Points[i].Location;
				break;
			}
		}
		break;
	}

	for (FPointCloudPoint& Point : Points)
	{
		Point.Location = (Point.Location + Translation - OffsetTranslation) * Scale;

		if (bUseLowPrecision)
		{
			Point.Location = FVector((FFloat16)Point.Location.X, (FFloat16)Point.Location.Y, (FFloat16)Point.Location.Z);
		}
	}
}

TArray<TArray<FPointCloudPoint*>> FPointCloudHelper::SplitIntoSections(TArray<FPointCloudPoint>& Points, FVector SectionSize, int32 MinSectionCount, int32 MaxSectionCount)
{
	TArray<FPointCloudPoint*> PointsPtr;
	PointsPtr.AddUninitialized(Points.Num());
	for (int32 i = 0; i < Points.Num(); i++)
	{
		PointsPtr[i] = &Points[i];
	}

	return SplitIntoSections(PointsPtr, SectionSize, MinSectionCount, MaxSectionCount);
}
TArray<TArray<FPointCloudPoint*>> FPointCloudHelper::SplitIntoSections(TArray<FPointCloudPoint*>& Points, FVector SectionSize, int32 MinSectionCount /*= 1*/, int32 MaxSectionCount /*= 0*/)
{
	TArray<TArray<FPointCloudPoint*>> Chunks;

	if (SectionSize.X <= 0 || SectionSize.Y <= 0 || SectionSize.Z <= 0)
	{
		return Chunks;
	}

	FBox Bounds = CalculateBounds(Points);
	FVector BoundSize = Bounds.GetSize();

	int32 CellsX = FMath::CeilToInt(BoundSize.X / SectionSize.X);
	int32 CellsY = FMath::CeilToInt(BoundSize.Y / SectionSize.Y);
	int32 CellsZ = FMath::CeilToInt(BoundSize.Z / SectionSize.Z);

	FVector InvertedSectionSize = FVector::OneVector / SectionSize;

	// Initialize
	Chunks.AddDefaulted(CellsX * CellsY * CellsZ);

	// Calculate strides
	int32 StrideY = CellsX;
	int32 StrideZ = CellsX * CellsY;

	int32 NumPoints = Points.Num();
	int32 *Assignments = new int32[NumPoints];
	int32 PerBatch = 5000;
	int32 NumThreads = FMath::CeilToInt(((float)Points.Num()) / PerBatch);
	TFuture<bool> *Results = new TFuture<bool>[NumThreads];

	for (int32 i = 0; i < NumPoints; i++)
	{
		Assignments[i] = -1;
	}

	for (int32 b = 0; b < NumThreads; b++)
	{
		Results[b] = Async<bool>(EAsyncExecution::ThreadPool, [b, &PerBatch, &NumPoints, &Assignments, &Points, &Bounds, &InvertedSectionSize, &CellsX, &CellsY, &CellsZ, &StrideY, &StrideZ]
		{
			for (int32 i = 0, idx = b * PerBatch; i < PerBatch && idx < NumPoints; i++, idx++)
			{
				if (!Points[idx]->IsEnabled())
				{
					continue;
				}

				FVector v = (Points[idx]->Location - Bounds.Min) * InvertedSectionSize;
				Assignments[idx] = FMath::Min((int32)v.X, CellsX - 1) + FMath::Min((int32)v.Y, CellsY - 1) * StrideY + FMath::Min((int32)v.Z, CellsZ - 1) * StrideZ;
			}
				
			return true;
		});
	}

	// Sync
	for (int32 i = 0; i < NumThreads; i++)
	{
		if (Results[i].Get()) {}
	}

	// Assign
	for (int32 i = 0; i < NumPoints; i++)
	{
		if (Assignments[i] >= 0)
		{
			Chunks[Assignments[i]].Add(Points[i]);
		}
	}

	delete[] Results;
	delete[] Assignments;
	
	// Remove Empty Sections
	MinSectionCount = FMath::Max(MinSectionCount, 1);
	for (int32 i = 0; i < Chunks.Num(); i++)
	{
		if (Chunks[i].Num() < MinSectionCount)
		{
			Chunks.RemoveAt(i--);
		}
	}

	// Further divide if needed
	if (MaxSectionCount > 0)
	{
		for (int32 i = 0; i < Chunks.Num(); i++)
		{
			if (Chunks[i].Num() > MaxSectionCount)
			{
				Chunks.Append(SplitIntoSections(Chunks[i], SectionSize * 0.5f, MinSectionCount, MaxSectionCount));
				Chunks.RemoveAt(i--);
			}
		}
	}

	return Chunks;
}

FVector FPointCloudHelper::AdjustSectionSize(TArray<FPointCloudPoint>& Points, const FVector SectionSize)
{
	FVector Out = SectionSize;

	if (Out.X <= 0 || Out.Y <= 0 || Out.Z <= 0)
	{
		FVector BoundSize = CalculateBounds(Points).GetSize();

		if (Out.X <= 0)
		{
			Out.X = FMath::Max(BoundSize.X / 30.0f, 1000.0f);
		}
		if (Out.Y <= 0)
		{
			Out.Y = FMath::Max(BoundSize.Y / 30.0f, 1000.0f);
		}
		if (Out.Z <= 0)
		{
			Out.Z = FMath::Max(BoundSize.Z / 30.0f, 1000.0f);
		}
	}

	return Out;
}

int32 FPointCloudHelper::CountEnabledPoints(const TArray<FPointCloudPoint*>& Points)
{
	int32 Count = 0;

	for (int32 i = 0; i < Points.Num(); i++)
	{
		if (Points[i]->IsEnabled())
		{
			Count++;
		}
	}

	return Count;
}
int32 FPointCloudHelper::CountEnabledPoints(const TArray<FPointCloudPoint>& Points)
{
	int32 Count = 0;

	for (int32 i = 0; i < Points.Num(); i++)
	{
		if (Points[i].IsEnabled())
		{
			Count++;
		}
	}

	return Count;
}

TArray<FPointCloudPoint*> FPointCloudHelper::GetEnabledPoints(TArray<FPointCloudPoint>& Points)
{
	TArray<FPointCloudPoint*> EnabledPoints;

	for (int32 i = 0; i < Points.Num(); i++)
	{
		if (Points[i].IsEnabled())
		{
			EnabledPoints.Add(&Points[i]);
		}
	}

	return EnabledPoints;
}

FBox FPointCloudHelper::CalculateBounds(const TArray<FPointCloudPoint*>& Points, const FTransform& Transform)
{
	FBox BoundingBox(ForceInit);
	
	for (int32 Index = 0; Index < Points.Num(); Index++)
	{
		if (Points[Index] && Points[Index]->IsEnabled())
		{
			BoundingBox += Transform.TransformPosition(Points[Index]->Location);
		}
	}

	AdjustBounds(BoundingBox);

	return BoundingBox;
}
FBox FPointCloudHelper::CalculateBounds(const TArray<FPointCloudPoint>& Points, const FTransform& Transform)
{
	FBox BoundingBox(ForceInit);

	for (int32 Index = 0; Index < Points.Num(); Index++)
	{
		if (!Points[Index].IsEnabled())
		{
			continue;
		}

		BoundingBox += Transform.TransformPosition(Points[Index].Location);
	}

	AdjustBounds(BoundingBox);

	return BoundingBox;
}
FBox FPointCloudHelper::CalculateBounds(const TArray<FPointCloudPoint*>& Points)
{
	FBox BoundingBox(ForceInit);

	for (int32 Index = 0; Index < Points.Num(); Index++)
	{
		if (Points[Index] && Points[Index]->IsEnabled())
		{
			BoundingBox += Points[Index]->Location;
		}
	}

	AdjustBounds(BoundingBox);

	return BoundingBox;
}
FBox FPointCloudHelper::CalculateBounds(const TArray<FPointCloudPoint>& Points)
{
	FBox BoundingBox(ForceInit);

	for (int32 Index = 0; Index < Points.Num(); Index++)
	{
		if (!Points[Index].IsEnabled())
		{
			continue;
		}

		BoundingBox += Points[Index].Location;
	}

	AdjustBounds(BoundingBox);

	return BoundingBox;
}

int32 FPointCloudHelper::CalculatePointSize(UPointCloud *PointCloud, bool bIncludeVB, bool bIncludeIB)
{
	int32 Size = 0;

	// HalfPrecision only really uses 3 with the 4th being reserved for color
	if (bIncludeVB)
	{
		Size += PointCloud->UsesLowPrecision() ? 3 * sizeof(FFloat16) + sizeof(uint16) : sizeof(FVector) + sizeof(FColor);

		if (PointCloud->UsesSprites())
		{
			Size *= 4;
		}
	}

	// Index buffer
	if (bIncludeIB)
	{
		Size += (PointCloud->UsesSprites() ? 6 : 1) * sizeof(uint32);
	}

	return Size;
}

FString FPointCloudHelper::GetColorModeAsString(UPointCloud *PointCloud)
{
	const UEnum* EnumPtr = FindObject<UEnum>(ANY_PACKAGE, TEXT("EPointCloudColorMode"), true);
	return (EnumPtr && PointCloud) ? EnumPtr->GetNameStringByIndex((uint8)PointCloud->GetColorMode()) : FString("Invalid");
}

void FPointCloudHelper::AdjustBounds(FBox &Bounds)
{
	float MinValue = 0.01f;

	if (Bounds.Min.X == Bounds.Max.X)
	{
		Bounds.Min.X -= MinValue;
		Bounds.Max.X += MinValue;
	}
	if (Bounds.Min.Y == Bounds.Max.Y)
	{
		Bounds.Min.Y -= MinValue;
		Bounds.Max.Y += MinValue;
	}
	if (Bounds.Min.Z == Bounds.Max.Z)
	{
		Bounds.Min.Z -= MinValue;
		Bounds.Max.Z += MinValue;
	}
}
