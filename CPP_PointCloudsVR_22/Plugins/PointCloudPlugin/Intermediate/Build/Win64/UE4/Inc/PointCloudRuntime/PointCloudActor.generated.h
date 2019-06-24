// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POINTCLOUDRUNTIME_PointCloudActor_generated_h
#error "PointCloudActor.generated.h already included, missing '#pragma once' in PointCloudActor.h"
#endif
#define POINTCLOUDRUNTIME_PointCloudActor_generated_h

#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudActor_h_14_RPC_WRAPPERS
#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPointCloudActor(); \
	friend struct Z_Construct_UClass_APointCloudActor_Statics; \
public: \
	DECLARE_CLASS(APointCloudActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PointCloudRuntime"), NO_API) \
	DECLARE_SERIALIZER(APointCloudActor)


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPointCloudActor(); \
	friend struct Z_Construct_UClass_APointCloudActor_Statics; \
public: \
	DECLARE_CLASS(APointCloudActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PointCloudRuntime"), NO_API) \
	DECLARE_SERIALIZER(APointCloudActor)


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APointCloudActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APointCloudActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APointCloudActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APointCloudActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APointCloudActor(APointCloudActor&&); \
	NO_API APointCloudActor(const APointCloudActor&); \
public:


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudActor_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APointCloudActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APointCloudActor(APointCloudActor&&); \
	NO_API APointCloudActor(const APointCloudActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APointCloudActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APointCloudActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APointCloudActor)


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudActor_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PointCloudComponent() { return STRUCT_OFFSET(APointCloudActor, PointCloudComponent); }


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudActor_h_11_PROLOG
#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudActor_h_14_PRIVATE_PROPERTY_OFFSET \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudActor_h_14_RPC_WRAPPERS \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudActor_h_14_INCLASS \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudActor_h_14_PRIVATE_PROPERTY_OFFSET \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudActor_h_14_INCLASS_NO_PURE_DECLS \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudActor_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PointCloudActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POINTCLOUDRUNTIME_API UClass* StaticClass<class APointCloudActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
