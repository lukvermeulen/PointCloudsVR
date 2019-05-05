// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudRuntime/Public/PointCloudStatics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointCloudStatics() {}
// Cross Module References
	POINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_UPointCloudStatics_NoRegister();
	POINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_UPointCloudStatics();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_PointCloudRuntime();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloudStatics_GetColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	POINTCLOUDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudPoint();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloudStatics_GetLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloudStatics_GetOriginalLocation();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloudStatics_IsEnabled();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloudStatics_MakeEmptyPointCloud();
	POINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_UPointCloud_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloudStatics_SetColor();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloudStatics_SetEnabled();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloudStatics_SetEnabledAuto();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloudStatics_SetOriginalLocation();
// End Cross Module References
	void UPointCloudStatics::StaticRegisterNativesUPointCloudStatics()
	{
		UClass* Class = UPointCloudStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetColor", &UPointCloudStatics::execGetColor },
			{ "GetLocation", &UPointCloudStatics::execGetLocation },
			{ "GetOriginalLocation", &UPointCloudStatics::execGetOriginalLocation },
			{ "IsEnabled", &UPointCloudStatics::execIsEnabled },
			{ "MakeEmptyPointCloud", &UPointCloudStatics::execMakeEmptyPointCloud },
			{ "MakePointCloudPoint", &UPointCloudStatics::execMakePointCloudPoint },
			{ "SetColor", &UPointCloudStatics::execSetColor },
			{ "SetEnabled", &UPointCloudStatics::execSetEnabled },
			{ "SetEnabledAuto", &UPointCloudStatics::execSetEnabledAuto },
			{ "SetOriginalLocation", &UPointCloudStatics::execSetOriginalLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPointCloudStatics_GetColor_Statics
	{
		struct PointCloudStatics_eventGetColor_Parms
		{
			FPointCloudPoint InPoint;
			FColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudStatics_GetColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloudStatics_eventGetColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudStatics_GetColor_Statics::NewProp_InPoint = { "InPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloudStatics_eventGetColor_Parms, InPoint), Z_Construct_UScriptStruct_FPointCloudPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudStatics_GetColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_GetColor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_GetColor_Statics::NewProp_InPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudStatics_GetColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/PointCloudStatics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudStatics_GetColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudStatics, nullptr, "GetColor", sizeof(PointCloudStatics_eventGetColor_Parms), Z_Construct_UFunction_UPointCloudStatics_GetColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_GetColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudStatics_GetColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_GetColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloudStatics_GetColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloudStatics_GetColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudStatics_GetLocation_Statics
	{
		struct PointCloudStatics_eventGetLocation_Parms
		{
			FPointCloudPoint InPoint;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudStatics_GetLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloudStatics_eventGetLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudStatics_GetLocation_Statics::NewProp_InPoint = { "InPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloudStatics_eventGetLocation_Parms, InPoint), Z_Construct_UScriptStruct_FPointCloudPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudStatics_GetLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_GetLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_GetLocation_Statics::NewProp_InPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudStatics_GetLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/PointCloudStatics.h" },
		{ "ToolTip", "Location after transformation applied" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudStatics_GetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudStatics, nullptr, "GetLocation", sizeof(PointCloudStatics_eventGetLocation_Parms), Z_Construct_UFunction_UPointCloudStatics_GetLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_GetLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudStatics_GetLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_GetLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloudStatics_GetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloudStatics_GetLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudStatics_GetOriginalLocation_Statics
	{
		struct PointCloudStatics_eventGetOriginalLocation_Parms
		{
			FPointCloudPoint InPoint;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudStatics_GetOriginalLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloudStatics_eventGetOriginalLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudStatics_GetOriginalLocation_Statics::NewProp_InPoint = { "InPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloudStatics_eventGetOriginalLocation_Parms, InPoint), Z_Construct_UScriptStruct_FPointCloudPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudStatics_GetOriginalLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_GetOriginalLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_GetOriginalLocation_Statics::NewProp_InPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudStatics_GetOriginalLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/PointCloudStatics.h" },
		{ "ToolTip", "Location prior to transformation applied" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudStatics_GetOriginalLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudStatics, nullptr, "GetOriginalLocation", sizeof(PointCloudStatics_eventGetOriginalLocation_Parms), Z_Construct_UFunction_UPointCloudStatics_GetOriginalLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_GetOriginalLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudStatics_GetOriginalLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_GetOriginalLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloudStatics_GetOriginalLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloudStatics_GetOriginalLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudStatics_IsEnabled_Statics
	{
		struct PointCloudStatics_eventIsEnabled_Parms
		{
			FPointCloudPoint InPoint;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPointCloudStatics_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointCloudStatics_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloudStatics_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PointCloudStatics_eventIsEnabled_Parms), &Z_Construct_UFunction_UPointCloudStatics_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudStatics_IsEnabled_Statics::NewProp_InPoint = { "InPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloudStatics_eventIsEnabled_Parms, InPoint), Z_Construct_UScriptStruct_FPointCloudPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudStatics_IsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_IsEnabled_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_IsEnabled_Statics::NewProp_InPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudStatics_IsEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/PointCloudStatics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudStatics_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudStatics, nullptr, "IsEnabled", sizeof(PointCloudStatics_eventIsEnabled_Parms), Z_Construct_UFunction_UPointCloudStatics_IsEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_IsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudStatics_IsEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_IsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloudStatics_IsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloudStatics_IsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudStatics_MakeEmptyPointCloud_Statics
	{
		struct PointCloudStatics_eventMakeEmptyPointCloud_Parms
		{
			UObject* WorldContextObject;
			UPointCloud* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudStatics_MakeEmptyPointCloud_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloudStatics_eventMakeEmptyPointCloud_Parms, ReturnValue), Z_Construct_UClass_UPointCloud_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudStatics_MakeEmptyPointCloud_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloudStatics_eventMakeEmptyPointCloud_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudStatics_MakeEmptyPointCloud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_MakeEmptyPointCloud_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_MakeEmptyPointCloud_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudStatics_MakeEmptyPointCloud_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/PointCloudStatics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudStatics_MakeEmptyPointCloud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudStatics, nullptr, "MakeEmptyPointCloud", sizeof(PointCloudStatics_eventMakeEmptyPointCloud_Parms), Z_Construct_UFunction_UPointCloudStatics_MakeEmptyPointCloud_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_MakeEmptyPointCloud_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudStatics_MakeEmptyPointCloud_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_MakeEmptyPointCloud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloudStatics_MakeEmptyPointCloud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloudStatics_MakeEmptyPointCloud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint_Statics
	{
		struct PointCloudStatics_eventMakePointCloudPoint_Parms
		{
			FVector Location;
			FColor Color;
			bool bEnabled;
			FPointCloudPoint ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloudStatics_eventMakePointCloudPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FPointCloudPoint, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((PointCloudStatics_eventMakePointCloudPoint_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PointCloudStatics_eventMakePointCloudPoint_Parms), &Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloudStatics_eventMakePointCloudPoint_Parms, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloudStatics_eventMakePointCloudPoint_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/PointCloudStatics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudStatics, nullptr, "MakePointCloudPoint", sizeof(PointCloudStatics_eventMakePointCloudPoint_Parms), Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudStatics_SetColor_Statics
	{
		struct PointCloudStatics_eventSetColor_Parms
		{
			FPointCloudPoint InPoint;
			FColor NewColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudStatics_SetColor_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloudStatics_eventSetColor_Parms, NewColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudStatics_SetColor_Statics::NewProp_InPoint = { "InPoint", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloudStatics_eventSetColor_Parms, InPoint), Z_Construct_UScriptStruct_FPointCloudPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudStatics_SetColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_SetColor_Statics::NewProp_NewColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_SetColor_Statics::NewProp_InPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudStatics_SetColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/PointCloudStatics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudStatics_SetColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudStatics, nullptr, "SetColor", sizeof(PointCloudStatics_eventSetColor_Parms), Z_Construct_UFunction_UPointCloudStatics_SetColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_SetColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudStatics_SetColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_SetColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloudStatics_SetColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloudStatics_SetColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudStatics_SetEnabled_Statics
	{
		struct PointCloudStatics_eventSetEnabled_Parms
		{
			FPointCloudPoint InPoint;
			bool NewEnabled;
		};
		static void NewProp_NewEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewEnabled;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPointCloudStatics_SetEnabled_Statics::NewProp_NewEnabled_SetBit(void* Obj)
	{
		((PointCloudStatics_eventSetEnabled_Parms*)Obj)->NewEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloudStatics_SetEnabled_Statics::NewProp_NewEnabled = { "NewEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PointCloudStatics_eventSetEnabled_Parms), &Z_Construct_UFunction_UPointCloudStatics_SetEnabled_Statics::NewProp_NewEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudStatics_SetEnabled_Statics::NewProp_InPoint = { "InPoint", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloudStatics_eventSetEnabled_Parms, InPoint), Z_Construct_UScriptStruct_FPointCloudPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudStatics_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_SetEnabled_Statics::NewProp_NewEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_SetEnabled_Statics::NewProp_InPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudStatics_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/PointCloudStatics.h" },
		{ "ToolTip", "Manually sets enabled state\nThis will also prevent reduction settings from changing the status" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudStatics_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudStatics, nullptr, "SetEnabled", sizeof(PointCloudStatics_eventSetEnabled_Parms), Z_Construct_UFunction_UPointCloudStatics_SetEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudStatics_SetEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloudStatics_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloudStatics_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudStatics_SetEnabledAuto_Statics
	{
		struct PointCloudStatics_eventSetEnabledAuto_Parms
		{
			FPointCloudPoint InPoint;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudStatics_SetEnabledAuto_Statics::NewProp_InPoint = { "InPoint", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloudStatics_eventSetEnabledAuto_Parms, InPoint), Z_Construct_UScriptStruct_FPointCloudPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudStatics_SetEnabledAuto_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_SetEnabledAuto_Statics::NewProp_InPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudStatics_SetEnabledAuto_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/PointCloudStatics.h" },
		{ "ToolTip", "This will restore automatic state selection when rebuilding" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudStatics_SetEnabledAuto_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudStatics, nullptr, "SetEnabledAuto", sizeof(PointCloudStatics_eventSetEnabledAuto_Parms), Z_Construct_UFunction_UPointCloudStatics_SetEnabledAuto_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_SetEnabledAuto_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudStatics_SetEnabledAuto_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_SetEnabledAuto_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloudStatics_SetEnabledAuto()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloudStatics_SetEnabledAuto_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudStatics_SetOriginalLocation_Statics
	{
		struct PointCloudStatics_eventSetOriginalLocation_Parms
		{
			FPointCloudPoint InPoint;
			FVector NewOriginalLocation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewOriginalLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudStatics_SetOriginalLocation_Statics::NewProp_NewOriginalLocation = { "NewOriginalLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloudStatics_eventSetOriginalLocation_Parms, NewOriginalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudStatics_SetOriginalLocation_Statics::NewProp_InPoint = { "InPoint", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloudStatics_eventSetOriginalLocation_Parms, InPoint), Z_Construct_UScriptStruct_FPointCloudPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudStatics_SetOriginalLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_SetOriginalLocation_Statics::NewProp_NewOriginalLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudStatics_SetOriginalLocation_Statics::NewProp_InPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudStatics_SetOriginalLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/PointCloudStatics.h" },
		{ "ToolTip", "Location prior to transformation applied" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudStatics_SetOriginalLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudStatics, nullptr, "SetOriginalLocation", sizeof(PointCloudStatics_eventSetOriginalLocation_Parms), Z_Construct_UFunction_UPointCloudStatics_SetOriginalLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_SetOriginalLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudStatics_SetOriginalLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudStatics_SetOriginalLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloudStatics_SetOriginalLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloudStatics_SetOriginalLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPointCloudStatics_NoRegister()
	{
		return UPointCloudStatics::StaticClass();
	}
	struct Z_Construct_UClass_UPointCloudStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPointCloudStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPointCloudStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPointCloudStatics_GetColor, "GetColor" }, // 4273891932
		{ &Z_Construct_UFunction_UPointCloudStatics_GetLocation, "GetLocation" }, // 3092427470
		{ &Z_Construct_UFunction_UPointCloudStatics_GetOriginalLocation, "GetOriginalLocation" }, // 3228127397
		{ &Z_Construct_UFunction_UPointCloudStatics_IsEnabled, "IsEnabled" }, // 394320860
		{ &Z_Construct_UFunction_UPointCloudStatics_MakeEmptyPointCloud, "MakeEmptyPointCloud" }, // 3285923362
		{ &Z_Construct_UFunction_UPointCloudStatics_MakePointCloudPoint, "MakePointCloudPoint" }, // 56231140
		{ &Z_Construct_UFunction_UPointCloudStatics_SetColor, "SetColor" }, // 1499760166
		{ &Z_Construct_UFunction_UPointCloudStatics_SetEnabled, "SetEnabled" }, // 569573999
		{ &Z_Construct_UFunction_UPointCloudStatics_SetEnabledAuto, "SetEnabledAuto" }, // 3959333155
		{ &Z_Construct_UFunction_UPointCloudStatics_SetOriginalLocation, "SetOriginalLocation" }, // 224686327
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudStatics_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PointCloudStatics.h" },
		{ "ModuleRelativePath", "Public/PointCloudStatics.h" },
		{ "ToolTip", "Provides convenient set of Blueprint exposed functions" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPointCloudStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointCloudStatics>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPointCloudStatics_Statics::ClassParams = {
		&UPointCloudStatics::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPointCloudStatics_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPointCloudStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPointCloudStatics()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPointCloudStatics_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPointCloudStatics, 3722681962);
	template<> POINTCLOUDRUNTIME_API UClass* StaticClass<UPointCloudStatics>()
	{
		return UPointCloudStatics::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPointCloudStatics(Z_Construct_UClass_UPointCloudStatics, &UPointCloudStatics::StaticClass, TEXT("/Script/PointCloudRuntime"), TEXT("UPointCloudStatics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPointCloudStatics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
