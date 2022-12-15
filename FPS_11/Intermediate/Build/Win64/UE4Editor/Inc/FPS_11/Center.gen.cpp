// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS_11/Center.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCenter() {}
// Cross Module References
	FPS_11_API UClass* Z_Construct_UClass_ACenter_NoRegister();
	FPS_11_API UClass* Z_Construct_UClass_ACenter();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPS_11();
// End Cross Module References
	void ACenter::StaticRegisterNativesACenter()
	{
	}
	UClass* Z_Construct_UClass_ACenter_NoRegister()
	{
		return ACenter::StaticClass();
	}
	struct Z_Construct_UClass_ACenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS_11,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACenter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Center.h" },
		{ "ModuleRelativePath", "Center.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACenter_Statics::ClassParams = {
		&ACenter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACenter, 1019590718);
	template<> FPS_11_API UClass* StaticClass<ACenter>()
	{
		return ACenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACenter(Z_Construct_UClass_ACenter, &ACenter::StaticClass, TEXT("/Script/FPS_11"), TEXT("ACenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
