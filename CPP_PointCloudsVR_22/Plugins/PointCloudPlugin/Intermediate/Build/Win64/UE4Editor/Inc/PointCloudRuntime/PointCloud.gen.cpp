// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudRuntime/Public/PointCloud.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointCloud() {}
// Cross Module References
	POINTCLOUDRUNTIME_API UEnum* Z_Construct_UEnum_PointCloudRuntime_EPointCloudSpriteMask();
	UPackage* Z_Construct_UPackage__Script_PointCloudRuntime();
	POINTCLOUDRUNTIME_API UEnum* Z_Construct_UEnum_PointCloudRuntime_EPointCloudColorOverrideMethod();
	POINTCLOUDRUNTIME_API UEnum* Z_Construct_UEnum_PointCloudRuntime_EPointCloudColorOverride();
	POINTCLOUDRUNTIME_API UEnum* Z_Construct_UEnum_PointCloudRuntime_EPointCloudRenderMethod();
	POINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_UPointCloud_NoRegister();
	POINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_UPointCloud();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_ApplyRenderingParameters();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_Bake();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_BP_ColorCollectedPoints();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_BP_DeleteCollectedPoints();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_BP_HideCollectedPoints();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_GetBounds();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_GetCollectedPointLocations();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_GetColorMode();
	POINTCLOUDRUNTIME_API UEnum* Z_Construct_UEnum_PointCloudRuntime_EPointCloudColorMode();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_GetLODCount();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_GetMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_GetNumMaterials();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_GetPointCloudData();
	POINTCLOUDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudPoint();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_GetPointCount();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_GetTouchedPoints();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_IsDirty();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_Rebuild();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_Reimport();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_SetCustomMaterial();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_SetLODColoration();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_SetNewSourcePath();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_SetPointCloudData();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_SetRenderingMethod();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_UsesLit();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_UsesLowPrecision();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_UsesRGB();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloud_UsesSprites();
	POINTCLOUDRUNTIME_API UEnum* Z_Construct_UEnum_PointCloudRuntime_EPointCloudOffset();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
