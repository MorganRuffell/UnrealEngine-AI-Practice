// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealAI/UnrealAI C++/AICpp_NPC0.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAICpp_NPC0() {}
// Cross Module References
	UNREALAI_API UClass* Z_Construct_UClass_AAICpp_NPC0_NoRegister();
	UNREALAI_API UClass* Z_Construct_UClass_AAICpp_NPC0();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_UnrealAI();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void AAICpp_NPC0::StaticRegisterNativesAAICpp_NPC0()
	{
	}
	UClass* Z_Construct_UClass_AAICpp_NPC0_NoRegister()
	{
		return AAICpp_NPC0::StaticClass();
	}
	struct Z_Construct_UClass_AAICpp_NPC0_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyCollisionSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnemyCollisionSphere;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAICpp_NPC0_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealAI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICpp_NPC0_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "UnrealAI C++/AICpp_NPC0.h" },
		{ "ModuleRelativePath", "UnrealAI C++/AICpp_NPC0.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICpp_NPC0_Statics::NewProp_EnemyCollisionSphere_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CollectionSphere" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnrealAI C++/AICpp_NPC0.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAICpp_NPC0_Statics::NewProp_EnemyCollisionSphere = { "EnemyCollisionSphere", nullptr, (EPropertyFlags)0x004000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAICpp_NPC0, EnemyCollisionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAICpp_NPC0_Statics::NewProp_EnemyCollisionSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAICpp_NPC0_Statics::NewProp_EnemyCollisionSphere_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAICpp_NPC0_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICpp_NPC0_Statics::NewProp_EnemyCollisionSphere,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAICpp_NPC0_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAICpp_NPC0>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAICpp_NPC0_Statics::ClassParams = {
		&AAICpp_NPC0::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAICpp_NPC0_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAICpp_NPC0_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAICpp_NPC0_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAICpp_NPC0_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAICpp_NPC0()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAICpp_NPC0_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAICpp_NPC0, 2694424712);
	template<> UNREALAI_API UClass* StaticClass<AAICpp_NPC0>()
	{
		return AAICpp_NPC0::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAICpp_NPC0(Z_Construct_UClass_AAICpp_NPC0, &AAICpp_NPC0::StaticClass, TEXT("/Script/UnrealAI"), TEXT("AAICpp_NPC0"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAICpp_NPC0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
