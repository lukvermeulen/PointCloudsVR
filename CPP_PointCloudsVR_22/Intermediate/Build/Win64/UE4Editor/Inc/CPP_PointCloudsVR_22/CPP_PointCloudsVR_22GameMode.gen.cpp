// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_PointCloudsVR_22/CPP_PointCloudsVR_22GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_PointCloudsVR_22GameMode() {}
// Cross Module References
	CPP_POINTCLOUDSVR_22_API UClass* Z_Construct_UClass_ACPP_PointCloudsVR_22GameMode_NoRegister();
	CPP_POINTCLOUDSVR_22_API UClass* Z_Construct_UClass_ACPP_PointCloudsVR_22GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CPP_PointCloudsVR_22();
// End Cross Module References
	void ACPP_PointCloudsVR_22GameMode::StaticRegisterNativesACPP_PointCloudsVR_22GameMode()
	{
	}
	UClass* Z_Construct_UClass_ACPP_PointCloudsVR_22GameMode_NoRegister()
	{
		return ACPP_PointCloudsVR_22GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_PointCloudsVR_22GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_PointCloudsVR_22GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP_PointCloudsVR_22,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_PointCloudsVR_22GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CPP_PointCloudsVR_22GameMode.h" },
		{ "ModuleRelativePath", "CPP_PointCloudsVR_22GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_PointCloudsVR_22GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_PointCloudsVR_22GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACPP_PointCloudsVR_22GameMode_Statics::ClassParams = {
		&ACPP_PointCloudsVR_22GameMode::StaticClass,
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
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_PointCloudsVR_22GameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACPP_PointCloudsVR_22GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_PointCloudsVR_22GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACPP_PointCloudsVR_22GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACPP_PointCloudsVR_22GameMode, 3817174216);
	template<> CPP_POINTCLOUDSVR_22_API UClass* StaticClass<ACPP_PointCloudsVR_22GameMode>()
	{
		return ACPP_PointCloudsVR_22GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACPP_PointCloudsVR_22GameMode(Z_Construct_UClass_ACPP_PointCloudsVR_22GameMode, &ACPP_PointCloudsVR_22GameMode::StaticClass, TEXT("/Script/CPP_PointCloudsVR_22"), TEXT("ACPP_PointCloudsVR_22GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_PointCloudsVR_22GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
