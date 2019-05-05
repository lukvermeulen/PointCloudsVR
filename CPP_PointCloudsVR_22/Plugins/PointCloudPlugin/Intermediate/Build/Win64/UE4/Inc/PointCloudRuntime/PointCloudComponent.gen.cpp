// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudRuntime/Public/PointCloudComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointCloudComponent() {}
// Cross Module References
	POINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_UPointCloudPluginComponent_NoRegister();
	POINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_UPointCloudPluginComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	UPackage* Z_Construct_UPackage__Script_PointCloudRuntime();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloudPluginComponent_GetPointCloud();
	POINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_UPointCloud_NoRegister();
	POINTCLOUDRUNTIME_API UFunction* Z_Construct_UFunction_UPointCloudPluginComponent_SetPointCloud();
// End Cross Module References
	void UPointCloudPluginComponent::StaticRegisterNativesUPointCloudPluginComponent()
	{
		UClass* Class = UPointCloudPluginComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPointCloud", &UPointCloudPluginComponent::execGetPointCloud },
			{ "SetPointCloud", &UPointCloudPluginComponent::execSetPointCloud },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPointCloudPluginComponent_GetPointCloud_Statics
	{
		struct PointCloudPluginComponent_eventGetPointCloud_Parms
		{
			UPointCloud* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudPluginComponent_GetPointCloud_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloudPluginComponent_eventGetPointCloud_Parms, ReturnValue), Z_Construct_UClass_UPointCloud_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudPluginComponent_GetPointCloud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudPluginComponent_GetPointCloud_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudPluginComponent_GetPointCloud_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|PointCloud" },
		{ "ModuleRelativePath", "Public/PointCloudComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudPluginComponent_GetPointCloud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudPluginComponent, nullptr, "GetPointCloud", sizeof(PointCloudPluginComponent_eventGetPointCloud_Parms), Z_Construct_UFunction_UPointCloudPluginComponent_GetPointCloud_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudPluginComponent_GetPointCloud_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudPluginComponent_GetPointCloud_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudPluginComponent_GetPointCloud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloudPluginComponent_GetPointCloud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloudPluginComponent_GetPointCloud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudPluginComponent_SetPointCloud_Statics
	{
		struct PointCloudPluginComponent_eventSetPointCloud_Parms
		{
			UPointCloud* InPointCloud;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPointCloud;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudPluginComponent_SetPointCloud_Statics::NewProp_InPointCloud = { "InPointCloud", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloudPluginComponent_eventSetPointCloud_Parms, InPointCloud), Z_Construct_UClass_UPointCloud_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudPluginComponent_SetPointCloud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudPluginComponent_SetPointCloud_Statics::NewProp_InPointCloud,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudPluginComponent_SetPointCloud_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|PointCloud" },
		{ "ModuleRelativePath", "Public/PointCloudComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudPluginComponent_SetPointCloud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudPluginComponent, nullptr, "SetPointCloud", sizeof(PointCloudPluginComponent_eventSetPointCloud_Parms), Z_Construct_UFunction_UPointCloudPluginComponent_SetPointCloud_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudPluginComponent_SetPointCloud_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudPluginComponent_SetPointCloud_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPointCloudPluginComponent_SetPointCloud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloudPluginComponent_SetPointCloud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointCloudPluginComponent_SetPointCloud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPointCloudPluginComponent_NoRegister()
	{
		return UPointCloudPluginComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPointCloudPluginComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointCloud_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PointCloud;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPointCloudPluginComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPointCloudPluginComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPointCloudPluginComponent_GetPointCloud, "GetPointCloud" }, // 874562941
		{ &Z_Construct_UFunction_UPointCloudPluginComponent_SetPointCloud, "SetPointCloud" }, // 564872932
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudPluginComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "HideCategories", "Object LOD Physics Collision Materials Mobility Trigger" },
		{ "IncludePath", "PointCloudComponent.h" },
		{ "ModuleRelativePath", "Public/PointCloudComponent.h" },
		{ "ToolTip", "Component that allows you to render specified point cloud section" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudPluginComponent_Statics::NewProp_PointCloud_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/PointCloudComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPointCloudPluginComponent_Statics::NewProp_PointCloud = { "PointCloud", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointCloudPluginComponent, PointCloud), Z_Construct_UClass_UPointCloud_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPointCloudPluginComponent_Statics::NewProp_PointCloud_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPointCloudPluginComponent_Statics::NewProp_PointCloud_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPointCloudPluginComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudPluginComponent_Statics::NewProp_PointCloud,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPointCloudPluginComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointCloudPluginComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPointCloudPluginComponent_Statics::ClassParams = {
		&UPointCloudPluginComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPointCloudPluginComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UPointCloudPluginComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPointCloudPluginComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPointCloudPluginComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPointCloudPluginComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPointCloudPluginComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPointCloudPluginComponent, 2129511313);
	template<> POINTCLOUDRUNTIME_API UClass* StaticClass<UPointCloudPluginComponent>()
	{
		return UPointCloudPluginComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPointCloudPluginComponent(Z_Construct_UClass_UPointCloudPluginComponent, &UPointCloudPluginComponent::StaticClass, TEXT("/Script/PointCloudRuntime"), TEXT("UPointCloudPluginComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPointCloudPluginComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
