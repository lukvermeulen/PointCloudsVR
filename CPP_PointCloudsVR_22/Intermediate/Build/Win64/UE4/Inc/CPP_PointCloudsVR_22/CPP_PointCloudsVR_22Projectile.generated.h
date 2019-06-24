// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef CPP_POINTCLOUDSVR_22_CPP_PointCloudsVR_22Projectile_generated_h
#error "CPP_PointCloudsVR_22Projectile.generated.h already included, missing '#pragma once' in CPP_PointCloudsVR_22Projectile.h"
#endif
#define CPP_POINTCLOUDSVR_22_CPP_PointCloudsVR_22Projectile_generated_h

#define CPP_PointCloudsVR_22_Source_CPP_PointCloudsVR_22_CPP_PointCloudsVR_22Projectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define CPP_PointCloudsVR_22_Source_CPP_PointCloudsVR_22_CPP_PointCloudsVR_22Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define CPP_PointCloudsVR_22_Source_CPP_PointCloudsVR_22_CPP_PointCloudsVR_22Projectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPP_PointCloudsVR_22Projectile(); \
	friend struct Z_Construct_UClass_ACPP_PointCloudsVR_22Projectile_Statics; \
public: \
	DECLARE_CLASS(ACPP_PointCloudsVR_22Projectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CPP_PointCloudsVR_22"), NO_API) \
	DECLARE_SERIALIZER(ACPP_PointCloudsVR_22Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define CPP_PointCloudsVR_22_Source_CPP_PointCloudsVR_22_CPP_PointCloudsVR_22Projectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACPP_PointCloudsVR_22Projectile(); \
	friend struct Z_Construct_UClass_ACPP_PointCloudsVR_22Projectile_Statics; \
public: \
	DECLARE_CLASS(ACPP_PointCloudsVR_22Projectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CPP_PointCloudsVR_22"), NO_API) \
	DECLARE_SERIALIZER(ACPP_PointCloudsVR_22Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define CPP_PointCloudsVR_22_Source_CPP_PointCloudsVR_22_CPP_PointCloudsVR_22Projectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPP_PointCloudsVR_22Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPP_PointCloudsVR_22Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPP_PointCloudsVR_22Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPP_PointCloudsVR_22Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPP_PointCloudsVR_22Projectile(ACPP_PointCloudsVR_22Projectile&&); \
	NO_API ACPP_PointCloudsVR_22Projectile(const ACPP_PointCloudsVR_22Projectile&); \
public:


#define CPP_PointCloudsVR_22_Source_CPP_PointCloudsVR_22_CPP_PointCloudsVR_22Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPP_PointCloudsVR_22Projectile(ACPP_PointCloudsVR_22Projectile&&); \
	NO_API ACPP_PointCloudsVR_22Projectile(const ACPP_PointCloudsVR_22Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPP_PointCloudsVR_22Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPP_PointCloudsVR_22Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPP_PointCloudsVR_22Projectile)


#define CPP_PointCloudsVR_22_Source_CPP_PointCloudsVR_22_CPP_PointCloudsVR_22Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ACPP_PointCloudsVR_22Projectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ACPP_PointCloudsVR_22Projectile, ProjectileMovement); }


#define CPP_PointCloudsVR_22_Source_CPP_PointCloudsVR_22_CPP_PointCloudsVR_22Projectile_h_9_PROLOG
#define CPP_PointCloudsVR_22_Source_CPP_PointCloudsVR_22_CPP_PointCloudsVR_22Projectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPP_PointCloudsVR_22_Source_CPP_PointCloudsVR_22_CPP_PointCloudsVR_22Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	CPP_PointCloudsVR_22_Source_CPP_PointCloudsVR_22_CPP_PointCloudsVR_22Projectile_h_12_RPC_WRAPPERS \
	CPP_PointCloudsVR_22_Source_CPP_PointCloudsVR_22_CPP_PointCloudsVR_22Projectile_h_12_INCLASS \
	CPP_PointCloudsVR_22_Source_CPP_PointCloudsVR_22_CPP_PointCloudsVR_22Projectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CPP_PointCloudsVR_22_Source_CPP_PointCloudsVR_22_CPP_PointCloudsVR_22Projectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPP_PointCloudsVR_22_Source_CPP_PointCloudsVR_22_CPP_PointCloudsVR_22Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	CPP_PointCloudsVR_22_Source_CPP_PointCloudsVR_22_CPP_PointCloudsVR_22Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CPP_PointCloudsVR_22_Source_CPP_PointCloudsVR_22_CPP_PointCloudsVR_22Projectile_h_12_INCLASS_NO_PURE_DECLS \
	CPP_PointCloudsVR_22_Source_CPP_PointCloudsVR_22_CPP_PointCloudsVR_22Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_POINTCLOUDSVR_22_API UClass* StaticClass<class ACPP_PointCloudsVR_22Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CPP_PointCloudsVR_22_Source_CPP_PointCloudsVR_22_CPP_PointCloudsVR_22Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
