// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudRuntime/Public/PointCloudShared.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointCloudShared() {}
// Cross Module References
	POINTCLOUDRUNTIME_API UEnum* Z_Construct_UEnum_PointCloudRuntime_EPointCloudColorMode();
	UPackage* Z_Construct_UPackage__Script_PointCloudRuntime();
	POINTCLOUDRUNTIME_API UEnum* Z_Construct_UEnum_PointCloudRuntime_EPointCloudOffset();
	POINTCLOUDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudPoint();
// End Cross Module References
	static UEnum* EPointCloudColorMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PointCloudRuntime_EPointCloudColorMode, Z_Construct_UPackage__Script_PointCloudRuntime(), TEXT("EPointCloudColorMode"));
		}
		return Singleton;
	}
	template<> POINTCLOUDRUNTIME_API UEnum* StaticEnum<EPointCloudColorMode>()
	{
		return EPointCloudColorMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPointCloudColorMode(EPointCloudColorMode_StaticEnum, TEXT("/Script/PointCloudRuntime"), TEXT("EPointCloudColorMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PointCloudRuntime_EPointCloudColorMode_Hash() { return 3646145395U; }
	UEnum* Z_Construct_UEnum_PointCloudRuntime_EPointCloudColorMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PointCloudRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPointCloudColorMode"), 0, Get_Z_Construct_UEnum_PointCloudRuntime_EPointCloudColorMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPointCloudColorMode::None", (int64)EPointCloudColorMode::None },
				{ "EPointCloudColorMode::Intensity", (int64)EPointCloudColorMode::Intensity },
				{ "EPointCloudColorMode::RGB", (int64)EPointCloudColorMode::RGB },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/PointCloudShared.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PointCloudRuntime,
				nullptr,
				"EPointCloudColorMode",
				"EPointCloudColorMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPointCloudOffset_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PointCloudRuntime_EPointCloudOffset, Z_Construct_UPackage__Script_PointCloudRuntime(), TEXT("EPointCloudOffset"));
		}
		return Singleton;
	}
	template<> POINTCLOUDRUNTIME_API UEnum* StaticEnum<EPointCloudOffset>()
	{
		return EPointCloudOffset_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPointCloudOffset(EPointCloudOffset_StaticEnum, TEXT("/Script/PointCloudRuntime"), TEXT("EPointCloudOffset"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PointCloudRuntime_EPointCloudOffset_Hash() { return 4215444027U; }
	UEnum* Z_Construct_UEnum_PointCloudRuntime_EPointCloudOffset()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PointCloudRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPointCloudOffset"), 0, Get_Z_Construct_UEnum_PointCloudRuntime_EPointCloudOffset_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPointCloudOffset::None", (int64)EPointCloudOffset::None },
				{ "EPointCloudOffset::Center", (int64)EPointCloudOffset::Center },
				{ "EPointCloudOffset::FirstPoint", (int64)EPointCloudOffset::FirstPoint },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/PointCloudShared.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PointCloudRuntime,
				nullptr,
				"EPointCloudOffset",
				"EPointCloudOffset",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FPointCloudPoint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern POINTCLOUDRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPointCloudPoint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPointCloudPoint, Z_Construct_UPackage__Script_PointCloudRuntime(), TEXT("PointCloudPoint"), sizeof(FPointCloudPoint), Get_Z_Construct_UScriptStruct_FPointCloudPoint_Hash());
	}
	return Singleton;
}
template<> POINTCLOUDRUNTIME_API UScriptStruct* StaticStruct<FPointCloudPoint>()
{
	return FPointCloudPoint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPointCloudPoint(FPointCloudPoint::StaticStruct, TEXT("/Script/PointCloudRuntime"), TEXT("PointCloudPoint"), false, nullptr, nullptr);
static struct FScriptStruct_PointCloudRuntime_StaticRegisterNativesFPointCloudPoint
{
	FScriptStruct_PointCloudRuntime_StaticRegisterNativesFPointCloudPoint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PointCloudPoint")),new UScriptStruct::TCppStructOps<FPointCloudPoint>);
	}
} ScriptStruct_PointCloudRuntime_StaticRegisterNativesFPointCloudPoint;
	struct Z_Construct_UScriptStruct_FPointCloudPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudPoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PointCloudShared.h" },
		{ "ToolTip", "#todo To be removed and replaced by something more optimized, as this one potentially wastes a lot of memory." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPointCloudPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPointCloudPoint>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPointCloudPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudRuntime,
		nullptr,
		&NewStructOps,
		"PointCloudPoint",
		sizeof(FPointCloudPoint),
		alignof(FPointCloudPoint),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPointCloudPoint_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPointCloudPoint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPointCloudPoint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PointCloudRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PointCloudPoint"), sizeof(FPointCloudPoint), Get_Z_Construct_UScriptStruct_FPointCloudPoint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPointCloudPoint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPointCloudPoint_Hash() { return 2464742516U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
