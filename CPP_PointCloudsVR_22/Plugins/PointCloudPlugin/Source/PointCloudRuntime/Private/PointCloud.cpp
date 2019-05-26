// Copyright 2018-2019 Michal Cieciura. All Rights Reserved.

#include "PointCloud.h"
#include "PointCloudHelper.h"
#include "PointCloudShared.h"
#include "PointCloudFileImporter.h"
#include "Misc/ScopedSlowTask.h"
#include "Materials/MaterialInstance.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Engine/Texture2D.h"
#include "UObject/ConstructorHelpers.h"
#include "Logging/MessageLog.h"

#include "Misc/FileHelper.h"
#include "HAL/PlatformFilemanager.h"

#include <iostream>
#include <fstream>
#include <string>

#define IS_PROPERTY(Name) PropertyChangedEvent.MemberProperty->GetName().Equals(#Name)

static const FGuid PointCloudFileGUID('P', 'C', 'P', 'F');
static const int32 PointCloudFileVersion(6);
FCustomVersionRegistration PCPFileVersion(PointCloudFileGUID, PointCloudFileVersion, TEXT("Point Cloud File Version"));

#define LOCTEXT_NAMESPACE "PointCloud"
#define MIN_SCALE 0.001f

/////////////////////////////////////////////////
// UPointCloud

