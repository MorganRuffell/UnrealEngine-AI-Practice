// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealAI/UnrealAI Fundamentals/AI_FundamentalCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_FundamentalCharacter() {}
// Cross Module References
	UNREALAI_API UClass* Z_Construct_UClass_AAI_FundamentalCharacter_NoRegister();
	UNREALAI_API UClass* Z_Construct_UClass_AAI_FundamentalCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_UnrealAI();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void AAI_FundamentalCharacter::StaticRegisterNativesAAI_FundamentalCharacter()
	{
	}
	UClass* Z_Construct_UClass_AAI_FundamentalCharacter_NoRegister()
	{
		return AAI_FundamentalCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AAI_FundamentalCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionSphere;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAI_FundamentalCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealAI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_FundamentalCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "UnrealAI Fundamentals/AI_FundamentalCharacter.h" },
		{ "ModuleRelativePath", "UnrealAI Fundamentals/AI_FundamentalCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_CollisionSphere_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnrealAI Fundamentals/AI_FundamentalCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_CollisionSphere = { "CollisionSphere", nullptr, (EPropertyFlags)0x004000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_FundamentalCharacter, CollisionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_CollisionSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_CollisionSphere_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAI_FundamentalCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_CollisionSphere,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAI_FundamentalCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI_FundamentalCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAI_FundamentalCharacter_Statics::ClassParams = {
		&AAI_FundamentalCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAI_FundamentalCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAI_FundamentalCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAI_FundamentalCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_FundamentalCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAI_FundamentalCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAI_FundamentalCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAI_FundamentalCharacter, 2989219080);
	template<> UNREALAI_API UClass* StaticClass<AAI_FundamentalCharacter>()
	{
		return AAI_FundamentalCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAI_FundamentalCharacter(Z_Construct_UClass_AAI_FundamentalCharacter, &AAI_FundamentalCharacter::StaticClass, TEXT("/Script/UnrealAI"), TEXT("AAI_FundamentalCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAI_FundamentalCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
