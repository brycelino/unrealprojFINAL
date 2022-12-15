// Copyright Epic Games, Inc. All Rights Reserved.
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
#ifdef FPS_11_FPS_11Projectile_generated_h
#error "FPS_11Projectile.generated.h already included, missing '#pragma once' in FPS_11Projectile.h"
#endif
#define FPS_11_FPS_11Projectile_generated_h

#define FPS_11_Source_FPS_11_FPS_11Projectile_h_17_SPARSE_DATA
#define FPS_11_Source_FPS_11_FPS_11Projectile_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FPS_11_Source_FPS_11_FPS_11Projectile_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FPS_11_Source_FPS_11_FPS_11Projectile_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPS_11Projectile(); \
	friend struct Z_Construct_UClass_AFPS_11Projectile_Statics; \
public: \
	DECLARE_CLASS(AFPS_11Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS_11"), NO_API) \
	DECLARE_SERIALIZER(AFPS_11Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FPS_11_Source_FPS_11_FPS_11Projectile_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAFPS_11Projectile(); \
	friend struct Z_Construct_UClass_AFPS_11Projectile_Statics; \
public: \
	DECLARE_CLASS(AFPS_11Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS_11"), NO_API) \
	DECLARE_SERIALIZER(AFPS_11Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FPS_11_Source_FPS_11_FPS_11Projectile_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPS_11Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPS_11Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPS_11Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPS_11Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPS_11Projectile(AFPS_11Projectile&&); \
	NO_API AFPS_11Projectile(const AFPS_11Projectile&); \
public:


#define FPS_11_Source_FPS_11_FPS_11Projectile_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPS_11Projectile(AFPS_11Projectile&&); \
	NO_API AFPS_11Projectile(const AFPS_11Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPS_11Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPS_11Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPS_11Projectile)


#define FPS_11_Source_FPS_11_FPS_11Projectile_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AFPS_11Projectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AFPS_11Projectile, ProjectileMovement); }


#define FPS_11_Source_FPS_11_FPS_11Projectile_h_14_PROLOG
#define FPS_11_Source_FPS_11_FPS_11Projectile_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_11_Source_FPS_11_FPS_11Projectile_h_17_PRIVATE_PROPERTY_OFFSET \
	FPS_11_Source_FPS_11_FPS_11Projectile_h_17_SPARSE_DATA \
	FPS_11_Source_FPS_11_FPS_11Projectile_h_17_RPC_WRAPPERS \
	FPS_11_Source_FPS_11_FPS_11Projectile_h_17_INCLASS \
	FPS_11_Source_FPS_11_FPS_11Projectile_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_11_Source_FPS_11_FPS_11Projectile_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_11_Source_FPS_11_FPS_11Projectile_h_17_PRIVATE_PROPERTY_OFFSET \
	FPS_11_Source_FPS_11_FPS_11Projectile_h_17_SPARSE_DATA \
	FPS_11_Source_FPS_11_FPS_11Projectile_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_11_Source_FPS_11_FPS_11Projectile_h_17_INCLASS_NO_PURE_DECLS \
	FPS_11_Source_FPS_11_FPS_11Projectile_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_11_API UClass* StaticClass<class AFPS_11Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_11_Source_FPS_11_FPS_11Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
