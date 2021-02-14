// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealAI/UnrealAI Fundamentals/AI_FundamentalController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_FundamentalController() {}
// Cross Module References
	UNREALAI_API UClass* Z_Construct_UClass_AAI_FundamentalController_NoRegister();
	UNREALAI_API UClass* Z_Construct_UClass_AAI_FundamentalController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_UnrealAI();
// End Cross Module References
	void AAI_FundamentalController::StaticRegisterNativesAAI_FundamentalController()
	{
	}
	UClass* Z_Construct_UClass_AAI_FundamentalController_NoRegister()
	{
		return AAI_FundamentalController::StaticClass();
	}
	struct Z_Construct_UClass_AAI_FundamentalController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAI_FundamentalController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealAI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_FundamentalController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UnrealAI Fundamentals/AI_FundamentalController.h" },
		{ "ModuleRelativePath", "UnrealAI Fundamentals/AI_FundamentalController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAI_FundamentalController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI_FundamentalController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAI_FundamentalController_Statics::ClassParams = {
		&AAI_FundamentalController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAI_FundamentalController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_FundamentalController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAI_FundamentalController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAI_FundamentalController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAI_FundamentalController, 3217139674);
	template<> UNREALAI_API UClass* StaticClass<AAI_FundamentalController>()
	{
		return AAI_FundamentalController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAI_FundamentalController(Z_Construct_UClass_AAI_FundamentalController, &AAI_FundamentalController::StaticClass, TEXT("/Script/UnrealAI"), TEXT("AAI_FundamentalController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAI_FundamentalController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
