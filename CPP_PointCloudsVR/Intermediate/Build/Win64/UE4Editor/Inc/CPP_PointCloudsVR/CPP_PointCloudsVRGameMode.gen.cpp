// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_PointCloudsVR/CPP_PointCloudsVRGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_PointCloudsVRGameMode() {}
// Cross Module References
	CPP_POINTCLOUDSVR_API UClass* Z_Construct_UClass_ACPP_PointCloudsVRGameMode_NoRegister();
	CPP_POINTCLOUDSVR_API UClass* Z_Construct_UClass_ACPP_PointCloudsVRGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CPP_PointCloudsVR();
// End Cross Module References
	void ACPP_PointCloudsVRGameMode::StaticRegisterNativesACPP_PointCloudsVRGameMode()
	{
	}
	UClass* Z_Construct_UClass_ACPP_PointCloudsVRGameMode_NoRegister()
	{
		return ACPP_PointCloudsVRGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_PointCloudsVRGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_PointCloudsVRGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP_PointCloudsVR,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_PointCloudsVRGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CPP_PointCloudsVRGameMode.h" },
		{ "ModuleRelativePath", "CPP_PointCloudsVRGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_PointCloudsVRGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_PointCloudsVRGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACPP_PointCloudsVRGameMode_Statics::ClassParams = {
		&ACPP_PointCloudsVRGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_PointCloudsVRGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACPP_PointCloudsVRGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_PointCloudsVRGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACPP_PointCloudsVRGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACPP_PointCloudsVRGameMode, 500546192);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACPP_PointCloudsVRGameMode(Z_Construct_UClass_ACPP_PointCloudsVRGameMode, &ACPP_PointCloudsVRGameMode::StaticClass, TEXT("/Script/CPP_PointCloudsVR"), TEXT("ACPP_PointCloudsVRGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_PointCloudsVRGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
