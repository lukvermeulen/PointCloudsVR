// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPointCloud;
#ifdef POINTCLOUDRUNTIME_PointCloudComponent_generated_h
#error "PointCloudComponent.generated.h already included, missing '#pragma once' in PointCloudComponent.h"
#endif
#define POINTCLOUDRUNTIME_PointCloudComponent_generated_h

#define CPP_PointCloudsVR_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPointCloud) \
	{ \
		P_GET_OBJECT(UPointCloud,Z_Param_InPointCloud); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPointCloud(Z_Param_InPointCloud); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPointCloud) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPointCloud**)Z_Param__Result=P_THIS->GetPointCloud(); \
		P_NATIVE_END; \
	}


#define CPP_PointCloudsVR_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPointCloud) \
	{ \
		P_GET_OBJECT(UPointCloud,Z_Param_InPointCloud); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPointCloud(Z_Param_InPointCloud); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPointCloud) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPointCloud**)Z_Param__Result=P_THIS->GetPointCloud(); \
		P_NATIVE_END; \
	}


#define CPP_PointCloudsVR_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPointCloudComponent(); \
	friend struct Z_Construct_UClass_UPointCloudComponent_Statics; \
public: \
	DECLARE_CLASS(UPointCloudComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PointCloudRuntime"), NO_API) \
	DECLARE_SERIALIZER(UPointCloudComponent)


#define CPP_PointCloudsVR_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPointCloudComponent(); \
	friend struct Z_Construct_UClass_UPointCloudComponent_Statics; \
public: \
	DECLARE_CLASS(UPointCloudComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PointCloudRuntime"), NO_API) \
	DECLARE_SERIALIZER(UPointCloudComponent)


#define CPP_PointCloudsVR_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPointCloudComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPointCloudComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPointCloudComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPointCloudComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPointCloudComponent(UPointCloudComponent&&); \
	NO_API UPointCloudComponent(const UPointCloudComponent&); \
public:


#define CPP_PointCloudsVR_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPointCloudComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPointCloudComponent(UPointCloudComponent&&); \
	NO_API UPointCloudComponent(const UPointCloudComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPointCloudComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPointCloudComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPointCloudComponent)


#define CPP_PointCloudsVR_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PointCloud() { return STRUCT_OFFSET(UPointCloudComponent, PointCloud); }


#define CPP_PointCloudsVR_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudComponent_h_13_PROLOG
#define CPP_PointCloudsVR_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPP_PointCloudsVR_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	CPP_PointCloudsVR_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudComponent_h_16_RPC_WRAPPERS \
	CPP_PointCloudsVR_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudComponent_h_16_INCLASS \
	CPP_PointCloudsVR_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CPP_PointCloudsVR_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPP_PointCloudsVR_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	CPP_PointCloudsVR_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	CPP_PointCloudsVR_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudComponent_h_16_INCLASS_NO_PURE_DECLS \
	CPP_PointCloudsVR_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudComponent_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PointCloudComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CPP_PointCloudsVR_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
