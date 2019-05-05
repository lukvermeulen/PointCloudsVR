// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POINTCLOUDRUNTIME_PointCloudShared_generated_h
#error "PointCloudShared.generated.h already included, missing '#pragma once' in PointCloudShared.h"
#endif
#define POINTCLOUDRUNTIME_PointCloudShared_generated_h

#define Users_micha_Downloads_PCP_Binaries_4_22_PointCloudPlugin_HostProject_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudShared_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPointCloudPoint_Statics; \
	static class UScriptStruct* StaticStruct();


template<> POINTCLOUDRUNTIME_API UScriptStruct* StaticStruct<struct FPointCloudPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Users_micha_Downloads_PCP_Binaries_4_22_PointCloudPlugin_HostProject_Plugins_PointCloudPlugin_Source_PointCloudRuntime_Public_PointCloudShared_h


#define FOREACH_ENUM_EPOINTCLOUDCOLORMODE(op) \
	op(EPointCloudColorMode::None) \
	op(EPointCloudColorMode::Intensity) \
	op(EPointCloudColorMode::RGB) 

enum class EPointCloudColorMode : uint8;
template<> POINTCLOUDRUNTIME_API UEnum* StaticEnum<EPointCloudColorMode>();

#define FOREACH_ENUM_EPOINTCLOUDOFFSET(op) \
	op(EPointCloudOffset::None) \
	op(EPointCloudOffset::Center) \
	op(EPointCloudOffset::FirstPoint) 

enum class EPointCloudOffset : uint8;
template<> POINTCLOUDRUNTIME_API UEnum* StaticEnum<EPointCloudOffset>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
