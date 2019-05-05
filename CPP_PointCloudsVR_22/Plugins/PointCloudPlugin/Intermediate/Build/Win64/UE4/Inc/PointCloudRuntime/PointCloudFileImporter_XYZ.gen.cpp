// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudRuntime/Private/Importers/PointCloudFileImporter_XYZ.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointCloudFileImporter_XYZ() {}
// Cross Module References
	POINTCLOUDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns();
	UPackage* Z_Construct_UPackage__Script_PointCloudRuntime();
	POINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_UPointCloudFileImporter_XYZ_NoRegister();
	POINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_UPointCloudFileImporter_XYZ();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloudFileImporter_XYZ_LoadPointCloudFromFile_XYZ();
	POINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_UPointCloud_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	POINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_UPointCloudFileImporterInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FPointCloudImportSettings_XYZ_Columns::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern POINTCLOUDRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns, Z_Construct_UPackage__Script_PointCloudRuntime(), TEXT("PointCloudImportSettings_XYZ_Columns"), sizeof(FPointCloudImportSettings_XYZ_Columns), Get_Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Hash());
	}
	return Singleton;
}
template<> POINTCLOUDRUNTIME_API UScriptStruct* StaticStruct<FPointCloudImportSettings_XYZ_Columns>()
{
	return FPointCloudImportSettings_XYZ_Columns::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns(FPointCloudImportSettings_XYZ_Columns::StaticStruct, TEXT("/Script/PointCloudRuntime"), TEXT("PointCloudImportSettings_XYZ_Columns"), false, nullptr, nullptr);
static struct FScriptStruct_PointCloudRuntime_StaticRegisterNativesFPointCloudImportSettings_XYZ_Columns
{
	FScriptStruct_PointCloudRuntime_StaticRegisterNativesFPointCloudImportSettings_XYZ_Columns()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PointCloudImportSettings_XYZ_Columns")),new UScriptStruct::TCppStructOps<FPointCloudImportSettings_XYZ_Columns>);
	}
} ScriptStruct_PointCloudRuntime_StaticRegisterNativesFPointCloudImportSettings_XYZ_Columns;
	struct Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Blue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Green_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Green;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Red_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Red;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LocationZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LocationY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LocationX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Importers/PointCloudFileImporter_XYZ.h" },
		{ "ToolTip", "Used to help expose the import settings to Blueprints" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPointCloudImportSettings_XYZ_Columns>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "ModuleRelativePath", "Private/Importers/PointCloudFileImporter_XYZ.h" },
		{ "ToolTip", "Index of a column containing Alpha channel. Set to -1 if not available" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPointCloudImportSettings_XYZ_Columns, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::NewProp_Alpha_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::NewProp_Blue_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "ModuleRelativePath", "Private/Importers/PointCloudFileImporter_XYZ.h" },
		{ "ToolTip", "Index of a column containing Blue channel. Set to -1 if not available" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::NewProp_Blue = { "Blue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPointCloudImportSettings_XYZ_Columns, Blue), METADATA_PARAMS(Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::NewProp_Blue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::NewProp_Blue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::NewProp_Green_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "ModuleRelativePath", "Private/Importers/PointCloudFileImporter_XYZ.h" },
		{ "ToolTip", "Index of a column containing Green channel. Set to -1 if not available" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::NewProp_Green = { "Green", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPointCloudImportSettings_XYZ_Columns, Green), METADATA_PARAMS(Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::NewProp_Green_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::NewProp_Green_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::NewProp_Red_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "ModuleRelativePath", "Private/Importers/PointCloudFileImporter_XYZ.h" },
		{ "ToolTip", "Index of a column containing Red channel or Intensity data.\nSet to -1 if neither is available" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::NewProp_Red = { "Red", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPointCloudImportSettings_XYZ_Columns, Red), METADATA_PARAMS(Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::NewProp_Red_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::NewProp_Red_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::NewProp_LocationZ_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "ModuleRelativePath", "Private/Importers/PointCloudFileImporter_XYZ.h" },
		{ "ToolTip", "Index of a column containing Location Z data" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::NewProp_LocationZ = { "LocationZ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPointCloudImportSettings_XYZ_Columns, LocationZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::NewProp_LocationZ_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::NewProp_LocationZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::NewProp_LocationY_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "ModuleRelativePath", "Private/Importers/PointCloudFileImporter_XYZ.h" },
		{ "ToolTip", "Index of a column containing Location Y data" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::NewProp_LocationY = { "LocationY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPointCloudImportSettings_XYZ_Columns, LocationY), METADATA_PARAMS(Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::NewProp_LocationY_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::NewProp_LocationY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::NewProp_LocationX_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "ModuleRelativePath", "Private/Importers/PointCloudFileImporter_XYZ.h" },
		{ "ToolTip", "Index of a column containing Location X data" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::NewProp_LocationX = { "LocationX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPointCloudImportSettings_XYZ_Columns, LocationX), METADATA_PARAMS(Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::NewProp_LocationX_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::NewProp_LocationX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::NewProp_Blue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::NewProp_Green,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::NewProp_Red,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::NewProp_LocationZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::NewProp_LocationY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::NewProp_LocationX,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudRuntime,
		nullptr,
		&NewStructOps,
		"PointCloudImportSettings_XYZ_Columns",
		sizeof(FPointCloudImportSettings_XYZ_Columns),
		alignof(FPointCloudImportSettings_XYZ_Columns),
		Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PointCloudRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PointCloudImportSettings_XYZ_Columns"), sizeof(FPointCloudImportSettings_XYZ_Columns), Get_Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns_Hash() { return 3572391658U; }
	void UPointCloudFileImporter_XYZ::StaticRegisterNativesUPointCloudFileImporter_XYZ()
	{
		UClass* Class = UPointCloudFileImporter_XYZ::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadPointCloudFromFile_XYZ", &UPointCloudFileImporter_XYZ::execLoadPointCloudFromFile_XYZ },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPointCloudFileImporter_XYZ_LoadPointCloudFromFile_XYZ_Statics
	{
		struct PointCloudFileImporter_XYZ_eventLoadPointCloudFromFile_XYZ_Parms
		{
			FString Filename;
			int32 FirstLine;
			int32 LastLine;
			FVector2D RGBRange;
			FPointCloudImportSettings_XYZ_Columns Columns;
			UPointCloud* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Columns;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RGBRange;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastLine;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FirstLine;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudFileImporter_XYZ_LoadPointCloudFromFile_XYZ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloudFileImporter_XYZ_eventLoadPointCloudFromFile_XYZ_Parms, ReturnValue), Z_Construct_UClass_UPointCloud_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudFileImporter_XYZ_LoadPointCloudFromFile_XYZ_Statics::NewProp_Columns = { "Columns", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloudFileImporter_XYZ_eventLoadPointCloudFromFile_XYZ_Parms, Columns), Z_Construct_UScriptStruct_FPointCloudImportSettings_XYZ_Columns, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudFileImporter_XYZ_LoadPointCloudFromFile_XYZ_Statics::NewProp_RGBRange = { "RGBRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloudFileImporter_XYZ_eventLoadPointCloudFromFile_XYZ_Parms, RGBRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloudFileImporter_XYZ_LoadPointCloudFromFile_XYZ_Statics::NewProp_LastLine = { "LastLine", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloudFileImporter_XYZ_eventLoadPointCloudFromFile_XYZ_Parms, LastLine), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloudFileImporter_XYZ_LoadPointCloudFromFile_XYZ_Statics::NewProp_FirstLine = { "FirstLine", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloudFileImporter_XYZ_eventLoadPointCloudFromFile_XYZ_Parms, FirstLine), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPointCloudFileImporter_XYZ_LoadPointCloudFromFile_XYZ_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloudFileImporter_XYZ_eventLoadPointCloudFromFile_XYZ_Parms, Filename), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudFileImporter_XYZ_LoadPointCloudFromFile_XYZ_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudFileImporter_XYZ_LoadPointCloudFromFile_XYZ_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudFileImporter_XYZ_LoadPointCloudFromFile_XYZ_Statics::NewProp_Columns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudFileImporter_XYZ_LoadPointCloudFromFile_XYZ_Statics::NewProp_RGBRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudFileImporter_XYZ_LoadPointCloudFromFile_XYZ_Statics::NewProp_LastLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudFileImporter_XYZ_LoadPointCloudFromFile_XYZ_Statics::NewProp_FirstLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudFileImporter_XYZ_LoadPointCloudFromFile_XYZ_Statics::NewProp_Filename,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudFileImporter_XYZ_LoadPointCloudFromFile_XYZ_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "DisplayName", "Load Point Cloud From File (XYZ)" },
		{ "ModuleRelativePath", "Private/Importers/PointCloudFileImporter_XYZ.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudFileImporter_XYZ_LoadPointCloudFromFile_XYZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudFileImporter_XYZ, nullptr, "LoadPointCloudFromFile_XYZ", sizeof(PointCloudFileImporter_XYZ_eventLoadPointCloudFromFile_XYZ_Parms), Z_Construct_UFunction_UPointCloudFileImporter_XYZ_LoadPointCloudFromFile_XYZ_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudFileImporter_XYZ_LoadPointCloudFromFile_XYZ_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudFileImporter_XYZ_LoadPointCloudFromFile_XYZ_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudFileImporter_XYZ_LoadPointCloudFromFile_XYZ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloudFileImporter_XYZ_LoadPointCloudFromFile_XYZ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloudFileImporter_XYZ_LoadPointCloudFromFile_XYZ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPointCloudFileImporter_XYZ_NoRegister()
	{
		return UPointCloudFileImporter_XYZ::StaticClass();
	}
	struct Z_Construct_UClass_UPointCloudFileImporter_XYZ_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPointCloudFileImporter_XYZ_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPointCloudFileImporter_XYZ_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPointCloudFileImporter_XYZ_LoadPointCloudFromFile_XYZ, "LoadPointCloudFromFile_XYZ" }, // 987082943
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudFileImporter_XYZ_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Importers/PointCloudFileImporter_XYZ.h" },
		{ "ModuleRelativePath", "Private/Importers/PointCloudFileImporter_XYZ.h" },
		{ "ToolTip", "Inherits from UBlueprintFunctionLibrary to allow exposure to Blueprint Library in the same class." },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPointCloudFileImporter_XYZ_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPointCloudFileImporterInterface_NoRegister, (int32)VTABLE_OFFSET(UPointCloudFileImporter_XYZ, IPointCloudFileImporterInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPointCloudFileImporter_XYZ_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointCloudFileImporter_XYZ>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPointCloudFileImporter_XYZ_Statics::ClassParams = {
		&UPointCloudFileImporter_XYZ::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		ARRAY_COUNT(InterfaceParams),
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPointCloudFileImporter_XYZ_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPointCloudFileImporter_XYZ_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPointCloudFileImporter_XYZ()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPointCloudFileImporter_XYZ_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPointCloudFileImporter_XYZ, 1465144627);
	template<> POINTCLOUDRUNTIME_API UClass* StaticClass<UPointCloudFileImporter_XYZ>()
	{
		return UPointCloudFileImporter_XYZ::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPointCloudFileImporter_XYZ(Z_Construct_UClass_UPointCloudFileImporter_XYZ, &UPointCloudFileImporter_XYZ::StaticClass, TEXT("/Script/PointCloudRuntime"), TEXT("UPointCloudFileImporter_XYZ"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPointCloudFileImporter_XYZ);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
