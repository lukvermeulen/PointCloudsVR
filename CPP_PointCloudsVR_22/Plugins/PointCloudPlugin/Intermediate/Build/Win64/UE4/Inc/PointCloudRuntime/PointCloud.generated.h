// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPointCloudPoint;
struct FPlane;
struct FVector;
struct FColor;
class UMaterialInterface;
enum class EPointCloudRenderMethod : uint8;
struct FBoxSphereBounds;
enum class EPointCloudColorMode : uint8;
#ifdef POINTCLOUDRUNTIME_PointCloud_generated_h
#error "PointCloud.generated.h already included, missing '#pragma once' in PointCloud.h"
#endif
#define POINTCLOUDRUNTIME_PointCloud_generated_h

#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloud_h_75_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPointCloudData) \
	{ \
		P_GET_TARRAY_REF(FPointCloudPoint,Z_Param_Out_InPoints); \
		P_GET_UBOOL(Z_Param_bRebuildCloud); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPointCloudData(Z_Param_Out_InPoints,Z_Param_bRebuildCloud); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_ExportIndividual) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveDirectory); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SelectionName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SelectionIndex); \
		P_GET_UBOOL(Z_Param_AllowOverWriting); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BP_ExportIndividual(Z_Param_SaveDirectory,Z_Param_SelectionName,Z_Param_SelectionIndex,Z_Param_AllowOverWriting); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_ExportCloud) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveDirectory); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_GET_UBOOL(Z_Param_DeleteMarked); \
		P_GET_UBOOL(Z_Param_AllowOverWriting); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BP_ExportCloud(Z_Param_SaveDirectory,Z_Param_FileName,Z_Param_DeleteMarked,Z_Param_AllowOverWriting); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_AddSelectionIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_AddSelectionIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_ResetVariables) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_ResetVariables(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_DeleteAllMarked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_DeleteAllMarked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_MarkSelectionForDeletion) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SelectionListIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_MarkSelectionForDeletion(Z_Param_SelectionListIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_DeleteCollectedPoints) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SelectionListIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_DeleteCollectedPoints(Z_Param_SelectionListIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_PointOnPlaneInBounds) \
	{ \
		P_GET_STRUCT(FPlane,Z_Param_Plane); \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_STRUCT(FVector,Z_Param_PlanePoint1); \
		P_GET_STRUCT(FVector,Z_Param_PlanePoint2); \
		P_GET_STRUCT(FVector,Z_Param_PlanePoint3); \
		P_GET_STRUCT(FVector,Z_Param_PlaneNormal); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Threshhold); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BP_PointOnPlaneInBounds(Z_Param_Plane,Z_Param_Point,Z_Param_PlanePoint1,Z_Param_PlanePoint2,Z_Param_PlanePoint3,Z_Param_PlaneNormal,Z_Param_Threshhold); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_GetPointsOnPlaneInBounds) \
	{ \
		P_GET_STRUCT(FPlane,Z_Param_Plane); \
		P_GET_STRUCT(FVector,Z_Param_PlanePoint1); \
		P_GET_STRUCT(FVector,Z_Param_PlanePoint2); \
		P_GET_STRUCT(FVector,Z_Param_PlanePoint3); \
		P_GET_STRUCT(FVector,Z_Param_PlanePointA); \
		P_GET_STRUCT(FVector,Z_Param_PlanePointB); \
		P_GET_STRUCT(FVector,Z_Param_PlaneNormal); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Threshhold); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SelectionListIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_GetPointsOnPlaneInBounds(Z_Param_Plane,Z_Param_PlanePoint1,Z_Param_PlanePoint2,Z_Param_PlanePoint3,Z_Param_PlanePointA,Z_Param_PlanePointB,Z_Param_PlaneNormal,Z_Param_Threshhold,Z_Param_SelectionListIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_GetPointsInDrawnBox) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SelectionListIndex); \
		P_GET_TARRAY(FVector,Z_Param_BoxPoints); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_GetPointsInDrawnBox(Z_Param_SelectionListIndex,Z_Param_BoxPoints); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_CallFitBoxOnSelection) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SelectionListIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_CallFitBoxOnSelection(Z_Param_SelectionListIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_HideCollectedPoints) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SelectionListIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_HideCollectedPoints(Z_Param_SelectionListIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_ColorCollectedPoints) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SelectionListIndex); \
		P_GET_STRUCT(FColor,Z_Param_pColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_ColorCollectedPoints(Z_Param_SelectionListIndex,Z_Param_pColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCollectedPointLocations) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetCollectedPointLocations(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPointCloudData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FPointCloudPoint>*)Z_Param__Result=P_THIS->GetPointCloudData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_InCustomMaterial); \
		P_GET_UBOOL(Z_Param_bRebuild); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCustomMaterial(Z_Param_InCustomMaterial,Z_Param_bRebuild); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRenderingMethod) \
	{ \
		P_GET_ENUM(EPointCloudRenderMethod,Z_Param_NewRenderMethod); \
		P_GET_UBOOL(Z_Param_bRebuild); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRenderingMethod(EPointCloudRenderMethod(Z_Param_NewRenderMethod),Z_Param_bRebuild); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNewSourcePath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewSourcePath); \
		P_GET_UBOOL(Z_Param_bProcessHeader); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNewSourcePath(Z_Param_NewSourcePath,Z_Param_bProcessHeader); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReimport) \
	{ \
		P_GET_UBOOL(Z_Param_bRebuild); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Reimport(Z_Param_bRebuild); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBake) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Bake(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRebuild) \
	{ \
		P_GET_UBOOL(Z_Param_bForced); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Rebuild(Z_Param_bForced); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPointCount) \
	{ \
		P_GET_UBOOL(Z_Param_bCountOnlyEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPointCount(Z_Param_bCountOnlyEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBounds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBoxSphereBounds*)Z_Param__Result=P_THIS->GetBounds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLODCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetLODCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDirty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDirty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLODColoration) \
	{ \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLODColoration(Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyRenderingParameters) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyRenderingParameters(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetColorMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EPointCloudColorMode*)Z_Param__Result=P_THIS->GetColorMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUsesLowPrecision) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->UsesLowPrecision(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumMaterials) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumMaterials(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaterial) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_LOD); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetMaterial(Z_Param_LOD); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUsesLit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->UsesLit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUsesRGB) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->UsesRGB(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTouchedPoints) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SelectionListIndex); \
		P_GET_STRUCT(FVector,Z_Param_ColliderLocation); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Radius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetTouchedPoints(Z_Param_SelectionListIndex,Z_Param_ColliderLocation,Z_Param_Radius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUsesSprites) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->UsesSprites(); \
		P_NATIVE_END; \
	}


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloud_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPointCloudData) \
	{ \
		P_GET_TARRAY_REF(FPointCloudPoint,Z_Param_Out_InPoints); \
		P_GET_UBOOL(Z_Param_bRebuildCloud); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPointCloudData(Z_Param_Out_InPoints,Z_Param_bRebuildCloud); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_ExportIndividual) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveDirectory); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SelectionName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SelectionIndex); \
		P_GET_UBOOL(Z_Param_AllowOverWriting); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BP_ExportIndividual(Z_Param_SaveDirectory,Z_Param_SelectionName,Z_Param_SelectionIndex,Z_Param_AllowOverWriting); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_ExportCloud) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveDirectory); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_GET_UBOOL(Z_Param_DeleteMarked); \
		P_GET_UBOOL(Z_Param_AllowOverWriting); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BP_ExportCloud(Z_Param_SaveDirectory,Z_Param_FileName,Z_Param_DeleteMarked,Z_Param_AllowOverWriting); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_AddSelectionIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_AddSelectionIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_ResetVariables) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_ResetVariables(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_DeleteAllMarked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_DeleteAllMarked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_MarkSelectionForDeletion) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SelectionListIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_MarkSelectionForDeletion(Z_Param_SelectionListIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_DeleteCollectedPoints) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SelectionListIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_DeleteCollectedPoints(Z_Param_SelectionListIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_PointOnPlaneInBounds) \
	{ \
		P_GET_STRUCT(FPlane,Z_Param_Plane); \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_STRUCT(FVector,Z_Param_PlanePoint1); \
		P_GET_STRUCT(FVector,Z_Param_PlanePoint2); \
		P_GET_STRUCT(FVector,Z_Param_PlanePoint3); \
		P_GET_STRUCT(FVector,Z_Param_PlaneNormal); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Threshhold); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BP_PointOnPlaneInBounds(Z_Param_Plane,Z_Param_Point,Z_Param_PlanePoint1,Z_Param_PlanePoint2,Z_Param_PlanePoint3,Z_Param_PlaneNormal,Z_Param_Threshhold); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_GetPointsOnPlaneInBounds) \
	{ \
		P_GET_STRUCT(FPlane,Z_Param_Plane); \
		P_GET_STRUCT(FVector,Z_Param_PlanePoint1); \
		P_GET_STRUCT(FVector,Z_Param_PlanePoint2); \
		P_GET_STRUCT(FVector,Z_Param_PlanePoint3); \
		P_GET_STRUCT(FVector,Z_Param_PlanePointA); \
		P_GET_STRUCT(FVector,Z_Param_PlanePointB); \
		P_GET_STRUCT(FVector,Z_Param_PlaneNormal); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Threshhold); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SelectionListIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_GetPointsOnPlaneInBounds(Z_Param_Plane,Z_Param_PlanePoint1,Z_Param_PlanePoint2,Z_Param_PlanePoint3,Z_Param_PlanePointA,Z_Param_PlanePointB,Z_Param_PlaneNormal,Z_Param_Threshhold,Z_Param_SelectionListIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_GetPointsInDrawnBox) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SelectionListIndex); \
		P_GET_TARRAY(FVector,Z_Param_BoxPoints); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_GetPointsInDrawnBox(Z_Param_SelectionListIndex,Z_Param_BoxPoints); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_CallFitBoxOnSelection) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SelectionListIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_CallFitBoxOnSelection(Z_Param_SelectionListIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_HideCollectedPoints) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SelectionListIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_HideCollectedPoints(Z_Param_SelectionListIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_ColorCollectedPoints) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SelectionListIndex); \
		P_GET_STRUCT(FColor,Z_Param_pColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_ColorCollectedPoints(Z_Param_SelectionListIndex,Z_Param_pColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCollectedPointLocations) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetCollectedPointLocations(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPointCloudData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FPointCloudPoint>*)Z_Param__Result=P_THIS->GetPointCloudData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_InCustomMaterial); \
		P_GET_UBOOL(Z_Param_bRebuild); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCustomMaterial(Z_Param_InCustomMaterial,Z_Param_bRebuild); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRenderingMethod) \
	{ \
		P_GET_ENUM(EPointCloudRenderMethod,Z_Param_NewRenderMethod); \
		P_GET_UBOOL(Z_Param_bRebuild); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRenderingMethod(EPointCloudRenderMethod(Z_Param_NewRenderMethod),Z_Param_bRebuild); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNewSourcePath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewSourcePath); \
		P_GET_UBOOL(Z_Param_bProcessHeader); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNewSourcePath(Z_Param_NewSourcePath,Z_Param_bProcessHeader); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReimport) \
	{ \
		P_GET_UBOOL(Z_Param_bRebuild); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Reimport(Z_Param_bRebuild); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBake) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Bake(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRebuild) \
	{ \
		P_GET_UBOOL(Z_Param_bForced); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Rebuild(Z_Param_bForced); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPointCount) \
	{ \
		P_GET_UBOOL(Z_Param_bCountOnlyEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPointCount(Z_Param_bCountOnlyEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBounds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBoxSphereBounds*)Z_Param__Result=P_THIS->GetBounds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLODCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetLODCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDirty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDirty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLODColoration) \
	{ \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLODColoration(Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyRenderingParameters) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyRenderingParameters(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetColorMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EPointCloudColorMode*)Z_Param__Result=P_THIS->GetColorMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUsesLowPrecision) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->UsesLowPrecision(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumMaterials) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumMaterials(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaterial) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_LOD); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetMaterial(Z_Param_LOD); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUsesLit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->UsesLit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUsesRGB) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->UsesRGB(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTouchedPoints) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SelectionListIndex); \
		P_GET_STRUCT(FVector,Z_Param_ColliderLocation); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Radius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetTouchedPoints(Z_Param_SelectionListIndex,Z_Param_ColliderLocation,Z_Param_Radius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUsesSprites) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->UsesSprites(); \
		P_NATIVE_END; \
	}


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloud_h_75_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPointCloud, NO_API)


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloud_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPointCloud(); \
	friend struct Z_Construct_UClass_UPointCloud_Statics; \