// End Cross Module References
	static UEnum* EPointCloudSpriteMask_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PointCloudRuntime_EPointCloudSpriteMask, Z_Construct_UPackage__Script_PointCloudRuntime(), TEXT("EPointCloudSpriteMask"));
		}
		return Singleton;
	}
	template<> POINTCLOUDRUNTIME_API UEnum* StaticEnum<EPointCloudSpriteMask>()
	{
		return EPointCloudSpriteMask_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPointCloudSpriteMask(EPointCloudSpriteMask_StaticEnum, TEXT("/Script/PointCloudRuntime"), TEXT("EPointCloudSpriteMask"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PointCloudRuntime_EPointCloudSpriteMask_Hash() { return 1946113703U; }
	UEnum* Z_Construct_UEnum_PointCloudRuntime_EPointCloudSpriteMask()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PointCloudRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPointCloudSpriteMask"), 0, Get_Z_Construct_UEnum_PointCloudRuntime_EPointCloudSpriteMask_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPointCloudSpriteMask::None", (int64)EPointCloudSpriteMask::None },
				{ "EPointCloudSpriteMask::Circle", (int64)EPointCloudSpriteMask::Circle },
				{ "EPointCloudSpriteMask::Texture", (int64)EPointCloudSpriteMask::Texture },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/PointCloud.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PointCloudRuntime,
				nullptr,
				"EPointCloudSpriteMask",
				"EPointCloudSpriteMask",
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
	static UEnum* EPointCloudColorOverrideMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PointCloudRuntime_EPointCloudColorOverrideMethod, Z_Construct_UPackage__Script_PointCloudRuntime(), TEXT("EPointCloudColorOverrideMethod"));
		}
		return Singleton;
	}
	template<> POINTCLOUDRUNTIME_API UEnum* StaticEnum<EPointCloudColorOverrideMethod>()
	{
		return EPointCloudColorOverrideMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPointCloudColorOverrideMethod(EPointCloudColorOverrideMethod_StaticEnum, TEXT("/Script/PointCloudRuntime"), TEXT("EPointCloudColorOverrideMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PointCloudRuntime_EPointCloudColorOverrideMethod_Hash() { return 1792825076U; }
	UEnum* Z_Construct_UEnum_PointCloudRuntime_EPointCloudColorOverrideMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PointCloudRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPointCloudColorOverrideMethod"), 0, Get_Z_Construct_UEnum_PointCloudRuntime_EPointCloudColorOverrideMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPointCloudColorOverrideMethod::Replace", (int64)EPointCloudColorOverrideMethod::Replace },
				{ "EPointCloudColorOverrideMethod::Multiply", (int64)EPointCloudColorOverrideMethod::Multiply },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/PointCloud.h" },
				{ "Multiply.ToolTip", "The override color will be multiplied with Red channel (Intensity) of the existing color" },
				{ "Replace.ToolTip", "The color will simply be replaced with the overridden one" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PointCloudRuntime,
				nullptr,
				"EPointCloudColorOverrideMethod",
				"EPointCloudColorOverrideMethod",
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
	static UEnum* EPointCloudColorOverride_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PointCloudRuntime_EPointCloudColorOverride, Z_Construct_UPackage__Script_PointCloudRuntime(), TEXT("EPointCloudColorOverride"));
		}
		return Singleton;
	}
	template<> POINTCLOUDRUNTIME_API UEnum* StaticEnum<EPointCloudColorOverride>()
	{
		return EPointCloudColorOverride_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPointCloudColorOverride(EPointCloudColorOverride_StaticEnum, TEXT("/Script/PointCloudRuntime"), TEXT("EPointCloudColorOverride"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PointCloudRuntime_EPointCloudColorOverride_Hash() { return 1325254729U; }
	UEnum* Z_Construct_UEnum_PointCloudRuntime_EPointCloudColorOverride()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PointCloudRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPointCloudColorOverride"), 0, Get_Z_Construct_UEnum_PointCloudRuntime_EPointCloudColorOverride_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPointCloudColorOverride::None", (int64)EPointCloudColorOverride::None },
				{ "EPointCloudColorOverride::Height", (int64)EPointCloudColorOverride::Height },
				{ "EPointCloudColorOverride::Position", (int64)EPointCloudColorOverride::Position },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Height.ToolTip", "The cloud's color will be overridden with height-based color" },
				{ "ModuleRelativePath", "Public/PointCloud.h" },
				{ "None.ToolTip", "Use original colors" },
				{ "Position.ToolTip", "The cloud's color will be overridden with relative position-based color" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PointCloudRuntime,
				nullptr,
				"EPointCloudColorOverride",
				"EPointCloudColorOverride",
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
	static UEnum* EPointCloudRenderMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PointCloudRuntime_EPointCloudRenderMethod, Z_Construct_UPackage__Script_PointCloudRuntime(), TEXT("EPointCloudRenderMethod"));
		}
		return Singleton;
	}
	template<> POINTCLOUDRUNTIME_API UEnum* StaticEnum<EPointCloudRenderMethod>()
	{
		return EPointCloudRenderMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPointCloudRenderMethod(EPointCloudRenderMethod_StaticEnum, TEXT("/Script/PointCloudRuntime"), TEXT("EPointCloudRenderMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PointCloudRuntime_EPointCloudRenderMethod_Hash() { return 540188881U; }
	UEnum* Z_Construct_UEnum_PointCloudRuntime_EPointCloudRenderMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PointCloudRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPointCloudRenderMethod"), 0, Get_Z_Construct_UEnum_PointCloudRuntime_EPointCloudRenderMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPointCloudRenderMethod::Point_Unlit", (int64)EPointCloudRenderMethod::Point_Unlit },
				{ "EPointCloudRenderMethod::Point_Unlit_RGB", (int64)EPointCloudRenderMethod::Point_Unlit_RGB },
				{ "EPointCloudRenderMethod::Point_Lit", (int64)EPointCloudRenderMethod::Point_Lit },
				{ "EPointCloudRenderMethod::Point_Lit_RGB", (int64)EPointCloudRenderMethod::Point_Lit_RGB },
				{ "EPointCloudRenderMethod::Sprite_Unlit", (int64)EPointCloudRenderMethod::Sprite_Unlit },
				{ "EPointCloudRenderMethod::Sprite_Unlit_RGB", (int64)EPointCloudRenderMethod::Sprite_Unlit_RGB },
				{ "EPointCloudRenderMethod::Sprite_Lit", (int64)EPointCloudRenderMethod::Sprite_Lit },
				{ "EPointCloudRenderMethod::Sprite_Lit_RGB", (int64)EPointCloudRenderMethod::Sprite_Lit_RGB },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/PointCloud.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PointCloudRuntime,
				nullptr,
				"EPointCloudRenderMethod",
				"EPointCloudRenderMethod",
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
	void UPointCloud::StaticRegisterNativesUPointCloud()
	{
		UClass* Class = UPointCloud::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyRenderingParameters", &UPointCloud::execApplyRenderingParameters },
			{ "Bake", &UPointCloud::execBake },
			{ "BP_ColorCollectedPoints", &UPointCloud::execBP_ColorCollectedPoints },
			{ "BP_DeleteCollectedPoints", &UPointCloud::execBP_DeleteCollectedPoints },
			{ "BP_HideCollectedPoints", &UPointCloud::execBP_HideCollectedPoints },
			{ "GetBounds", &UPointCloud::execGetBounds },
			{ "GetCollectedPointLocations", &UPointCloud::execGetCollectedPointLocations },
			{ "GetColorMode", &UPointCloud::execGetColorMode },
			{ "GetLODCount", &UPointCloud::execGetLODCount },
			{ "GetMaterial", &UPointCloud::execGetMaterial },
			{ "GetNumMaterials", &UPointCloud::execGetNumMaterials },
			{ "GetPointCloudData", &UPointCloud::execGetPointCloudData },
			{ "GetPointCount", &UPointCloud::execGetPointCount },
			{ "GetTouchedPoints", &UPointCloud::execGetTouchedPoints },
			{ "IsDirty", &UPointCloud::execIsDirty },
			{ "Rebuild", &UPointCloud::execRebuild },
			{ "Reimport", &UPointCloud::execReimport },
			{ "SetCustomMaterial", &UPointCloud::execSetCustomMaterial },
			{ "SetLODColoration", &UPointCloud::execSetLODColoration },
			{ "SetNewSourcePath", &UPointCloud::execSetNewSourcePath },
			{ "SetPointCloudData", &UPointCloud::execSetPointCloudData },
			{ "SetRenderingMethod", &UPointCloud::execSetRenderingMethod },
			{ "UsesLit", &UPointCloud::execUsesLit },
			{ "UsesLowPrecision", &UPointCloud::execUsesLowPrecision },
			{ "UsesRGB", &UPointCloud::execUsesRGB },
			{ "UsesSprites", &UPointCloud::execUsesSprites },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPointCloud_ApplyRenderingParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_ApplyRenderingParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Applies specified rendering parameters (Brightness, Saturation, etc) to the selected material" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_ApplyRenderingParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "ApplyRenderingParameters", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_ApplyRenderingParameters_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_ApplyRenderingParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_ApplyRenderingParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_ApplyRenderingParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_Bake_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_Bake_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Permanently strips all disabled points" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_Bake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "Bake", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_Bake_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_Bake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_Bake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_Bake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_BP_ColorCollectedPoints_Statics
	{
		struct PointCloud_eventBP_ColorCollectedPoints_Parms
		{
			int32 SelectionListIndex;
			FColor pColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pColor;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectionListIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloud_BP_ColorCollectedPoints_Statics::NewProp_pColor = { "pColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloud_eventBP_ColorCollectedPoints_Parms, pColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloud_BP_ColorCollectedPoints_Statics::NewProp_SelectionListIndex = { "SelectionListIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloud_eventBP_ColorCollectedPoints_Parms, SelectionListIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_BP_ColorCollectedPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_BP_ColorCollectedPoints_Statics::NewProp_pColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_BP_ColorCollectedPoints_Statics::NewProp_SelectionListIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_BP_ColorCollectedPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Not in use Get Collected Point Luk" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_BP_ColorCollectedPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "BP_ColorCollectedPoints", sizeof(PointCloud_eventBP_ColorCollectedPoints_Parms), Z_Construct_UFunction_UPointCloud_BP_ColorCollectedPoints_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_BP_ColorCollectedPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_BP_ColorCollectedPoints_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_BP_ColorCollectedPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_BP_ColorCollectedPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_BP_ColorCollectedPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_BP_DeleteCollectedPoints_Statics
	{
		struct PointCloud_eventBP_DeleteCollectedPoints_Parms
		{
			int32 SelectionListIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectionListIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloud_BP_DeleteCollectedPoints_Statics::NewProp_SelectionListIndex = { "SelectionListIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloud_eventBP_DeleteCollectedPoints_Parms, SelectionListIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_BP_DeleteCollectedPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_BP_DeleteCollectedPoints_Statics::NewProp_SelectionListIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_BP_DeleteCollectedPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Hide Collected Points Index Luk" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_BP_DeleteCollectedPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "BP_DeleteCollectedPoints", sizeof(PointCloud_eventBP_DeleteCollectedPoints_Parms), Z_Construct_UFunction_UPointCloud_BP_DeleteCollectedPoints_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_BP_DeleteCollectedPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_BP_DeleteCollectedPoints_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_BP_DeleteCollectedPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_BP_DeleteCollectedPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_BP_DeleteCollectedPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_BP_HideCollectedPoints_Statics
	{
		struct PointCloud_eventBP_HideCollectedPoints_Parms
		{
			int32 SelectionListIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectionListIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloud_BP_HideCollectedPoints_Statics::NewProp_SelectionListIndex = { "SelectionListIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloud_eventBP_HideCollectedPoints_Parms, SelectionListIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_BP_HideCollectedPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_BP_HideCollectedPoints_Statics::NewProp_SelectionListIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_BP_HideCollectedPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Color Collected Points Index Luk" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_BP_HideCollectedPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "BP_HideCollectedPoints", sizeof(PointCloud_eventBP_HideCollectedPoints_Parms), Z_Construct_UFunction_UPointCloud_BP_HideCollectedPoints_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_BP_HideCollectedPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_BP_HideCollectedPoints_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_BP_HideCollectedPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_BP_HideCollectedPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_BP_HideCollectedPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_GetBounds_Statics
	{
		struct PointCloud_eventGetBounds_Parms
		{
			FBoxSphereBounds ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloud_GetBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloud_eventGetBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_GetBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_GetBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_GetBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_GetBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "GetBounds", sizeof(PointCloud_eventGetBounds_Parms), Z_Construct_UFunction_UPointCloud_GetBounds_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_GetBounds_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_GetBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_GetBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_GetCollectedPointLocations_Statics
	{
		struct PointCloud_eventGetCollectedPointLocations_Parms
		{
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPointCloud_GetCollectedPointLocations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloud_eventGetCollectedPointLocations_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloud_GetCollectedPointLocations_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_GetCollectedPointLocations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_GetCollectedPointLocations_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_GetCollectedPointLocations_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_GetCollectedPointLocations_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Start Luk Code 2" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_GetCollectedPointLocations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "GetCollectedPointLocations", sizeof(PointCloud_eventGetCollectedPointLocations_Parms), Z_Construct_UFunction_UPointCloud_GetCollectedPointLocations_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetCollectedPointLocations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_GetCollectedPointLocations_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetCollectedPointLocations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_GetCollectedPointLocations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_GetCollectedPointLocations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_GetColorMode_Statics
	{
		struct PointCloud_eventGetColorMode_Parms
		{
			EPointCloudColorMode ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPointCloud_GetColorMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloud_eventGetColorMode_Parms, ReturnValue), Z_Construct_UEnum_PointCloudRuntime_EPointCloudColorMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPointCloud_GetColorMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_GetColorMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_GetColorMode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_GetColorMode_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_GetColorMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Returns the type of color information contained within the cloud." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_GetColorMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "GetColorMode", sizeof(PointCloud_eventGetColorMode_Parms), Z_Construct_UFunction_UPointCloud_GetColorMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetColorMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_GetColorMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetColorMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_GetColorMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_GetColorMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_GetLODCount_Statics
	{
		struct PointCloud_eventGetLODCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloud_GetLODCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloud_eventGetLODCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_GetLODCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_GetLODCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_GetLODCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_GetLODCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "GetLODCount", sizeof(PointCloud_eventGetLODCount_Parms), Z_Construct_UFunction_UPointCloud_GetLODCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetLODCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_GetLODCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetLODCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_GetLODCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_GetLODCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_GetMaterial_Statics
	{
		struct PointCloud_eventGetMaterial_Parms
		{
			int32 LOD;
			UMaterialInterface* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LOD;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloud_GetMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloud_eventGetMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloud_GetMaterial_Statics::NewProp_LOD = { "LOD", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloud_eventGetMaterial_Parms, LOD), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_GetMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_GetMaterial_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_GetMaterial_Statics::NewProp_LOD,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_GetMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_GetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "GetMaterial", sizeof(PointCloud_eventGetMaterial_Parms), Z_Construct_UFunction_UPointCloud_GetMaterial_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_GetMaterial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_GetMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_GetMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_GetNumMaterials_Statics
	{
		struct PointCloud_eventGetNumMaterials_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloud_GetNumMaterials_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloud_eventGetNumMaterials_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_GetNumMaterials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_GetNumMaterials_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_GetNumMaterials_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_GetNumMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "GetNumMaterials", sizeof(PointCloud_eventGetNumMaterials_Parms), Z_Construct_UFunction_UPointCloud_GetNumMaterials_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetNumMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_GetNumMaterials_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetNumMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_GetNumMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_GetNumMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_GetPointCloudData_Statics
	{
		struct PointCloud_eventGetPointCloudData_Parms
		{
			TArray<FPointCloudPoint> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPointCloud_GetPointCloudData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloud_eventGetPointCloudData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloud_GetPointCloudData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPointCloudPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_GetPointCloudData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_GetPointCloudData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_GetPointCloudData_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_GetPointCloudData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Return Points Data as reference to array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_GetPointCloudData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "GetPointCloudData", sizeof(PointCloud_eventGetPointCloudData_Parms), Z_Construct_UFunction_UPointCloud_GetPointCloudData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetPointCloudData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_GetPointCloudData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetPointCloudData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_GetPointCloudData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_GetPointCloudData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_GetPointCount_Statics
	{
		struct PointCloud_eventGetPointCount_Parms
		{
			bool bCountOnlyEnabled;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static void NewProp_bCountOnlyEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCountOnlyEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloud_GetPointCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloud_eventGetPointCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPointCloud_GetPointCount_Statics::NewProp_bCountOnlyEnabled_SetBit(void* Obj)
	{
		((PointCloud_eventGetPointCount_Parms*)Obj)->bCountOnlyEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloud_GetPointCount_Statics::NewProp_bCountOnlyEnabled = { "bCountOnlyEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PointCloud_eventGetPointCount_Parms), &Z_Construct_UFunction_UPointCloud_GetPointCount_Statics::NewProp_bCountOnlyEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_GetPointCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_GetPointCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_GetPointCount_Statics::NewProp_bCountOnlyEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_GetPointCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_GetPointCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "GetPointCount", sizeof(PointCloud_eventGetPointCount_Parms), Z_Construct_UFunction_UPointCloud_GetPointCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetPointCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_GetPointCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetPointCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_GetPointCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_GetPointCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_GetTouchedPoints_Statics
	{
		struct PointCloud_eventGetTouchedPoints_Parms
		{
			int32 SelectionListIndex;
			FVector ColliderLocation;
			int32 Radius;
			TArray<FPointCloudPoint> InPoints;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InPoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPoints_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColliderLocation;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectionListIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPointCloud_GetTouchedPoints_Statics::NewProp_InPoints = { "InPoints", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloud_eventGetTouchedPoints_Parms, InPoints), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloud_GetTouchedPoints_Statics::NewProp_InPoints_Inner = { "InPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPointCloudPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloud_GetTouchedPoints_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloud_eventGetTouchedPoints_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloud_GetTouchedPoints_Statics::NewProp_ColliderLocation = { "ColliderLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloud_eventGetTouchedPoints_Parms, ColliderLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloud_GetTouchedPoints_Statics::NewProp_SelectionListIndex = { "SelectionListIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloud_eventGetTouchedPoints_Parms, SelectionListIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_GetTouchedPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_GetTouchedPoints_Statics::NewProp_InPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_GetTouchedPoints_Statics::NewProp_InPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_GetTouchedPoints_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_GetTouchedPoints_Statics::NewProp_ColliderLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_GetTouchedPoints_Statics::NewProp_SelectionListIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_GetTouchedPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "LUK CODE" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_GetTouchedPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "GetTouchedPoints", sizeof(PointCloud_eventGetTouchedPoints_Parms), Z_Construct_UFunction_UPointCloud_GetTouchedPoints_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetTouchedPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_GetTouchedPoints_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetTouchedPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_GetTouchedPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_GetTouchedPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_IsDirty_Statics
	{
		struct PointCloud_eventIsDirty_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPointCloud_IsDirty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointCloud_eventIsDirty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloud_IsDirty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PointCloud_eventIsDirty_Parms), &Z_Construct_UFunction_UPointCloud_IsDirty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_IsDirty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_IsDirty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_IsDirty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_IsDirty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "IsDirty", sizeof(PointCloud_eventIsDirty_Parms), Z_Construct_UFunction_UPointCloud_IsDirty_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_IsDirty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_IsDirty_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_IsDirty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_IsDirty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_IsDirty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_Rebuild_Statics
	{
		struct PointCloud_eventRebuild_Parms
		{
			bool bForced;
		};
		static void NewProp_bForced_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForced;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPointCloud_Rebuild_Statics::NewProp_bForced_SetBit(void* Obj)
	{
		((PointCloud_eventRebuild_Parms*)Obj)->bForced = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloud_Rebuild_Statics::NewProp_bForced = { "bForced", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PointCloud_eventRebuild_Parms), &Z_Construct_UFunction_UPointCloud_Rebuild_Statics::NewProp_bForced_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_Rebuild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_Rebuild_Statics::NewProp_bForced,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_Rebuild_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "CPP_Default_bForced", "false" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Rebuilds the cloud using current settings" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_Rebuild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "Rebuild", sizeof(PointCloud_eventRebuild_Parms), Z_Construct_UFunction_UPointCloud_Rebuild_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_Rebuild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_Rebuild_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_Rebuild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_Rebuild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_Rebuild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_Reimport_Statics
	{
		struct PointCloud_eventReimport_Parms
		{
			bool bRebuild;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bRebuild_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRebuild;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPointCloud_Reimport_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointCloud_eventReimport_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloud_Reimport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PointCloud_eventReimport_Parms), &Z_Construct_UFunction_UPointCloud_Reimport_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPointCloud_Reimport_Statics::NewProp_bRebuild_SetBit(void* Obj)
	{
		((PointCloud_eventReimport_Parms*)Obj)->bRebuild = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloud_Reimport_Statics::NewProp_bRebuild = { "bRebuild", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PointCloud_eventReimport_Parms), &Z_Construct_UFunction_UPointCloud_Reimport_Statics::NewProp_bRebuild_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_Reimport_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_Reimport_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_Reimport_Statics::NewProp_bRebuild,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_Reimport_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "CPP_Default_bRebuild", "true" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Reimports the cloud from it's original source file, overwriting any current point information.\nOptionally rebuilds the cloud if successfully reimported.\nReturns true if successful." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_Reimport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "Reimport", sizeof(PointCloud_eventReimport_Parms), Z_Construct_UFunction_UPointCloud_Reimport_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_Reimport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_Reimport_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_Reimport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_Reimport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_Reimport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_SetCustomMaterial_Statics
	{
		struct PointCloud_eventSetCustomMaterial_Parms
		{
			UMaterialInterface* InCustomMaterial;
			bool bRebuild;
		};
		static void NewProp_bRebuild_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRebuild;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCustomMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPointCloud_SetCustomMaterial_Statics::NewProp_bRebuild_SetBit(void* Obj)
	{
		((PointCloud_eventSetCustomMaterial_Parms*)Obj)->bRebuild = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloud_SetCustomMaterial_Statics::NewProp_bRebuild = { "bRebuild", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PointCloud_eventSetCustomMaterial_Parms), &Z_Construct_UFunction_UPointCloud_SetCustomMaterial_Statics::NewProp_bRebuild_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloud_SetCustomMaterial_Statics::NewProp_InCustomMaterial = { "InCustomMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloud_eventSetCustomMaterial_Parms, InCustomMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_SetCustomMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_SetCustomMaterial_Statics::NewProp_bRebuild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_SetCustomMaterial_Statics::NewProp_InCustomMaterial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_SetCustomMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "CPP_Default_bRebuild", "false" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Sets Custom Material and optionally rebuilds the cloud." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_SetCustomMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "SetCustomMaterial", sizeof(PointCloud_eventSetCustomMaterial_Parms), Z_Construct_UFunction_UPointCloud_SetCustomMaterial_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_SetCustomMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_SetCustomMaterial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_SetCustomMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_SetCustomMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_SetCustomMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_SetLODColoration_Statics
	{
		struct PointCloud_eventSetLODColoration_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPointCloud_SetLODColoration_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((PointCloud_eventSetLODColoration_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloud_SetLODColoration_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PointCloud_eventSetLODColoration_Parms), &Z_Construct_UFunction_UPointCloud_SetLODColoration_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_SetLODColoration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_SetLODColoration_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_SetLODColoration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Sets the LOD Coloration flag for the material" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_SetLODColoration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "SetLODColoration", sizeof(PointCloud_eventSetLODColoration_Parms), Z_Construct_UFunction_UPointCloud_SetLODColoration_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_SetLODColoration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_SetLODColoration_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_SetLODColoration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_SetLODColoration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_SetLODColoration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_SetNewSourcePath_Statics
	{
		struct PointCloud_eventSetNewSourcePath_Parms
		{
			FString NewSourcePath;
			bool bProcessHeader;
		};
		static void NewProp_bProcessHeader_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProcessHeader;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewSourcePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPointCloud_SetNewSourcePath_Statics::NewProp_bProcessHeader_SetBit(void* Obj)
	{
		((PointCloud_eventSetNewSourcePath_Parms*)Obj)->bProcessHeader = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloud_SetNewSourcePath_Statics::NewProp_bProcessHeader = { "bProcessHeader", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PointCloud_eventSetNewSourcePath_Parms), &Z_Construct_UFunction_UPointCloud_SetNewSourcePath_Statics::NewProp_bProcessHeader_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPointCloud_SetNewSourcePath_Statics::NewProp_NewSourcePath = { "NewSourcePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloud_eventSetNewSourcePath_Parms, NewSourcePath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_SetNewSourcePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_SetNewSourcePath_Statics::NewProp_bProcessHeader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_SetNewSourcePath_Statics::NewProp_NewSourcePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_SetNewSourcePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "CPP_Default_bProcessHeader", "true" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Sets new source for the file and optionally runs all necessary processing." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_SetNewSourcePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "SetNewSourcePath", sizeof(PointCloud_eventSetNewSourcePath_Parms), Z_Construct_UFunction_UPointCloud_SetNewSourcePath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_SetNewSourcePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_SetNewSourcePath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_SetNewSourcePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_SetNewSourcePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_SetNewSourcePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_SetPointCloudData_Statics
	{
		struct PointCloud_eventSetPointCloudData_Parms
		{
			TArray<FPointCloudPoint> InPoints;
			bool bRebuildCloud;
		};
		static void NewProp_bRebuildCloud_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRebuildCloud;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InPoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPoints_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPointCloud_SetPointCloudData_Statics::NewProp_bRebuildCloud_SetBit(void* Obj)
	{
		((PointCloud_eventSetPointCloudData_Parms*)Obj)->bRebuildCloud = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloud_SetPointCloudData_Statics::NewProp_bRebuildCloud = { "bRebuildCloud", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PointCloud_eventSetPointCloudData_Parms), &Z_Construct_UFunction_UPointCloud_SetPointCloudData_Statics::NewProp_bRebuildCloud_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPointCloud_SetPointCloudData_Statics::NewProp_InPoints = { "InPoints", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloud_eventSetPointCloudData_Parms, InPoints), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloud_SetPointCloudData_Statics::NewProp_InPoints_Inner = { "InPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPointCloudPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_SetPointCloudData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_SetPointCloudData_Statics::NewProp_bRebuildCloud,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_SetPointCloudData_Statics::NewProp_InPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_SetPointCloudData_Statics::NewProp_InPoints_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_SetPointCloudData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "CPP_Default_bRebuildCloud", "true" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Replaces the original data with the set provided.\nOptionally rebuilds using current settings." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_SetPointCloudData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "SetPointCloudData", sizeof(PointCloud_eventSetPointCloudData_Parms), Z_Construct_UFunction_UPointCloud_SetPointCloudData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_SetPointCloudData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_SetPointCloudData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_SetPointCloudData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_SetPointCloudData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_SetPointCloudData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_SetRenderingMethod_Statics
	{
		struct PointCloud_eventSetRenderingMethod_Parms
		{
			EPointCloudRenderMethod NewRenderMethod;
			bool bRebuild;
		};
		static void NewProp_bRebuild_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRebuild;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewRenderMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewRenderMethod_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPointCloud_SetRenderingMethod_Statics::NewProp_bRebuild_SetBit(void* Obj)
	{
		((PointCloud_eventSetRenderingMethod_Parms*)Obj)->bRebuild = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloud_SetRenderingMethod_Statics::NewProp_bRebuild = { "bRebuild", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PointCloud_eventSetRenderingMethod_Parms), &Z_Construct_UFunction_UPointCloud_SetRenderingMethod_Statics::NewProp_bRebuild_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPointCloud_SetRenderingMethod_Statics::NewProp_NewRenderMethod = { "NewRenderMethod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloud_eventSetRenderingMethod_Parms, NewRenderMethod), Z_Construct_UEnum_PointCloudRuntime_EPointCloudRenderMethod, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPointCloud_SetRenderingMethod_Statics::NewProp_NewRenderMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_SetRenderingMethod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_SetRenderingMethod_Statics::NewProp_bRebuild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_SetRenderingMethod_Statics::NewProp_NewRenderMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_SetRenderingMethod_Statics::NewProp_NewRenderMethod_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_SetRenderingMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "CPP_Default_bRebuild", "false" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Sets new Rendering Method." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_SetRenderingMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "SetRenderingMethod", sizeof(PointCloud_eventSetRenderingMethod_Parms), Z_Construct_UFunction_UPointCloud_SetRenderingMethod_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_SetRenderingMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_SetRenderingMethod_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_SetRenderingMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_SetRenderingMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_SetRenderingMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_UsesLit_Statics
	{
		struct PointCloud_eventUsesLit_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPointCloud_UsesLit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointCloud_eventUsesLit_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloud_UsesLit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PointCloud_eventUsesLit_Parms), &Z_Construct_UFunction_UPointCloud_UsesLit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_UsesLit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_UsesLit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_UsesLit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Returns true if the chosen Render Method uses lit lighting model." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_UsesLit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "UsesLit", sizeof(PointCloud_eventUsesLit_Parms), Z_Construct_UFunction_UPointCloud_UsesLit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_UsesLit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_UsesLit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_UsesLit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_UsesLit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_UsesLit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_UsesLowPrecision_Statics
	{
		struct PointCloud_eventUsesLowPrecision_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPointCloud_UsesLowPrecision_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointCloud_eventUsesLowPrecision_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloud_UsesLowPrecision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PointCloud_eventUsesLowPrecision_Parms), &Z_Construct_UFunction_UPointCloud_UsesLowPrecision_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_UsesLowPrecision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_UsesLowPrecision_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_UsesLowPrecision_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_UsesLowPrecision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "UsesLowPrecision", sizeof(PointCloud_eventUsesLowPrecision_Parms), Z_Construct_UFunction_UPointCloud_UsesLowPrecision_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_UsesLowPrecision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_UsesLowPrecision_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_UsesLowPrecision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_UsesLowPrecision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_UsesLowPrecision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_UsesRGB_Statics
	{
		struct PointCloud_eventUsesRGB_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPointCloud_UsesRGB_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointCloud_eventUsesRGB_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloud_UsesRGB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PointCloud_eventUsesRGB_Parms), &Z_Construct_UFunction_UPointCloud_UsesRGB_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_UsesRGB_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_UsesRGB_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_UsesRGB_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Returns true if the chosen Render Method requires RGB color data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_UsesRGB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "UsesRGB", sizeof(PointCloud_eventUsesRGB_Parms), Z_Construct_UFunction_UPointCloud_UsesRGB_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_UsesRGB_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_UsesRGB_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_UsesRGB_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_UsesRGB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_UsesRGB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_UsesSprites_Statics
	{
		struct PointCloud_eventUsesSprites_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPointCloud_UsesSprites_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointCloud_eventUsesSprites_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloud_UsesSprites_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PointCloud_eventUsesSprites_Parms), &Z_Construct_UFunction_UPointCloud_UsesSprites_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_UsesSprites_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_UsesSprites_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_UsesSprites_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_UsesSprites_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "UsesSprites", sizeof(PointCloud_eventUsesSprites_Parms), Z_Construct_UFunction_UPointCloud_UsesSprites_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_UsesSprites_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloud_UsesSprites_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_UsesSprites_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloud_UsesSprites()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloud_UsesSprites_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPointCloud_NoRegister()
	{
		return UPointCloud::StaticClass();
	}
	struct Z_Construct_UClass_UPointCloud_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Materials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MasterMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseReductionDensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NoiseReductionDensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseReductionDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NoiseReductionDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DensityReductionDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DensityReductionDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Translation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Offset_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugLOD_MetaData[];
#endif
		static void NewProp_bDebugLOD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpriteMask;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpriteMask_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SinglePolyScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SinglePolyScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLerpSpriteSize_MetaData[];
#endif
		static void NewProp_bLerpSpriteSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLerpSpriteSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteSizeBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpriteSizeBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpriteSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightColorTop_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeightColorTop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightColorBottom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeightColorBottom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorOverrideMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ColorOverrideMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ColorOverrideMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ColorOverride;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ColorOverride_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gamma_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Gamma;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Saturation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Saturation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Contrast_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Contrast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Brightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RenderMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RenderMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVertexBufferPreloading_MetaData[];
#endif
		static void NewProp_bVertexBufferPreloading_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVertexBufferPreloading;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLowPrecision_MetaData[];
#endif
		static void NewProp_bUseLowPrecision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLowPrecision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreferredNodeSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreferredNodeSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODReduction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LODReduction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODDistribution_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LODDistribution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ViewDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableLOD_MetaData[];
#endif
		static void NewProp_bEnableLOD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumNodePointCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinimumNodePointCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SinglePolySpriteMinimumLOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SinglePolySpriteMinimumLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourcePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourcePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPointCloud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPointCloud_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPointCloud_ApplyRenderingParameters, "ApplyRenderingParameters" }, // 1729720017
		{ &Z_Construct_UFunction_UPointCloud_Bake, "Bake" }, // 1859343979
		{ &Z_Construct_UFunction_UPointCloud_BP_ColorCollectedPoints, "BP_ColorCollectedPoints" }, // 397478623
		{ &Z_Construct_UFunction_UPointCloud_BP_DeleteCollectedPoints, "BP_DeleteCollectedPoints" }, // 1657208863
		{ &Z_Construct_UFunction_UPointCloud_BP_HideCollectedPoints, "BP_HideCollectedPoints" }, // 3497714634
		{ &Z_Construct_UFunction_UPointCloud_GetBounds, "GetBounds" }, // 4003801707
		{ &Z_Construct_UFunction_UPointCloud_GetCollectedPointLocations, "GetCollectedPointLocations" }, // 3748621142
		{ &Z_Construct_UFunction_UPointCloud_GetColorMode, "GetColorMode" }, // 4155626947
		{ &Z_Construct_UFunction_UPointCloud_GetLODCount, "GetLODCount" }, // 912905711
		{ &Z_Construct_UFunction_UPointCloud_GetMaterial, "GetMaterial" }, // 1393870140
		{ &Z_Construct_UFunction_UPointCloud_GetNumMaterials, "GetNumMaterials" }, // 428697908
		{ &Z_Construct_UFunction_UPointCloud_GetPointCloudData, "GetPointCloudData" }, // 1598880285
		{ &Z_Construct_UFunction_UPointCloud_GetPointCount, "GetPointCount" }, // 1720545787
		{ &Z_Construct_UFunction_UPointCloud_GetTouchedPoints, "GetTouchedPoints" }, // 3009046880
		{ &Z_Construct_UFunction_UPointCloud_IsDirty, "IsDirty" }, // 1954845454
		{ &Z_Construct_UFunction_UPointCloud_Rebuild, "Rebuild" }, // 874996021
		{ &Z_Construct_UFunction_UPointCloud_Reimport, "Reimport" }, // 862459480
		{ &Z_Construct_UFunction_UPointCloud_SetCustomMaterial, "SetCustomMaterial" }, // 446549802
		{ &Z_Construct_UFunction_UPointCloud_SetLODColoration, "SetLODColoration" }, // 687186034
		{ &Z_Construct_UFunction_UPointCloud_SetNewSourcePath, "SetNewSourcePath" }, // 505255131
		{ &Z_Construct_UFunction_UPointCloud_SetPointCloudData, "SetPointCloudData" }, // 873764941
		{ &Z_Construct_UFunction_UPointCloud_SetRenderingMethod, "SetRenderingMethod" }, // 1589886918
		{ &Z_Construct_UFunction_UPointCloud_UsesLit, "UsesLit" }, // 543088567
		{ &Z_Construct_UFunction_UPointCloud_UsesLowPrecision, "UsesLowPrecision" }, // 2307214158
		{ &Z_Construct_UFunction_UPointCloud_UsesRGB, "UsesRGB" }, // 2266395817
		{ &Z_Construct_UFunction_UPointCloud_UsesSprites, "UsesSprites" }, // 4124340729
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::Class_MetaDataParams[] = {
		{ "AutoCollapseCategories", "Import Settings" },
		{ "AutoExpandCategories", "Performance Rendering|Sprite" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "PointCloud.h" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_Materials_MetaData[] = {
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Stores material for each LOD" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointCloud, Materials), METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_Materials_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_Materials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_MasterMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Array for collected Points Luk" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_MasterMaterial = { "MasterMaterial", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointCloud, MasterMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_MasterMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_MasterMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_NoiseReductionDensity_MetaData[] = {
		{ "Category", "Processing" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Minimum amount of neighbors within the NoiseReductionDistance range of the point, for it to not be considered stray.\nOptimal value will depend on the density of the cloud and sizes of the artifacts. 5 seems to generally give good results without visible data loss.\nSetting this value too high will cause quality degradation and cloud coverage loss." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_NoiseReductionDensity = { "NoiseReductionDensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointCloud, NoiseReductionDensity), METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_NoiseReductionDensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_NoiseReductionDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_NoiseReductionDistance_MetaData[] = {
		{ "Category", "Processing" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Points which are further away than this value will be removed.\nUseful to remove singular points and small clusters scattered around the area.\nOptimal value will depend on the density of the cloud and the value of DensityReductionDistance.\nSetting this value too low will cause quality degradation and cloud coverage loss.\nValues higher than 0 will enable the reduction." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_NoiseReductionDistance = { "NoiseReductionDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointCloud, NoiseReductionDistance), METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_NoiseReductionDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_NoiseReductionDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_DensityReductionDistance_MetaData[] = {
		{ "Category", "Processing" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Points which are closer than this value will be removed.\nHigher number will result in lower cloud resolution.\nValues higher than 0 will enable the reduction." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_DensityReductionDistance = { "DensityReductionDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointCloud, DensityReductionDistance), METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_DensityReductionDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_DensityReductionDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Transformation" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Scale to apply to each point" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointCloud, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_Scale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_Translation_MetaData[] = {
		{ "Category", "Transformation" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Offset to add to each point" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointCloud, Translation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_Translation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_Translation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Transformation" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "How should the point cloud be repositioned:\nNone: no change to coordinates\nCenter: moves center of the cloud to 0,0,0\nFirst Point: moves first point to 0,0,0" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointCloud, Offset), Z_Construct_UEnum_PointCloudRuntime_EPointCloudOffset, METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_Offset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_Offset_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_Offset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_bDebugLOD_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Freezes LOD processing. Useful for debugging out of screen rendering." },
	};
#endif
	void Z_Construct_UClass_UPointCloud_Statics::NewProp_bDebugLOD_SetBit(void* Obj)
	{
		((UPointCloud*)Obj)->bDebugLOD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_bDebugLOD = { "bDebugLOD", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPointCloud), &Z_Construct_UClass_UPointCloud_Statics::NewProp_bDebugLOD_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_bDebugLOD_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_bDebugLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_CustomMaterial_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Setting this will automatically replace the default material.\nTo access the properties selected via the panel, use MF_PointCloudParameters node.\nNOTE: if used in conjunction with Sprite rendering mode, make sure to assign WorldPositionOffset\nvia MF_PointCloud_SpriteTransform node (or some other way), otherwise nothing will be visible." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_CustomMaterial = { "CustomMaterial", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointCloud, CustomMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_CustomMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_CustomMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteMask_MetaData[] = {
		{ "Category", "Rendering|Sprite" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Affects the shape of sprites.\nNone - Standard, square shape. Fastest.\nCircle - Simple circle, medium speed.\nTexture - Alpha channel of the sprite texture. Slowest." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteMask = { "SpriteMask", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointCloud, SpriteMask), Z_Construct_UEnum_PointCloudRuntime_EPointCloudSpriteMask, METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteMask_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteMask_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteMask_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteTexture_MetaData[] = {
		{ "Category", "Rendering|Sprite" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Texture to use with sprites." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteTexture = { "SpriteTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointCloud, SpriteTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_SinglePolyScale_MetaData[] = {
		{ "Category", "Rendering|Sprite" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Allows applying custom scale to single poly sprites. Useful when minimizing gaps.\nTop, Right, Bottom, Left\nWarning: setting it too high will result in performance degradation." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_SinglePolyScale = { "SinglePolyScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointCloud, SinglePolyScale), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_SinglePolyScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_SinglePolyScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_bLerpSpriteSize_MetaData[] = {
		{ "Category", "Rendering|Sprite" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Enabling it will attempt to make the sprite size transition smoother." },
	};
#endif
	void Z_Construct_UClass_UPointCloud_Statics::NewProp_bLerpSpriteSize_SetBit(void* Obj)
	{
		((UPointCloud*)Obj)->bLerpSpriteSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_bLerpSpriteSize = { "bLerpSpriteSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPointCloud), &Z_Construct_UClass_UPointCloud_Statics::NewProp_bLerpSpriteSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_bLerpSpriteSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_bLerpSpriteSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteSizeBias_MetaData[] = {
		{ "Category", "Rendering|Sprite" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Allows fine-tuning of the sprite size auto-adjustment.\nSetting it too high may result in unnecessarily large sprites, degrading quality,\nwhile setting it too low will result in visible gaps between individual sprites." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteSizeBias = { "SpriteSizeBias", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointCloud, SpriteSizeBias), METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteSizeBias_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteSizeBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteSize_MetaData[] = {
		{ "Category", "Rendering|Sprite" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Minimum and Maximum sizes of the sprite" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteSize = { "SpriteSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointCloud, SpriteSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_HeightColorTop_MetaData[] = {
		{ "Category", "Rendering|Color Override" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Specifies the top color of the height-based gradient." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_HeightColorTop = { "HeightColorTop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointCloud, HeightColorTop), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_HeightColorTop_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_HeightColorTop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_HeightColorBottom_MetaData[] = {
		{ "Category", "Rendering|Color Override" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Specifies the bottom color of the height-based gradient." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_HeightColorBottom = { "HeightColorBottom", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointCloud, HeightColorBottom), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_HeightColorBottom_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_HeightColorBottom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_ColorOverrideMethod_MetaData[] = {
		{ "Category", "Rendering|Color Override" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Determines how the override should be applied." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_ColorOverrideMethod = { "ColorOverrideMethod", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointCloud, ColorOverrideMethod), Z_Construct_UEnum_PointCloudRuntime_EPointCloudColorOverrideMethod, METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_ColorOverrideMethod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_ColorOverrideMethod_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_ColorOverrideMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_ColorOverride_MetaData[] = {
		{ "Category", "Rendering|Color Override" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Determines if, and how the color of the cloud should be overridden." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_ColorOverride = { "ColorOverride", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointCloud, ColorOverride), Z_Construct_UEnum_PointCloudRuntime_EPointCloudColorOverride, METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_ColorOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_ColorOverride_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_ColorOverride_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_Intensity_MetaData[] = {
		{ "Category", "Rendering|Color Adjustment" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Multiplies the color output by the given value.\nUseful in combination with Unlit render mode to create Bloom and light bleed effects." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointCloud, Intensity), METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_Intensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_Intensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Rendering|Color Adjustment" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Specifies the tint to apply to the points." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointCloud, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_Color_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_Gamma_MetaData[] = {
		{ "Category", "Rendering|Color Adjustment" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_Gamma = { "Gamma", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointCloud, Gamma), METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_Gamma_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_Gamma_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_Saturation_MetaData[] = {
		{ "Category", "Rendering|Color Adjustment" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Ignored if non-RGB rendering mode is selected" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_Saturation = { "Saturation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointCloud, Saturation), METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_Saturation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_Saturation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_Contrast_MetaData[] = {
		{ "Category", "Rendering|Color Adjustment" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_Contrast = { "Contrast", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointCloud, Contrast), METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_Contrast_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_Contrast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_Brightness_MetaData[] = {
		{ "Category", "Rendering|Color Adjustment" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Applied additively, 0 being neutral." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_Brightness = { "Brightness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointCloud, Brightness), METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_Brightness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_Brightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_RenderMethod_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_RenderMethod = { "RenderMethod", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointCloud, RenderMethod), Z_Construct_UEnum_PointCloudRuntime_EPointCloudRenderMethod, METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_RenderMethod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_RenderMethod_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_RenderMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_bVertexBufferPreloading_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "If enabled, Vertex Buffer is built and sent to the GPU as soon as the cloud is loaded, and released only when the level changes.\nThis may reduce loading times at the cost of fixed VRAM pre-allocation.\nRecommended when you often switch cloud's visibility." },
	};
#endif
	void Z_Construct_UClass_UPointCloud_Statics::NewProp_bVertexBufferPreloading_SetBit(void* Obj)
	{
		((UPointCloud*)Obj)->bVertexBufferPreloading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_bVertexBufferPreloading = { "bVertexBufferPreloading", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPointCloud), &Z_Construct_UClass_UPointCloud_Statics::NewProp_bVertexBufferPreloading_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_bVertexBufferPreloading_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_bVertexBufferPreloading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_bUseLowPrecision_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Uses 16-bit precision for Location and 16-bit RGB color but significantly reduces VRAM requirements." },
	};
#endif
	void Z_Construct_UClass_UPointCloud_Statics::NewProp_bUseLowPrecision_SetBit(void* Obj)
	{
		((UPointCloud*)Obj)->bUseLowPrecision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_bUseLowPrecision = { "bUseLowPrecision", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPointCloud), &Z_Construct_UClass_UPointCloud_Statics::NewProp_bUseLowPrecision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_bUseLowPrecision_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_bUseLowPrecision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_PreferredNodeSize_MetaData[] = {
		{ "Category", "Performance" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Affects the number of LODs to generate\nSmaller numbers will result in longer build times for the cloud.\nSetting it too low may consume excessively large CPU time at runtime" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_PreferredNodeSize = { "PreferredNodeSize", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointCloud, PreferredNodeSize), METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_PreferredNodeSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_PreferredNodeSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_LODReduction_MetaData[] = {
		{ "Category", "Performance" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "LOD Reduction Factor" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Specifies the percentage of points to remove in each LOD step.\nRequires range of 0 - 1. Higher numbers will result in faster quality degradation.\nFor example, setting it to 0.5 will generate LOD0: 100%, LOD1: 50%, LOD2: 25%, LOD3: 12.5% etc." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_LODReduction = { "LODReduction", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointCloud, LODReduction), METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_LODReduction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_LODReduction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_LODDistribution_MetaData[] = {
		{ "Category", "Performance" },
		{ "ClampMin", "1" },
		{ "DisplayName", "LOD Distribution" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Controls the transition distance between consecutive LODs.\nHigher values will result in better quality but worse performance." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_LODDistribution = { "LODDistribution", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointCloud, LODDistribution), METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_LODDistribution_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_LODDistribution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_ViewDistance_MetaData[] = {
		{ "Category", "Performance" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Affects the distance at which the LOD switches to max quality, measured in UU from camera position.\nHigher values will result in better quality but may degrade performance." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_ViewDistance = { "ViewDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointCloud, ViewDistance), METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_ViewDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_ViewDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_bEnableLOD_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Enables usage of the auto-LOD system. May be beneficial to disable for very small clouds." },
	};
#endif
	void Z_Construct_UClass_UPointCloud_Statics::NewProp_bEnableLOD_SetBit(void* Obj)
	{
		((UPointCloud*)Obj)->bEnableLOD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_bEnableLOD = { "bEnableLOD", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPointCloud), &Z_Construct_UClass_UPointCloud_Statics::NewProp_bEnableLOD_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_bEnableLOD_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_bEnableLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_MinimumNodePointCount_MetaData[] = {
		{ "Category", "Performance" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Minimum amount of points for the node to be rendered. This can save CPU time by skipping stray, inconsequential nodes (usually noise)\nbut setting it too high may result in visible artifacts. Less dense clouds should generally have this value lowered." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_MinimumNodePointCount = { "MinimumNodePointCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointCloud, MinimumNodePointCount), METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_MinimumNodePointCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_MinimumNodePointCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_SinglePolySpriteMinimumLOD_MetaData[] = {
		{ "Category", "Performance" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Single Poly Minimum LOD" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Minimum LOD at which to switch to single triangle per sprite. Ignored if using point rendering.\nUse SinglePolyScale property to help mitigate potential gaps between triangles.\n0                       Always\n1 - MaxLOD   Switches at given LOD\n> MAXLOD     Disabled" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_SinglePolySpriteMinimumLOD = { "SinglePolySpriteMinimumLOD", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointCloud, SinglePolySpriteMinimumLOD), METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_SinglePolySpriteMinimumLOD_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_SinglePolySpriteMinimumLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_SourcePath_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
		{ "ToolTip", "Stores the path to the original source file. Empty if dynamically created." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_SourcePath = { "SourcePath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointCloud, SourcePath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::NewProp_SourcePath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_SourcePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPointCloud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_Materials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_Materials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_MasterMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_NoiseReductionDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_NoiseReductionDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_DensityReductionDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_Translation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_Offset_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_bDebugLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_CustomMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteMask_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_SinglePolyScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_bLerpSpriteSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteSizeBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_SpriteSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_HeightColorTop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_HeightColorBottom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_ColorOverrideMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_ColorOverrideMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_ColorOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_ColorOverride_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_Intensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_Gamma,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_Saturation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_Contrast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_Brightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_RenderMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_RenderMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_bVertexBufferPreloading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_bUseLowPrecision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_PreferredNodeSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_LODReduction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_LODDistribution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_ViewDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_bEnableLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_MinimumNodePointCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_SinglePolySpriteMinimumLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_SourcePath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPointCloud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointCloud>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPointCloud_Statics::ClassParams = {
		&UPointCloud::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPointCloud_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPointCloud_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPointCloud()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPointCloud_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPointCloud, 359247326);
	template<> POINTCLOUDRUNTIME_API UClass* StaticClass<UPointCloud>()
	{
		return UPointCloud::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPointCloud(Z_Construct_UClass_UPointCloud, &UPointCloud::StaticClass, TEXT("/Script/PointCloudRuntime"), TEXT("UPointCloud"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPointCloud);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPointCloud)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
