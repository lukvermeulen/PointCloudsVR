// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
struct FPointCloudImportSettings_XYZ_Columns;
class UPointCloud;
#ifdef POINTCLOUDRUNTIME_PointCloudFileImporter_XYZ_generated_h
#error "PointCloudFileImporter_XYZ.generated.h already included, missing '#pragma once' in PointCloudFileImporter_XYZ.h"
#endif
#define POINTCLOUDRUNTIME_PointCloudFileImporter_XYZ_generated_h

#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Private_Importers_PointCloudFileImporter_XYZ_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics; \
	POINTCLOUDRUNTIME_API static class UScriptStruct* StaticStruct();


template<> POINTCLOUDRUNTIME_API UScriptStruct* StaticStruct<struct FPointCloudImportSettings_XYZ_Columns>();

#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Private_Importers_PointCloudFileImporter_XYZ_h_127_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadPointCloudFromFile_XYZ) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FirstLine); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LastLine); \
		P_GET_STRUCT(FVector2D,Z_Param_RGBRange); \
		P_GET_STRUCT(FPointCloudImportSettings_XYZ_Columns,Z_Param_Columns); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPointCloud**)Z_Param__Result=UPointCloudFileImporter_XYZ::LoadPointCloudFromFile_XYZ(Z_Param_Filename,Z_Param_FirstLine,Z_Param_LastLine,Z_Param_RGBRange,Z_Param_Columns); \
		P_NATIVE_END; \
	}


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Private_Importers_PointCloudFileImporter_XYZ_h_127_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadPointCloudFromFile_XYZ) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FirstLine); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LastLine); \
		P_GET_STRUCT(FVector2D,Z_Param_RGBRange); \
		P_GET_STRUCT(FPointCloudImportSettings_XYZ_Columns,Z_Param_Columns); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPointCloud**)Z_Param__Result=UPointCloudFileImporter_XYZ::LoadPointCloudFromFile_XYZ(Z_Param_Filename,Z_Param_FirstLine,Z_Param_LastLine,Z_Param_RGBRange,Z_Param_Columns); \
		P_NATIVE_END; \
	}


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Private_Importers_PointCloudFileImporter_XYZ_h_127_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPointCloudFileImporter_XYZ(); \
	friend struct Z_Construct_UClass_UPointCloudFileImporter_XYZ_Statics; \
public: \
	DECLARE_CLASS(UPointCloudFileImporter_XYZ, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PointCloudRuntime"), NO_API) \
	DECLARE_SERIALIZER(UPointCloudFileImporter_XYZ) \
	virtual UObject* _getUObject() const override { return const_cast<UPointCloudFileImporter_XYZ*>(this); }


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Private_Importers_PointCloudFileImporter_XYZ_h_127_INCLASS \
private: \
	static void StaticRegisterNativesUPointCloudFileImporter_XYZ(); \
	friend struct Z_Construct_UClass_UPointCloudFileImporter_XYZ_Statics; \
public: \
	DECLARE_CLASS(UPointCloudFileImporter_XYZ, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PointCloudRuntime"), NO_API) \
	DECLARE_SERIALIZER(UPointCloudFileImporter_XYZ) \
	virtual UObject* _getUObject() const override { return const_cast<UPointCloudFileImporter_XYZ*>(this); }


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Private_Importers_PointCloudFileImporter_XYZ_h_127_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPointCloudFileImporter_XYZ(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPointCloudFileImporter_XYZ) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPointCloudFileImporter_XYZ); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPointCloudFileImporter_XYZ); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPointCloudFileImporter_XYZ(UPointCloudFileImporter_XYZ&&); \
	NO_API UPointCloudFileImporter_XYZ(const UPointCloudFileImporter_XYZ&); \
public:


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Private_Importers_PointCloudFileImporter_XYZ_h_127_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPointCloudFileImporter_XYZ(UPointCloudFileImporter_XYZ&&); \
	NO_API UPointCloudFileImporter_XYZ(const UPointCloudFileImporter_XYZ&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPointCloudFileImporter_XYZ); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPointCloudFileImporter_XYZ); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPointCloudFileImporter_XYZ)


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Private_Importers_PointCloudFileImporter_XYZ_h_127_PRIVATE_PROPERTY_OFFSET
#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Private_Importers_PointCloudFileImporter_XYZ_h_124_PROLOG
#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Private_Importers_PointCloudFileImporter_XYZ_h_127_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Private_Importers_PointCloudFileImporter_XYZ_h_127_PRIVATE_PROPERTY_OFFSET \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Private_Importers_PointCloudFileImporter_XYZ_h_127_RPC_WRAPPERS \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Private_Importers_PointCloudFileImporter_XYZ_h_127_INCLASS \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Private_Importers_PointCloudFileImporter_XYZ_h_127_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Private_Importers_PointCloudFileImporter_XYZ_h_127_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Private_Importers_PointCloudFileImporter_XYZ_h_127_PRIVATE_PROPERTY_OFFSET \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Private_Importers_PointCloudFileImporter_XYZ_h_127_RPC_WRAPPERS_NO_PURE_DECLS \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Private_Importers_PointCloudFileImporter_XYZ_h_127_INCLASS_NO_PURE_DECLS \
	CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Private_Importers_PointCloudFileImporter_XYZ_h_127_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POINTCLOUDRUNTIME_API UClass* StaticClass<class UPointCloudFileImporter_XYZ>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CPP_PointCloudsVR_22_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Private_Importers_PointCloudFileImporter_XYZ_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
