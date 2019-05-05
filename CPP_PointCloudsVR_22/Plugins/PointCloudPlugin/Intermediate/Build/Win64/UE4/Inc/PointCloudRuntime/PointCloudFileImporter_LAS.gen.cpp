// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudRuntime/Private/Importers/PointCloudFileImporter_LAS.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointCloudFileImporter_LAS() {}
// Cross Module References
	POINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_UPointCloudFileImporter_LAS_NoRegister();
	POINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_UPointCloudFileImporter_LAS();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_PointCloudRuntime();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloudFileImporter_LAS_LoadPointCloudFromFile_LAS();
	POINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_UPointCloud_NoRegister();
	POINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_UPointCloudFileImporterInterface_NoRegister();
// End Cross Module References
	void UPointCloudFileImporter_LAS::StaticRegisterNativesUPointCloudFileImporter_LAS()
	{
		UClass* Class = UPointCloudFileImporter_LAS::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadPointCloudFromFile_LAS", &UPointCloudFileImporter_LAS::execLoadPointCloudFromFile_LAS },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPointCloudFileImporter_LAS_LoadPointCloudFromFile_LAS_Statics
	{
		struct PointCloudFileImporter_LAS_eventLoadPointCloudFromFile_LAS_Parms
		{
			FString Filename;
			UPointCloud* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudFileImporter_LAS_LoadPointCloudFromFile_LAS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloudFileImporter_LAS_eventLoadPointCloudFromFile_LAS_Parms, ReturnValue), Z_Construct_UClass_UPointCloud_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPointCloudFileImporter_LAS_LoadPointCloudFromFile_LAS_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloudFileImporter_LAS_eventLoadPointCloudFromFile_LAS_Parms, Filename), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudFileImporter_LAS_LoadPointCloudFromFile_LAS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudFileImporter_LAS_LoadPointCloudFromFile_LAS_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudFileImporter_LAS_LoadPointCloudFromFile_LAS_Statics::NewProp_Filename,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudFileImporter_LAS_LoadPointCloudFromFile_LAS_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "DisplayName", "Load Point Cloud From File (LAS)" },
		{ "ModuleRelativePath", "Private/Importers/PointCloudFileImporter_LAS.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudFileImporter_LAS_LoadPointCloudFromFile_LAS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudFileImporter_LAS, nullptr, "LoadPointCloudFromFile_LAS", sizeof(PointCloudFileImporter_LAS_eventLoadPointCloudFromFile_LAS_Parms), Z_Construct_UFunction_UPointCloudFileImporter_LAS_LoadPointCloudFromFile_LAS_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudFileImporter_LAS_LoadPointCloudFromFile_LAS_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudFileImporter_LAS_LoadPointCloudFromFile_LAS_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudFileImporter_LAS_LoadPointCloudFromFile_LAS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloudFileImporter_LAS_LoadPointCloudFromFile_LAS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloudFileImporter_LAS_LoadPointCloudFromFile_LAS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPointCloudFileImporter_LAS_NoRegister()
	{
		return UPointCloudFileImporter_LAS::StaticClass();
	}
	struct Z_Construct_UClass_UPointCloudFileImporter_LAS_Statics
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
	UObject* (*const Z_Construct_UClass_UPointCloudFileImporter_LAS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPointCloudFileImporter_LAS_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPointCloudFileImporter_LAS_LoadPointCloudFromFile_LAS, "LoadPointCloudFromFile_LAS" }, // 2034130504
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudFileImporter_LAS_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Importers/PointCloudFileImporter_LAS.h" },
		{ "ModuleRelativePath", "Private/Importers/PointCloudFileImporter_LAS.h" },
		{ "ToolTip", "Inherits from UBlueprintFunctionLibrary to allow exposure to Blueprint Library in the same class." },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPointCloudFileImporter_LAS_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPointCloudFileImporterInterface_NoRegister, (int32)VTABLE_OFFSET(UPointCloudFileImporter_LAS, IPointCloudFileImporterInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPointCloudFileImporter_LAS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointCloudFileImporter_LAS>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPointCloudFileImporter_LAS_Statics::ClassParams = {
		&UPointCloudFileImporter_LAS::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPointCloudFileImporter_LAS_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPointCloudFileImporter_LAS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPointCloudFileImporter_LAS()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPointCloudFileImporter_LAS_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPointCloudFileImporter_LAS, 1451729981);
	template<> POINTCLOUDRUNTIME_API UClass* StaticClass<UPointCloudFileImporter_LAS>()
	{
		return UPointCloudFileImporter_LAS::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPointCloudFileImporter_LAS(Z_Construct_UClass_UPointCloudFileImporter_LAS, &UPointCloudFileImporter_LAS::StaticClass, TEXT("/Script/PointCloudRuntime"), TEXT("UPointCloudFileImporter_LAS"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPointCloudFileImporter_LAS);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
