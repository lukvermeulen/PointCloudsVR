// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
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

#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudComponent_h_16_RPC_WRAPPERS \
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


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPointCloudPluginComponent(); \
	friend struct Z_Construct_UClass_UPointCloudPluginComponent_Statics; \
public: \
	DECLARE_CLASS(UPointCloudPluginComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PointCloudRuntime"), NO_API) \
	DECLARE_SERIALIZER(UPointCloudPluginComponent)


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPointCloudPluginComponent(); \
	friend struct Z_Construct_UClass_UPointCloudPluginComponent_Statics; \
public: \
	DECLARE_CLASS(UPointCloudPluginComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PointCloudRuntime"), NO_API) \
	DECLARE_SERIALIZER(UPointCloudPluginComponent)


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPointCloudPluginComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPointCloudPluginComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPointCloudPluginComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPointCloudPluginComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPointCloudPluginComponent(UPointCloudPluginComponent&&); \
	NO_API UPointCloudPluginComponent(const UPointCloudPluginComponent&); \
public:


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPointCloudPluginComponent(UPointCloudPluginComponent&&); \
	NO_API UPointCloudPluginComponent(const UPointCloudPluginComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPointCloudPluginComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPointCloudPluginComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPointCloudPluginComponent)


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PointCloud() { return STRUCT_OFFSET(UPointCloudPluginComponent, PointCloud); }


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudComponent_h_13_PROLOG
#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudComponent_h_16_RPC_WRAPPERS \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudComponent_h_16_INCLASS \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudComponent_h_16_INCLASS_NO_PURE_DECLS \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POINTCLOUDRUNTIME_API UClass* StaticClass<class UPointCloudPluginComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