UPointCloud::UPointCloud(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, SinglePolySpriteMinimumLOD(1)
	, MinimumNodePointCount(3)
	, bEnableLOD(true)
	, ViewDistance(2500.0f)
	, LODDistribution(1.6f)
	, LODReduction(0.5f)
	, PreferredNodeSize(100.0f)
	, bUseLowPrecision(false)
	, bVertexBufferPreloading(false)
	, RenderMethod(EPointCloudRenderMethod::Sprite_Lit_RGB)
	, Brightness(0)
	, Contrast(1)
	, Saturation(1)
	, Gamma(2.2f)
	, Color(FLinearColor::White)
	, Intensity(1)
	, ColorOverride(EPointCloudColorOverride::None)
	, ColorOverrideMethod(EPointCloudColorOverrideMethod::Multiply)
	, HeightColorBottom(FLinearColor::Red)
	, HeightColorTop(FLinearColor::Green)
	, SpriteSize(FVector2D(10, 150))
	, SpriteSizeBias(0.75f)
	, bLerpSpriteSize(true)
	, SinglePolyScale(FVector4(1, 1, 3, 1))
	, SpriteMask(EPointCloudSpriteMask::None)
	, bDebugLOD(false)
	, Offset(EPointCloudOffset::None) //Luk Offset setting
	, Translation(FVector::ZeroVector)
	, Scale(FVector::OneVector * 1) //Luk Scale setting
	, DensityReductionDistance(0)
	, NoiseReductionDistance(0)
	, NoiseReductionDensity(5)
	, Octree()
	, bDirty(true)
	, bTransformDirty(true)
	, bReductionDirty(true)
	, bRenderDataDirty(true)
	, bTreeDirty(true)
	, bMaterialDirty(true)
	, bWarningScale(true)
	, bWarningColor(true)
{
	//Make sure we are transactional to allow undo redo
	this->SetFlags(RF_Transactional);

	static ConstructorHelpers::FObjectFinder<UMaterial> M_PointCloud(TEXT("/PointCloudPlugin/Materials/M_PointCloud"));
	MasterMaterial = M_PointCloud.Object;
	RenderData.PointCloud = this;
	Octree.SetPointCloud(this);
}

UPointCloud::~UPointCloud()
{
}

void UPointCloud::Serialize(FArchive& Ar)
{
	DECLARE_SCOPE_CYCLE_COUNTER(TEXT("UPointCloud::Serialize"), STAT_PointCLoud_Serialize, STATGROUP_LoadTime);

	Ar.UsingCustomVersion(PointCloudFileGUID);

	Super::Serialize(Ar);
	
	// Make sure to serialize only actual data
	if (!FPaths::FileExists(Ar.GetArchiveName()))
	{
		return;
	}

	bool bLoading = Ar.IsLoading();
	bool bCooked = Ar.IsCooking();

	int32 Version = Ar.CustomVer(PointCloudFileGUID);

	bool ReservedFlags = false;
	bool FreeFlags = false;
	uint8 Flags =	(uint8)(bUsesSprites * 1) +
					(uint8)(FreeFlags * 2) +
					(uint8)(FreeFlags * 4) +
					(uint8)(FreeFlags * 8) +
					(uint8)(FreeFlags * 16) +
					(uint8)(FreeFlags * 32) +
					(uint8)(FreeFlags * 64) +
					(uint8)(FreeFlags * 128);

	int32 NumPoints = GetPointCount(bCooked);

	// ImportSettings were serialized differently in previous versions
	if (Version != -1)
	{
		// Serialize ImportSettings
		UPointCloudFileImporter::SerializeImportSettings(Ar, &ImportSettings);
	}

	Ar << bCooked;
	Ar << ColorMode;
	Ar << Flags;	
	Ar << NumPoints;

	if (bLoading)
	{
		ReservedFlags = ((Flags & 1) == 1);
		bUsesSprites = ((Flags & 2) == 2);
		bUseLowPrecision = ((Flags & 4) == 4);

		Points.AddUninitialized(NumPoints);
		PointCoordinatesCollected.AddUninitialized(NumPoints); //Initialize Array Luk
	}

	for (int32 i = 0; i < (bLoading ? NumPoints : Points.Num()); i++)
	{
		// Skip unnecessary points when saving cooked version
		if (!bLoading && bCooked && !Points[i].IsEnabled())
		{
			continue;
		}

		Ar << Points[i].OriginalLocation;
		Ar << Points[i].Color;

		// Flags
		if (!bCooked)
		{
			Ar << Points[i].Flags;
		}

		if (bLoading && bCooked)
		{
			Points[i].SetEnabled(true);
		}
	}

	if (bLoading)
	{
		bTransformDirty = true;
		bTreeDirty = true;
		bReductionDirty = true;
		bDirty = true;
		bMaterialDirty = true;
		bRenderDataDirty = true;
	}
}

void UPointCloud::GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const
{
	OutTags.Add(FAssetRegistryTag("PointCountTotal", PointCloudAssetRegistryCache.PointCountTotal, FAssetRegistryTag::TT_Numerical));
	OutTags.Add(FAssetRegistryTag("PointCountEnabled", PointCloudAssetRegistryCache.PointCountEnabled, FAssetRegistryTag::TT_Numerical));
	OutTags.Add(FAssetRegistryTag("ApproxSize", PointCloudAssetRegistryCache.ApproxSize, FAssetRegistryTag::TT_Dimensional));
	OutTags.Add(FAssetRegistryTag("Usage", PointCloudAssetRegistryCache.Usage, FAssetRegistryTag::TT_Alphabetical));

	Super::GetAssetRegistryTags(OutTags);
}

void UPointCloud::PostLoad()
{
	Super::PostLoad();
	Rebuild();
}

void UPointCloud::BeginDestroy()
{
	Super::BeginDestroy();
	RenderData.ReleaseResources(EVBReleaseMode::Full);
}

bool UPointCloud::IsReadyForFinishDestroy()
{
	return ReleaseResourcesFence.IsFenceComplete();
}

#if WITH_EDITOR

bool UPointCloud::CanEditChange(const UProperty* InProperty) const
{
	const bool ParentVal = Super::CanEditChange(InProperty);

	//if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UPointCloud, bPreloadVertexBuffer))
	//{
	//	return false;
	//}

	return ParentVal;
}

void UPointCloud::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	bool bCommonDirty = true;

	if (PropertyChangedEvent.MemberProperty)
	{
		LODReduction = FMath::Clamp(LODReduction, 0.0f, 1.0f);
		ViewDistance = FMath::Max(ViewDistance, 1.0f);
		LODDistribution = FMath::Max(LODDistribution, 1.0f);
		MinimumNodePointCount = FMath::Max(MinimumNodePointCount, 1);
		PreferredNodeSize = FMath::Max(PreferredNodeSize, 1.0f);
		SpriteSizeBias = FMath::Max(SpriteSizeBias, 0.0f);

		if (IS_PROPERTY(bDebugLOD))
		{
			bCommonDirty = false;
		}

		if (IS_PROPERTY(SourcePath))
		{
			bCommonDirty = false;
			SetNewSourcePath(SourcePath.FilePath, true);
		}

		if (IS_PROPERTY(DensityReductionDistance) || IS_PROPERTY(NoiseReductionDistance) || IS_PROPERTY(NoiseReductionDensity))
		{
			bReductionDirty = true;
		}

		if (IS_PROPERTY(ViewDistance) || IS_PROPERTY(LODDistribution))
		{
			bCommonDirty = false;
			CalculateDistanceThresholds();
			ApplyRenderingParameters();
		}

		if (IS_PROPERTY(LODReduction) || IS_PROPERTY(MinimumNodePointCount) || IS_PROPERTY(SinglePolySpriteMinimumLOD))
		{
			bTreeDirty = true;
		}

		if (IS_PROPERTY(PreferredNodeSize) || IS_PROPERTY(bEnableLOD))
		{
			bTreeDirty = true;
			bMaterialDirty = true;
		}

		if (IS_PROPERTY(Offset) || IS_PROPERTY(Translation) || IS_PROPERTY(Scale))
		{
			bTransformDirty = true;
			bTreeDirty = true;
			bMaterialDirty = true;
		}

		if (IS_PROPERTY(Scale))
		{
			bWarningScale = true;
		}

		if (IS_PROPERTY(bUseLowPrecision))
		{
			bReductionDirty = true;
			bTransformDirty = true;
		}

		if (IS_PROPERTY(Brightness) || IS_PROPERTY(Contrast) || IS_PROPERTY(Intensity) || IS_PROPERTY(Saturation) || IS_PROPERTY(Gamma) || IS_PROPERTY(Color) || IS_PROPERTY(SpriteSizeBias) || IS_PROPERTY(SpriteSize) || IS_PROPERTY(ColorOverride)
			|| IS_PROPERTY(SpriteMask) || IS_PROPERTY(SpriteTexture) || IS_PROPERTY(SinglePolyScale) || IS_PROPERTY(bLerpSpriteSize) || IS_PROPERTY(ColorOverrideMethod) || IS_PROPERTY(HeightColorBottom) || IS_PROPERTY(HeightColorTop))
		{
			ApplyRenderingParameters();
			bCommonDirty = false;
		}
		
		if (IS_PROPERTY(CustomMaterial))
		{
			bMaterialDirty = true;
		}

		if (IS_PROPERTY(bVertexBufferPreloading))
		{
			bRenderDataDirty = true;
		}

		if (IS_PROPERTY(RenderMethod))
		{
			// Only require full rebuild if Point/Sprite mode switched, otherwise simply update material params
			DetermineSpriteUsage();
			if (bUsesSprites == bUsesSpritesCached)
			{
				ApplyRenderingParameters();
				bCommonDirty = false;
			}
			else
			{
				bTreeDirty = true;
				bRenderDataDirty = true;
				bMaterialDirty = true;
			}

			bWarningColor = true;
			ProcessWarningMessages();
		}

		if (IS_PROPERTY(FileHeader) || IS_PROPERTY(SourcePath))
		{
			bCommonDirty = false;
		}

		if (bCommonDirty)
		{
			bDirty = true;
			OnPointCloudChangedEvent.Broadcast();
		}
	}

	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif

void UPointCloud::ApplyRenderingParameters()
{
	bool bUnlit = !UsesLit();
	bool bRGB = UsesRGB();

	FMaterialInstanceBasePropertyOverrides Overrides;
	Overrides.bOverride_ShadingModel = bUnlit;
	Overrides.ShadingModel = EMaterialShadingModel::MSM_Unlit;

	FVector BoundsSize = GetBounds().GetBox().GetSize();
	if (BoundsSize == FVector::ZeroVector)
	{
		BoundsSize = FVector::OneVector;
	}

	float LODFactor = LODReductionCached < 1 ? SpriteSizeBias / (1 - LODReductionCached) : 0;
	FVector4 ScaleAndOffset = FVector4(FVector2D(SinglePolyScale.Y + SinglePolyScale.W, SinglePolyScale.X + SinglePolyScale.Z) * 0.5f, FVector2D(SinglePolyScale.Y - SinglePolyScale.W, SinglePolyScale.X - SinglePolyScale.Z) * 0.25f);

	for (int32 i = 0; i < GetNumMaterials(); i++)
	{
		UMaterialInstanceDynamic *DynMaterial = Cast<UMaterialInstanceDynamic>(Materials[i]);
		if (DynMaterial)
		{
			DynMaterial->SetScalarParameterValue("PC__Brightness", Brightness);
			DynMaterial->SetScalarParameterValue("PC__Contrast", Contrast);
			DynMaterial->SetScalarParameterValue("PC__Saturation", Saturation);
			DynMaterial->SetScalarParameterValue("PC__Gamma", Gamma);
			DynMaterial->SetVectorParameterValue("PC__Color", bUseLODColoration ? FPointCloudHelper::GetLODColors(i) : Color);
			DynMaterial->SetScalarParameterValue("PC__Intensity", Intensity);
			DynMaterial->SetScalarParameterValue("PC__UseRGB", bRGB);
			DynMaterial->SetScalarParameterValue("PC__UseLODColoration", bUseLODColoration);
			DynMaterial->SetScalarParameterValue("PC__UseLerping", bLerpSpriteSize);
			DynMaterial->SetScalarParameterValue("PC__UseEmissive", bUnlit);
			DynMaterial->SetScalarParameterValue("PC__UseSprites", bUsesSpritesCached);
			DynMaterial->SetScalarParameterValue("PC__UseColorOverride", ColorOverride != EPointCloudColorOverride::None);
			DynMaterial->SetScalarParameterValue("PC__UseHeightColor", ColorOverride == EPointCloudColorOverride::Height);
			DynMaterial->SetScalarParameterValue("PC__MixWithIntensity", ColorOverrideMethod == EPointCloudColorOverrideMethod::Multiply);
			DynMaterial->SetVectorParameterValue("PC__HeightColorBottom", HeightColorBottom);
			DynMaterial->SetVectorParameterValue("PC__HeightColorTop", HeightColorTop);
			DynMaterial->SetScalarParameterValue("PC__UseCircle", SpriteMask == EPointCloudSpriteMask::Circle);
			DynMaterial->SetScalarParameterValue("PC__UseMask", SpriteMask == EPointCloudSpriteMask::Texture);
			DynMaterial->SetVectorParameterValue("PC__Bounds", BoundsSize);
			DynMaterial->SetScalarParameterValue("PC__UseTexture", IsValid(SpriteTexture));
			if (SpriteTexture)
			{
				DynMaterial->SetTextureParameterValue("PC__Texture", SpriteTexture);
			}

			bool bUseSinglePolySprites = SinglePolySpriteMinimumLODCached <= i;
			float Size = FMath::Min(SpriteSize.X * FMath::Pow(LODFactor, i), SpriteSize.Y);

			DynMaterial->SetScalarParameterValue("PC__UseSinglePolySprites", bUseSinglePolySprites);
			DynMaterial->SetVectorParameterValue("PC__SizeAndOffset", (bUseSinglePolySprites ? FLinearColor(ScaleAndOffset.X, ScaleAndOffset.Y, ScaleAndOffset.Z, ScaleAndOffset.W) : FLinearColor(1, 1, 0, 0)) * Size);
			
			// Lerping
			// FinalSize = Size * (1 + (x - LODStartDistance) * LerpMulti)
			float LerpMulti = 0;
			float DistanceStart = i > 0 ? DistanceThresholds[i - 1] : 0;
			if (i < GetNumMaterials() - 1)
			{
				// LerpMulti = DeltaSize / (DeltaDistace * Size)
				LerpMulti = (FMath::Min(SpriteSize.X * FMath::Pow(LODFactor, i + 1), SpriteSize.Y) - Size) / ((DistanceThresholds[i] - DistanceStart) * Size);
			}
			DynMaterial->SetScalarParameterValue("PC__LODStartDistance", DistanceStart);
			DynMaterial->SetScalarParameterValue("PC__LerpMulti", LerpMulti);

			DynMaterial->BasePropertyOverrides = Overrides;
		}
	}
}

void UPointCloud::SetLODColoration(bool bEnable)
{
	if (bUseLODColoration != bEnable)
	{
		bUseLODColoration = bEnable;
		ApplyRenderingParameters();
	}
}

int32 UPointCloud::GetPointCount(bool bCountOnlyEnabled) const
{
	return bCountOnlyEnabled ? FPointCloudHelper::CountEnabledPoints(Points) : Points.Num();
}

void UPointCloud::Rebuild(bool bForced)
{
	if (bForced)
	{
		bRenderDataDirty = bTransformDirty = bReductionDirty = bTreeDirty = bMaterialDirty = true;
	}

	bTransformDirty |= bReductionDirty;
	bRenderDataDirty |= bTransformDirty;
	bTreeDirty |= bReductionDirty;
	bool bBoundsDirty = bTransformDirty;

	float MaxProgress = (2 * bTransformDirty) + (2 * bReductionDirty) + bTreeDirty + bMaterialDirty + bBoundsDirty + bRenderDataDirty + 1;

	FScopedSlowTask Progress(MaxProgress, LOCTEXT("Rebuild", "Rebuilding Cloud..."));
	Progress.MakeDialog();

	if (bTransformDirty)
	{
		Progress.EnterProgressFrame(1.f, LOCTEXT("RebuildPrep", "Preparing Data"));

		// Apply Min constraints to scale
		if (FMath::Abs(Scale.X) < MIN_SCALE) Scale.X = Scale.X >= 0 ? MIN_SCALE : -MIN_SCALE;
		if (FMath::Abs(Scale.Y) < MIN_SCALE) Scale.Y = Scale.Y >= 0 ? MIN_SCALE : -MIN_SCALE;
		if (FMath::Abs(Scale.Z) < MIN_SCALE) Scale.Z = Scale.Z >= 0 ? MIN_SCALE : -MIN_SCALE;

		// Flips X axis
		FVector CorrectedScale = FVector(-Scale.X, Scale.Y, Scale.Z);

		if (bReductionDirty)
		{
			// Prepare the points to affect reduction distances correctly.
			for (int32 i = 0; i < Points.Num(); i++)
			{
				Points[i].Location = Points[i].OriginalLocation * CorrectedScale;

				if (!Points[i].IsEnabledOverriden())
				{
					Points[i].SetEnabled(true);
				}
			}

			Progress.EnterProgressFrame(1.f, LOCTEXT("RebuildDensity", "Reducing Density"));
			FPointCloudHelper::DensityReduction(Points, DensityReductionDistance);
			Progress.EnterProgressFrame(1.f, LOCTEXT("RebuildNoise", "Reducing Noise"));
			FPointCloudHelper::NoiseReduction(Points, NoiseReductionDistance, NoiseReductionDensity);
			bReductionDirty = false;

			// Refresh VertexIndex properties
			for (int32 i = 0, idx = 0; i < Points.Num(); i++)
			{
				Points[i].VertexIndex = Points[i].IsEnabled() ? idx++ : -1;  //Points[i].IsEnabled() ? idx++ : -1 luk changed
			} 
		}

		Progress.EnterProgressFrame(1.f, LOCTEXT("RebuildTransform", "Applying Transformations"));

		for (int i = 0; i < Points.Num(); i++)
		{
			Points[i].Location = Points[i].OriginalLocation;
		}

		FPointCloudHelper::Transform(Points, Offset, Translation, CorrectedScale, UsesLowPrecision());
		bTransformDirty = false;
	}
	
	if (bBoundsDirty)
	{
		Progress.EnterProgressFrame(1.f, LOCTEXT("RebuildBounds", "Calculating Bounds"));

		FBox BoundingBox = FPointCloudHelper::CalculateBounds(Points);
		LocalBounds.BoxExtent = BoundingBox.GetExtent();
		LocalBounds.Origin = BoundingBox.GetCenter();
		LocalBounds.SphereRadius = LocalBounds.BoxExtent.Size();
	}

	// Re-calculate new LOD Count
	LODCountCached = bEnableLOD ? FMath::Max(0, FMath::CeilToInt(FMath::Log2(GetBounds().BoxExtent.GetMax() / PreferredNodeSize))) + 1 : 1;

	if (bMaterialDirty)
	{
		Progress.EnterProgressFrame(1.f, LOCTEXT("RebuildRenderData", "Building Materials"));

		// Using add/remove approach to avoid crashes due to render thread still referencing the data
		int32 DeltaMaterials = GetLODCount() - Materials.Num();
		
		// Add new material slots
		if (DeltaMaterials > 0)
		{
			for (int32 i = 0; i < DeltaMaterials; i++)
			{
				Materials.Add(UMaterialInstanceDynamic::Create(CustomMaterial ? CustomMaterial : MasterMaterial, nullptr));
			}
		}
		// Remove unnecessary slots
		else if (DeltaMaterials < 0)
		{
			Materials.RemoveAt(GetLODCount(), -DeltaMaterials);
		}

		for (int32 i = 0; i < GetLODCount(); i++)
		{
			Materials[i] = UMaterialInstanceDynamic::Create(CustomMaterial ? CustomMaterial : MasterMaterial, nullptr);
		}

		DetermineSpriteUsage();
		bUsesSpritesCached = bUsesSprites;

		bMaterialDirty = false;
	}

	if (bRenderDataDirty)
	{
		Progress.EnterProgressFrame(1.f, LOCTEXT("RebuildRenderData", "Building Render Data"));

		BuildRenderData();

		bRenderDataDirty = false;
	}

	if (bTreeDirty)
	{
		Progress.EnterProgressFrame(1.f, LOCTEXT("RebuildTree", "Building Tree"));
		
		CalculateDistanceThresholds();

		Octree.Rebuild();
		Octree.PrintStats();	// #debug

		// If there are valid points but no tree data has been generated, indicate something went wrong
		if (GetPointCount(true) && !Octree.HasData())
		{
			FMessageLog MessageLog("AssetCheck");
			MessageLog.Error(FText::FromString(TEXT("No Octree data has been built! Something went wrong, please report this.")));
			MessageLog.Open();
		}

		LODReductionCached = LODReduction;
		SinglePolySpriteMinimumLODCached = SinglePolySpriteMinimumLOD;
		bTreeDirty = false;
	}

	Progress.EnterProgressFrame(1.f, LOCTEXT("RebuildFinalize", "Finalizing Data"));

	ApplyRenderingParameters();

	bDirty = false;
	OnPointCloudChangedEvent.Broadcast();
	OnPointCloudRebuiltEvent.Broadcast();

	CacheAssetRegistryTags();

	ProcessWarningMessages();
}

void UPointCloud::Bake()
{
	// Remove existing components?

	FScopedSlowTask Progress(1.f, LOCTEXT("Bake", "Baking Cloud..."));
	Progress.MakeDialog();

	Progress.EnterProgressFrame(1.f, LOCTEXT("Bake1", "Baking Cloud..."));
	
	TArray<FPointCloudPoint> NewPoints;
	NewPoints.AddUninitialized(FPointCloudHelper::CountEnabledPoints(Points));
	for (int32 i = 0, idx = 0; i < Points.Num(); i++)
	{
		if (Points[i].IsEnabled())
		{
			NewPoints[idx++] = Points[i];
		}
	}
	Points = NewPoints;
	
	bDirty = true;
	bRenderDataDirty = true;
	bTreeDirty = true;
	bMaterialDirty = true;
	OnPointCloudChangedEvent.Broadcast();
}

bool UPointCloud::Reimport(bool bRebuild)
{
	if (FPaths::FileExists(SourcePath.FilePath))
	{
		FScopedSlowTask Progress(1, LOCTEXT("Reimport", "Reimporting Cloud..."));
		Progress.MakeDialog();
		Progress.EnterProgressFrame(1.f);

		if (UPointCloudFileImporter::Import(SourcePath.FilePath, ImportSettings, Points, ColorMode))
		{
			bReductionDirty = true;
			bDirty = true;
			bTransformDirty = true;
			bRenderDataDirty = true;
			bTreeDirty = true;
			bMaterialDirty = true;
			OnPointCloudChangedEvent.Broadcast();

			bWarningScale = true;

			AdjustColorMode();
			AdjustPerformanceSettings();

			if (bRebuild)
			{
				Rebuild();
			}

			return true;
		}
		else
		{
			PC_ERROR("Reimport failed.");
		}
	}
	else
	{
		PC_ERROR("Reimport failed, provided source path '%s' could not be found.", *SourcePath.FilePath);
	}

	return false;
}

void UPointCloud::SetNewSourcePath(FString NewSourcePath, bool bProcessHeader)
{
	SourcePath.FilePath = NewSourcePath;

	if (!SourcePath.FilePath.IsEmpty() && FPaths::FileExists(SourcePath.FilePath) && FPaths::IsRelative(SourcePath.FilePath))
	{
		SourcePath.FilePath = FPaths::ConvertRelativePathToFull(SourcePath.FilePath);
	}

	if (bProcessHeader)
	{
		ImportSettings = NULL;
		OnPointCloudSourceChangedEvent.Broadcast();
	}
}

void UPointCloud::SetRenderingMethod(EPointCloudRenderMethod NewRenderMethod, bool bRebuild)
{
	RenderMethod = NewRenderMethod;

	// Only require full rebuild if Point/Sprite mode switched, otherwise simply update material params
	DetermineSpriteUsage();
	if (bUsesSprites == bUsesSpritesCached)
	{
		ApplyRenderingParameters();
	}
	else
	{
		bDirty = true;
		bTreeDirty = true;
		bMaterialDirty = true;

		if (bRebuild)
		{
			Rebuild();
		}
	}
}

void UPointCloud::SetCustomMaterial(UMaterialInterface *InCustomMaterial, bool bRebuild /*= false*/)
{
	CustomMaterial = InCustomMaterial;

	bMaterialDirty = true;
	bDirty = true;

	if (bRebuild)
	{
		Rebuild();
	}
}

void UPointCloud::SetPointCloudData(TArray<FPointCloudPoint> &InPoints, bool bRebuildCloud)
{
	// Only process if there is any data available
	if (InPoints.Num() > 0)
	{
		Points = InPoints;
		bRenderDataDirty = bTransformDirty = bReductionDirty = bTreeDirty = bMaterialDirty = true;

		AdjustPerformanceSettings();

		if (bRebuildCloud)
		{
			Rebuild();
		}
	}
}

void UPointCloud::SetColorMode(EPointCloudColorMode NewMode)
{
	ColorMode = NewMode;
	AdjustColorMode();
}

void UPointCloud::CalculateDistanceThresholds()
{
	DistanceThresholds.Reset();
	
	for (int32 i = 0; i < GetLODCount(); i++)
	{
		DistanceThresholds.Add(ViewDistance * FMath::Pow(LODDistribution, i));
	}

	Octree.CalculateDistanceThresholds();
}

void UPointCloud::CacheAssetRegistryTags()
{
	FBoxSphereBounds Bounds = GetBounds();

	PointCloudAssetRegistryCache.PointCountTotal = FString::FromInt(GetPointCount(false));
	PointCloudAssetRegistryCache.PointCountEnabled = FString::FromInt(GetPointCount(true));
	PointCloudAssetRegistryCache.ApproxSize = FString::Printf(TEXT("%dx%dx%d"), FMath::RoundToInt(Bounds.BoxExtent.X * 2.0f), FMath::RoundToInt(Bounds.BoxExtent.Y * 2.0f), FMath::RoundToInt(Bounds.BoxExtent.Z * 2.0f));
	PointCloudAssetRegistryCache.Usage = UsesSprites() ? "Sprites" : "Points";
}

void UPointCloud::DetermineSpriteUsage()
{
	switch (RenderMethod)
	{
	case EPointCloudRenderMethod::Sprite_Unlit:
	case EPointCloudRenderMethod::Sprite_Unlit_RGB:
	case EPointCloudRenderMethod::Sprite_Lit:
	case EPointCloudRenderMethod::Sprite_Lit_RGB:
		bUsesSprites = true;
		break;

	default:
		bUsesSprites = false;
		break;
	}
}

void UPointCloud::BuildRenderData()
{
	// Release render data if existing
	RenderData.ReleaseResources(EVBReleaseMode::None);

	// Wait for the render data to be released
	ReleaseResourcesFence.BeginFence();
	ReleaseResourcesFence.Wait();

	// If we have registered proxies, init the resources automatically
	if (RenderData.HasRegisteredProxies() || bVertexBufferPreloading)
	{
		RenderData.InitResources();
	}
}

void UPointCloud::AdjustColorMode()
{
	if (UsesRGB() && ColorMode != EPointCloudColorMode::RGB)
	{
		switch (RenderMethod)
		{
		case EPointCloudRenderMethod::Point_Unlit_RGB:
			SetRenderingMethod(EPointCloudRenderMethod::Point_Unlit);
			break;

		case EPointCloudRenderMethod::Point_Lit_RGB:
			SetRenderingMethod(EPointCloudRenderMethod::Point_Lit);
			break;

		case EPointCloudRenderMethod::Sprite_Unlit_RGB:
			SetRenderingMethod(EPointCloudRenderMethod::Sprite_Unlit);
			break;

		case EPointCloudRenderMethod::Sprite_Lit_RGB:
			SetRenderingMethod(EPointCloudRenderMethod::Sprite_Lit);
			break;
		}
	}
}

void UPointCloud::AdjustPerformanceSettings()
{
	if (Points.Num() < 75000)
	{
		bEnableLOD = false;
		MinimumNodePointCount = Points.Num() < 50000 ? 1 : 2;

		FMessageLog MessageLog("AssetCheck");
		MessageLog.Info(FText::FromString(FString::Printf(TEXT("Number of enabled points appears to be quite small (< 75K).\nLOD system will be disabled by default (you can re-enable it in the Point Cloud settings).\nMinimum Node Point Count will be reduced to %d."), MinimumNodePointCount)));
		MessageLog.Open();
	}
}

void UPointCloud::ProcessWarningMessages()
{
	FMessageLog MessageLog("AssetCheck");
	bool bOpenWindow = false;

	if (bWarningScale && LocalBounds.SphereRadius <= 200)
	{
		MessageLog.Info(FText::FromString(TEXT("The Point Cloud appears to be very small, did you use correct scale?")));

		if (Points.Num() > 100000)
		{
			MessageLog.PerformanceWarning(FText::FromString(TEXT("Small and dense clouds should have their Preferred Node Size reduced to improve performance.")));
		}

		if (UsesSprites())
		{
			MessageLog.Info(FText::FromString(TEXT("Smaller clouds may benefit from reduced Sprite Size")));
		}

		bWarningScale = false;
		bOpenWindow = true;
	}

	if (bWarningColor && ColorMode == EPointCloudColorMode::Intensity && UsesRGB())
	{
		MessageLog.Warning(FText::FromString(TEXT("The Point Cloud contains Intensity information but is set to use RGB Render Method - this may cause incorrect coloring results.")));
		bWarningColor = false;
		bOpenWindow = true;
	}

	if (bOpenWindow)
	{
		MessageLog.Open();
	}
}


// Luk Exporter Code

bool UPointCloud::BP_ExportCloud(FString SaveDirectory, FString FileName, bool DeleteMarked, bool AllowOverWriting = false)
{
	//TODO Call code to delete all points that where marked for deletion
	if (DeleteMarked)
	{
		BP_DeleteAllMarked();
	}
	

	//Set complete file path
	SaveDirectory += "\\";
	SaveDirectory += FileName;

	//convert to std::string to work with <ofstream>
	std::string StdSaveDirectory = std::string(TCHAR_TO_UTF8(*SaveDirectory));

	//declare my file and open the file
	std::ofstream luksfile;
	luksfile.open (StdSaveDirectory, std::ios::out | std::ios::app);


	//Abort if File already exists and overwriting not allowed
	if (!AllowOverWriting)
	{
		if (FPlatformFileManager::Get().GetPlatformFile().FileExists(*SaveDirectory))
		{
			return false;
		}
	}

	//TArray<FString> FinalString;  //complete file as array
	FString Line = "";            //variable for each line

	std::string StdLine = "";     //std::string for each line
	FString Delimiter = ", ";     //the delimiter to be used

	//Print Header
	luksfile << "X,Y,Z,R,G,B\n";

	for (auto const& point : Points)
	{
		if (point.IsEnabled()) //only export enabled points
		{
			//Add x y z r g b to line
			Line += FString::SanitizeFloat(point.Location.X) + Delimiter;
			Line += FString::SanitizeFloat(point.Location.Y) + Delimiter;
			Line += FString::SanitizeFloat(point.Location.Z) + Delimiter;
			Line += FString::FromInt(point.Color.R) + Delimiter;
			Line += FString::FromInt(point.Color.G) + Delimiter;
			Line += FString::FromInt(point.Color.B) + "\n";
		
			//convert FString Line to std::string and clear it after to be reused in next iteration
			StdLine = std::string(TCHAR_TO_UTF8(*Line)); 
			Line = "";

			//add line to file
			luksfile << StdLine;
		}
		//FFileHelper::SaveStringToFile(Line, SaveDirectory, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), FILEWRITE_Append);
		//FinalString.Add(Line); 
	}

	//close file
	luksfile.close();
	return true;
	//return FFileHelper::SaveStringArrayToFile(FinalString, *SaveDirectory);
}

bool UPointCloud::BP_ExportIndividual(FString SaveDirectory, FString SelectionName, int32 SelectionIndex, bool AllowOverWriting)
{
	FString FileName;	
	int32 SelectionI = SelectionIndex;
	//Set complete file path
	FileName = SelectionName + ".txt";
	SaveDirectory += "\\";
	SaveDirectory += FileName;  

	//convert to std::string to work with <ofstream>
	std::string StdSaveDirectory = std::string(TCHAR_TO_UTF8(*SaveDirectory));

	//declare my file and open the file
	std::ofstream luksindividualfile;
	luksindividualfile.open(StdSaveDirectory, std::ios::out | std::ios::app);

	//TArray<FString> FinalString;  //complete file as array
	FString Line = "";            //variable for each line

	std::string StdLine = "";     //std::string for each line
	FString Delimiter = ", ";     //the delimiter to be used

	//Print Header
	luksindividualfile << "X,Y,Z,R,G,B\n";

	//For every pointIndex in selection array
	for (auto const& pointIndex : Octree.GetSelectionList(SelectionIndex))
	{
		//Add x y z r g b to line
		//Line += FString::FromInt(pointIndex) + "\n";
		Line += FString::SanitizeFloat(Points[pointIndex].Location.X) + Delimiter;
		Line += FString::SanitizeFloat(Points[pointIndex].Location.Y) + Delimiter;
		Line += FString::SanitizeFloat(Points[pointIndex].Location.Z) + Delimiter;
		Line += FString::FromInt(Points[pointIndex].Color.R) + Delimiter;
		Line += FString::FromInt(Points[pointIndex].Color.G) + Delimiter;
		Line += FString::FromInt(Points[pointIndex].Color.B) + "\n";
		
		//convert FString Line to std::string and clear it after to be reused in next iteration
		StdLine = std::string(TCHAR_TO_UTF8(*Line));
		Line = "";

		//add line to file
		luksindividualfile << StdLine;
	}

	//close file
	luksindividualfile.close();
	return true;
}

#undef LOCTEXT_NAMESPACE
