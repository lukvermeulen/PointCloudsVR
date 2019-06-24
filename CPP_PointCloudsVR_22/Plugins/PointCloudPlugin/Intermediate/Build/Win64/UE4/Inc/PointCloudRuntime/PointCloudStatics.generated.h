// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UPointCloud;
struct FVector;
struct FColor;
struct FPointCloudPoint;
#ifdef POINTCLOUDRUNTIME_PointCloudStatics_generated_h
#error "PointCloudStatics.generated.h already included, missing '#pragma once' in PointCloudStatics.h"
#endif
#define POINTCLOUDRUNTIME_PointCloudStatics_generated_h

#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudStatics_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMakeEmptyPointCloud) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPointCloud**)Z_Param__Result=UPointCloudStatics::MakeEmptyPointCloud(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakePointCloudPoint) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FColor,Z_Param_Color); \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPointCloudPoint*)Z_Param__Result=UPointCloudStatics::MakePointCloudPoint(Z_Param_Location,Z_Param_Color,Z_Param_bEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnabledAuto) \
	{ \
		P_GET_STRUCT_REF(FPointCloudPoint,Z_Param_Out_InPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPointCloudStatics::SetEnabledAuto(Z_Param_Out_InPoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnabled) \
	{ \
		P_GET_STRUCT_REF(FPointCloudPoint,Z_Param_Out_InPoint); \
		P_GET_UBOOL(Z_Param_NewEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPointCloudStatics::SetEnabled(Z_Param_Out_InPoint,Z_Param_NewEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetColor) \
	{ \
		P_GET_STRUCT_REF(FPointCloudPoint,Z_Param_Out_InPoint); \
		P_GET_STRUCT(FColor,Z_Param_NewColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPointCloudStatics::SetColor(Z_Param_Out_InPoint,Z_Param_NewColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOriginalLocation) \
	{ \
		P_GET_STRUCT_REF(FPointCloudPoint,Z_Param_Out_InPoint); \
		P_GET_STRUCT(FVector,Z_Param_NewOriginalLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPointCloudStatics::SetOriginalLocation(Z_Param_Out_InPoint,Z_Param_NewOriginalLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEnabled) \
	{ \
		P_GET_STRUCT(FPointCloudPoint,Z_Param_InPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UPointCloudStatics::IsEnabled(Z_Param_InPoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetColor) \
	{ \
		P_GET_STRUCT(FPointCloudPoint,Z_Param_InPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FColor*)Z_Param__Result=UPointCloudStatics::GetColor(Z_Param_InPoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocation) \
	{ \
		P_GET_STRUCT(FPointCloudPoint,Z_Param_InPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UPointCloudStatics::GetLocation(Z_Param_InPoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOriginalLocation) \
	{ \
		P_GET_STRUCT(FPointCloudPoint,Z_Param_InPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UPointCloudStatics::GetOriginalLocation(Z_Param_InPoint); \
		P_NATIVE_END; \
	}


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudStatics_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMakeEmptyPointCloud) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPointCloud**)Z_Param__Result=UPointCloudStatics::MakeEmptyPointCloud(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakePointCloudPoint) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FColor,Z_Param_Color); \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPointCloudPoint*)Z_Param__Result=UPointCloudStatics::MakePointCloudPoint(Z_Param_Location,Z_Param_Color,Z_Param_bEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnabledAuto) \
	{ \
		P_GET_STRUCT_REF(FPointCloudPoint,Z_Param_Out_InPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPointCloudStatics::SetEnabledAuto(Z_Param_Out_InPoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnabled) \
	{ \
		P_GET_STRUCT_REF(FPointCloudPoint,Z_Param_Out_InPoint); \
		P_GET_UBOOL(Z_Param_NewEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPointCloudStatics::SetEnabled(Z_Param_Out_InPoint,Z_Param_NewEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetColor) \
	{ \
		P_GET_STRUCT_REF(FPointCloudPoint,Z_Param_Out_InPoint); \
		P_GET_STRUCT(FColor,Z_Param_NewColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPointCloudStatics::SetColor(Z_Param_Out_InPoint,Z_Param_NewColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOriginalLocation) \
	{ \
		P_GET_STRUCT_REF(FPointCloudPoint,Z_Param_Out_InPoint); \
		P_GET_STRUCT(FVector,Z_Param_NewOriginalLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPointCloudStatics::SetOriginalLocation(Z_Param_Out_InPoint,Z_Param_NewOriginalLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEnabled) \
	{ \
		P_GET_STRUCT(FPointCloudPoint,Z_Param_InPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UPointCloudStatics::IsEnabled(Z_Param_InPoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetColor) \
	{ \
		P_GET_STRUCT(FPointCloudPoint,Z_Param_InPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FColor*)Z_Param__Result=UPointCloudStatics::GetColor(Z_Param_InPoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocation) \
	{ \
		P_GET_STRUCT(FPointCloudPoint,Z_Param_InPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UPointCloudStatics::GetLocation(Z_Param_InPoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOriginalLocation) \
	{ \
		P_GET_STRUCT(FPointCloudPoint,Z_Param_InPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UPointCloudStatics::GetOriginalLocation(Z_Param_InPoint); \
		P_NATIVE_END; \
	}


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudStatics_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPointCloudStatics(); \
	friend struct Z_Construct_UClass_UPointCloudStatics_Statics; \
public: \
	DECLARE_CLASS(UPointCloudStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PointCloudRuntime"), NO_API) \
	DECLARE_SERIALIZER(UPointCloudStatics)


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudStatics_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUPointCloudStatics(); \
	friend struct Z_Construct_UClass_UPointCloudStatics_Statics; \
public: \
	DECLARE_CLASS(UPointCloudStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PointCloudRuntime"), NO_API) \
	DECLARE_SERIALIZER(UPointCloudStatics)


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudStatics_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPointCloudStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPointCloudStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPointCloudStatics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPointCloudStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPointCloudStatics(UPointCloudStatics&&); \
	NO_API UPointCloudStatics(const UPointCloudStatics&); \
public:


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudStatics_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPointCloudStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPointCloudStatics(UPointCloudStatics&&); \
	NO_API UPointCloudStatics(const UPointCloudStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPointCloudStatics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPointCloudStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPointCloudStatics)


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudStatics_h_19_PRIVATE_PROPERTY_OFFSET
#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudStatics_h_16_PROLOG
#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudStatics_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudStatics_h_19_PRIVATE_PROPERTY_OFFSET \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudStatics_h_19_RPC_WRAPPERS \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudStatics_h_19_INCLASS \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudStatics_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudStatics_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudStatics_h_19_PRIVATE_PROPERTY_OFFSET \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudStatics_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudStatics_h_19_INCLASS_NO_PURE_DECLS \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudStatics_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POINTCLOUDRUNTIME_API UClass* StaticClass<class UPointCloudStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
