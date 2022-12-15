// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS_11/FPS_11GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPS_11GameMode() {}
// Cross Module References
	FPS_11_API UClass* Z_Construct_UClass_AFPS_11GameMode_NoRegister();
	FPS_11_API UClass* Z_Construct_UClass_AFPS_11GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FPS_11();
// End Cross Module References
	void AFPS_11GameMode::StaticRegisterNativesAFPS_11GameMode()
	{
	}
	UClass* Z_Construct_UClass_AFPS_11GameMode_NoRegister()
	{
		return AFPS_11GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFPS_11GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPS_11GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS_11,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_11GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FPS_11GameMode.h" },
		{ "ModuleRelativePath", "FPS_11GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPS_11GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPS_11GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPS_11GameMode_Statics::ClassParams = {
		&AFPS_11GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFPS_11GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_11GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPS_11GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPS_11GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPS_11GameMode, 1516758097);
	template<> FPS_11_API UClass* StaticClass<AFPS_11GameMode>()
	{
		return AFPS_11GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPS_11GameMode(Z_Construct_UClass_AFPS_11GameMode, &AFPS_11GameMode::StaticClass, TEXT("/Script/FPS_11"), TEXT("AFPS_11GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPS_11GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
