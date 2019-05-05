// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudRuntime/Public/PointCloudFileImporter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointCloudFileImporter() {}
// Cross Module References
	POINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_UPointCloudFileImporterInterface_NoRegister();
	POINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_UPointCloudFileImporterInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_PointCloudRuntime();
	POINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_UPointCloudFileImporter_NoRegister();
	POINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_UPointCloudFileImporter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	void UPointCloudFileImporterInterface::StaticRegisterNativesUPointCloudFileImporterInterface()
	{
	}
	UClass* Z_Construct_UClass_UPointCloudFileImporterInterface_NoRegister()
	{
		return UPointCloudFileImporterInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPointCloudFileImporterInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPointCloudFileImporterInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudFileImporterInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PointCloudFileImporter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPointCloudFileImporterInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPointCloudFileImporterInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPointCloudFileImporterInterface_Statics::ClassParams = {
		&UPointCloudFileImporterInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPointCloudFileImporterInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPointCloudFileImporterInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPointCloudFileImporterInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPointCloudFileImporterInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPointCloudFileImporterInterface, 112409574);
	template<> POINTCLOUDRUNTIME_API UClass* StaticClass<UPointCloudFileImporterInterface>()
	{
		return UPointCloudFileImporterInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPointCloudFileImporterInterface(Z_Construct_UClass_UPointCloudFileImporterInterface, &UPointCloudFileImporterInterface::StaticClass, TEXT("/Script/PointCloudRuntime"), TEXT("UPointCloudFileImporterInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPointCloudFileImporterInterface);
	void UPointCloudFileImporter::StaticRegisterNativesUPointCloudFileImporter()
	{
	}
	UClass* Z_Construct_UClass_UPointCloudFileImporter_NoRegister()
	{
		return UPointCloudFileImporter::StaticClass();
	}
	struct Z_Construct_UClass_UPointCloudFileImporter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPointCloudFileImporter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudFileImporter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PointCloudFileImporter.h" },
		{ "ModuleRelativePath", "Public/PointCloudFileImporter.h" },
		{ "ToolTip", "Base for all importers\nHolds information about all registered importers" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPointCloudFileImporter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointCloudFileImporter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPointCloudFileImporter_Statics::ClassParams = {
		&UPointCloudFileImporter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPointCloudFileImporter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPointCloudFileImporter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPointCloudFileImporter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPointCloudFileImporter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPointCloudFileImporter, 4277086996);
	template<> POINTCLOUDRUNTIME_API UClass* StaticClass<UPointCloudFileImporter>()
	{
		return UPointCloudFileImporter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPointCloudFileImporter(Z_Construct_UClass_UPointCloudFileImporter, &UPointCloudFileImporter::StaticClass, TEXT("/Script/PointCloudRuntime"), TEXT("UPointCloudFileImporter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPointCloudFileImporter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
