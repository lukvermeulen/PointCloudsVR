// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_PointCloudsVR/CPP_PointCloudsVRHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_PointCloudsVRHUD() {}
// Cross Module References
	CPP_POINTCLOUDSVR_API UClass* Z_Construct_UClass_ACPP_PointCloudsVRHUD_NoRegister();
	CPP_POINTCLOUDSVR_API UClass* Z_Construct_UClass_ACPP_PointCloudsVRHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_CPP_PointCloudsVR();
// End Cross Module References
	void ACPP_PointCloudsVRHUD::StaticRegisterNativesACPP_PointCloudsVRHUD()
	{
	}
	UClass* Z_Construct_UClass_ACPP_PointCloudsVRHUD_NoRegister()
	{
		return ACPP_PointCloudsVRHUD::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_PointCloudsVRHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_PointCloudsVRHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP_PointCloudsVR,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_PointCloudsVRHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "CPP_PointCloudsVRHUD.h" },
		{ "ModuleRelativePath", "CPP_PointCloudsVRHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_PointCloudsVRHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_PointCloudsVRHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACPP_PointCloudsVRHUD_Statics::ClassParams = {
		&ACPP_PointCloudsVRHUD::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008002ACu,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_PointCloudsVRHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACPP_PointCloudsVRHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_PointCloudsVRHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACPP_PointCloudsVRHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACPP_PointCloudsVRHUD, 2074239773);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACPP_PointCloudsVRHUD(Z_Construct_UClass_ACPP_PointCloudsVRHUD, &ACPP_PointCloudsVRHUD::StaticClass, TEXT("/Script/CPP_PointCloudsVR"), TEXT("ACPP_PointCloudsVRHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_PointCloudsVRHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