public: \
	DECLARE_CLASS(UPointCloud, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PointCloudRuntime"), NO_API) \
	DECLARE_SERIALIZER(UPointCloud) \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloud_h_75_ARCHIVESERIALIZER


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloud_h_75_INCLASS \
private: \
	static void StaticRegisterNativesUPointCloud(); \
	friend struct Z_Construct_UClass_UPointCloud_Statics; \
public: \
	DECLARE_CLASS(UPointCloud, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PointCloudRuntime"), NO_API) \
	DECLARE_SERIALIZER(UPointCloud) \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloud_h_75_ARCHIVESERIALIZER


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloud_h_75_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPointCloud(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPointCloud) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPointCloud); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPointCloud); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPointCloud(UPointCloud&&); \
	NO_API UPointCloud(const UPointCloud&); \
public:


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloud_h_75_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPointCloud(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPointCloud(UPointCloud&&); \
	NO_API UPointCloud(const UPointCloud&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPointCloud); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPointCloud); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPointCloud)


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloud_h_75_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MasterMaterial() { return STRUCT_OFFSET(UPointCloud, MasterMaterial); } \
	FORCEINLINE static uint32 __PPO__Materials() { return STRUCT_OFFSET(UPointCloud, Materials); }


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloud_h_72_PROLOG
#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloud_h_75_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloud_h_75_PRIVATE_PROPERTY_OFFSET \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloud_h_75_RPC_WRAPPERS \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloud_h_75_INCLASS \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloud_h_75_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloud_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloud_h_75_PRIVATE_PROPERTY_OFFSET \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloud_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloud_h_75_INCLASS_NO_PURE_DECLS \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloud_h_75_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PointCloud."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POINTCLOUDRUNTIME_API UClass* StaticClass<class UPointCloud>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloud_h


