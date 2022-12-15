// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_11_FPS_11Character_generated_h
#error "FPS_11Character.generated.h already included, missing '#pragma once' in FPS_11Character.h"
#endif
#define FPS_11_FPS_11Character_generated_h

#define FPS_11_Source_FPS_11_FPS_11Character_h_20_SPARSE_DATA
#define FPS_11_Source_FPS_11_FPS_11Character_h_20_RPC_WRAPPERS
#define FPS_11_Source_FPS_11_FPS_11Character_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define FPS_11_Source_FPS_11_FPS_11Character_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPS_11Character(); \
	friend struct Z_Construct_UClass_AFPS_11Character_Statics; \
public: \
	DECLARE_CLASS(AFPS_11Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS_11"), NO_API) \
	DECLARE_SERIALIZER(AFPS_11Character)


#define FPS_11_Source_FPS_11_FPS_11Character_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAFPS_11Character(); \
	friend struct Z_Construct_UClass_AFPS_11Character_Statics; \
public: \
	DECLARE_CLASS(AFPS_11Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS_11"), NO_API) \
	DECLARE_SERIALIZER(AFPS_11Character)


#define FPS_11_Source_FPS_11_FPS_11Character_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPS_11Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPS_11Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPS_11Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPS_11Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPS_11Character(AFPS_11Character&&); \
	NO_API AFPS_11Character(const AFPS_11Character&); \
public:


#define FPS_11_Source_FPS_11_FPS_11Character_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPS_11Character(AFPS_11Character&&); \
	NO_API AFPS_11Character(const AFPS_11Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPS_11Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPS_11Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPS_11Character)


#define FPS_11_Source_FPS_11_FPS_11Character_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AFPS_11Character, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AFPS_11Character, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AFPS_11Character, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AFPS_11Character, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AFPS_11Character, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AFPS_11Character, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AFPS_11Character, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AFPS_11Character, L_MotionController); } \
	FORCEINLINE static uint32 __PPO__Sensor() { return STRUCT_OFFSET(AFPS_11Character, Sensor); } \
	FORCEINLINE static uint32 __PPO__lineDistance() { return STRUCT_OFFSET(AFPS_11Character, lineDistance); } \
	FORCEINLINE static uint32 __PPO__lineColor() { return STRUCT_OFFSET(AFPS_11Character, lineColor); } \
	FORCEINLINE static uint32 __PPO__threshold() { return STRUCT_OFFSET(AFPS_11Character, threshold); }


#define FPS_11_Source_FPS_11_FPS_11Character_h_17_PROLOG
#define FPS_11_Source_FPS_11_FPS_11Character_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_11_Source_FPS_11_FPS_11Character_h_20_PRIVATE_PROPERTY_OFFSET \
	FPS_11_Source_FPS_11_FPS_11Character_h_20_SPARSE_DATA \
	FPS_11_Source_FPS_11_FPS_11Character_h_20_RPC_WRAPPERS \
	FPS_11_Source_FPS_11_FPS_11Character_h_20_INCLASS \
	FPS_11_Source_FPS_11_FPS_11Character_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_11_Source_FPS_11_FPS_11Character_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_11_Source_FPS_11_FPS_11Character_h_20_PRIVATE_PROPERTY_OFFSET \
	FPS_11_Source_FPS_11_FPS_11Character_h_20_SPARSE_DATA \
	FPS_11_Source_FPS_11_FPS_11Character_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_11_Source_FPS_11_FPS_11Character_h_20_INCLASS_NO_PURE_DECLS \
	FPS_11_Source_FPS_11_FPS_11Character_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_11_API UClass* StaticClass<class AFPS_11Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_11_Source_FPS_11_FPS_11Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
