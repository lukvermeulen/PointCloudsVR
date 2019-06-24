// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPointCloud;
#ifdef POINTCLOUDRUNTIME_PointCloudFileImporter_LAS_generated_h
#error "PointCloudFileImporter_LAS.generated.h already included, missing '#pragma once' in PointCloudFileImporter_LAS.h"
#endif
#define POINTCLOUDRUNTIME_PointCloudFileImporter_LAS_generated_h

#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Private_Importers_PointCloudFileImporter_LAS_h_254_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadPointCloudFromFile_LAS) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPointCloud**)Z_Param__Result=UPointCloudFileImporter_LAS::LoadPointCloudFromFile_LAS(Z_Param_Filename); \
		P_NATIVE_END; \
	}


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Private_Importers_PointCloudFileImporter_LAS_h_254_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadPointCloudFromFile_LAS) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPointCloud**)Z_Param__Result=UPointCloudFileImporter_LAS::LoadPointCloudFromFile_LAS(Z_Param_Filename); \
		P_NATIVE_END; \
	}


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Private_Importers_PointCloudFileImporter_LAS_h_254_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPointCloudFileImporter_LAS(); \
	friend struct Z_Construct_UClass_UPointCloudFileImporter_LAS_Statics; \
public: \
	DECLARE_CLASS(UPointCloudFileImporter_LAS, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PointCloudRuntime"), NO_API) \
	DECLARE_SERIALIZER(UPointCloudFileImporter_LAS) \
	virtual UObject* _getUObject() const override { return const_cast<UPointCloudFileImporter_LAS*>(this); }


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Private_Importers_PointCloudFileImporter_LAS_h_254_INCLASS \
private: \
	static void StaticRegisterNativesUPointCloudFileImporter_LAS(); \
	friend struct Z_Construct_UClass_UPointCloudFileImporter_LAS_Statics; \
public: \
	DECLARE_CLASS(UPointCloudFileImporter_LAS, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PointCloudRuntime"), NO_API) \
	DECLARE_SERIALIZER(UPointCloudFileImporter_LAS) \
	virtual UObject* _getUObject() const override { return const_cast<UPointCloudFileImporter_LAS*>(this); }


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Private_Importers_PointCloudFileImporter_LAS_h_254_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPointCloudFileImporter_LAS(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPointCloudFileImporter_LAS) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPointCloudFileImporter_LAS); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPointCloudFileImporter_LAS); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPointCloudFileImporter_LAS(UPointCloudFileImporter_LAS&&); \
	NO_API UPointCloudFileImporter_LAS(const UPointCloudFileImporter_LAS&); \
public:


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Private_Importers_PointCloudFileImporter_LAS_h_254_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPointCloudFileImporter_LAS(UPointCloudFileImporter_LAS&&); \
	NO_API UPointCloudFileImporter_LAS(const UPointCloudFileImporter_LAS&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPointCloudFileImporter_LAS); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPointCloudFileImporter_LAS); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPointCloudFileImporter_LAS)


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Private_Importers_PointCloudFileImporter_LAS_h_254_PRIVATE_PROPERTY_OFFSET
#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Private_Importers_PointCloudFileImporter_LAS_h_251_PROLOG
#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Private_Importers_PointCloudFileImporter_LAS_h_254_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Private_Importers_PointCloudFileImporter_LAS_h_254_PRIVATE_PROPERTY_OFFSET \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Private_Importers_PointCloudFileImporter_LAS_h_254_RPC_WRAPPERS \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Private_Importers_PointCloudFileImporter_LAS_h_254_INCLASS \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Private_Importers_PointCloudFileImporter_LAS_h_254_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Private_Importers_PointCloudFileImporter_LAS_h_254_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Private_Importers_PointCloudFileImporter_LAS_h_254_PRIVATE_PROPERTY_OFFSET \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Private_Importers_PointCloudFileImporter_LAS_h_254_RPC_WRAPPERS_NO_PURE_DECLS \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Private_Importers_PointCloudFileImporter_LAS_h_254_INCLASS_NO_PURE_DECLS \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Private_Importers_PointCloudFileImporter_LAS_h_254_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POINTCLOUDRUNTIME_API UClass* StaticClass<class UPointCloudFileImporter_LAS>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Private_Importers_PointCloudFileImporter_LAS_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