#define FOREACH_ENUM_EPOINTCLOUDSPRITEMASK(op) \
	op(EPointCloudSpriteMask::None) \
	op(EPointCloudSpriteMask::Circle) \
	op(EPointCloudSpriteMask::Texture) 

enum class EPointCloudSpriteMask : uint8;
template<> POINTCLOUDRUNTIME_API UEnum* StaticEnum<EPointCloudSpriteMask>();

#define FOREACH_ENUM_EPOINTCLOUDCOLOROVERRIDEMETHOD(op) \
	op(EPointCloudColorOverrideMethod::Replace) \
	op(EPointCloudColorOverrideMethod::Multiply) 

enum class EPointCloudColorOverrideMethod : uint8;
template<> POINTCLOUDRUNTIME_API UEnum* StaticEnum<EPointCloudColorOverrideMethod>();

#define FOREACH_ENUM_EPOINTCLOUDCOLOROVERRIDE(op) \
	op(EPointCloudColorOverride::None) \
	op(EPointCloudColorOverride::Height) \
	op(EPointCloudColorOverride::Position) 

enum class EPointCloudColorOverride : uint8;
template<> POINTCLOUDRUNTIME_API UEnum* StaticEnum<EPointCloudColorOverride>();

#define FOREACH_ENUM_EPOINTCLOUDRENDERMETHOD(op) \
	op(EPointCloudRenderMethod::Point_Unlit) \
	op(EPointCloudRenderMethod::Point_Unlit_RGB) \
	op(EPointCloudRenderMethod::Point_Lit) \
	op(EPointCloudRenderMethod::Point_Lit_RGB) \
	op(EPointCloudRenderMethod::Sprite_Unlit) \
	op(EPointCloudRenderMethod::Sprite_Unlit_RGB) \
	op(EPointCloudRenderMethod::Sprite_Lit) \
	op(EPointCloudRenderMethod::Sprite_Lit_RGB) 

enum class EPointCloudRenderMethod : uint8;
template<> POINTCLOUDRUNTIME_API UEnum* StaticEnum<EPointCloudRenderMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
