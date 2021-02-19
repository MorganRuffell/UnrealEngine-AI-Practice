// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealAI/UnrealAI C++/AICpp_AIController0.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAICpp_AIController0() {}
// Cross Module References
	UNREALAI_API UClass* Z_Construct_UClass_AAICpp_AIController0_NoRegister();
	UNREALAI_API UClass* Z_Construct_UClass_AAICpp_AIController0();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_UnrealAI();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
// End Cross Module References
	void AAICpp_AIController0::StaticRegisterNativesAAICpp_AIController0()
	{
	}
	UClass* Z_Construct_UClass_AAICpp_AIController0_NoRegister()
	{
		return AAICpp_AIController0::StaticClass();
	}
	struct Z_Construct_UClass_AAICpp_AIController0_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_blackboardComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_blackboardComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Behaviour_tree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Behaviour_tree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Behaviour_treeComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Behaviour_treeComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAICpp_AIController0_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealAI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICpp_AIController0_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UnrealAI C++/AICpp_AIController0.h" },
		{ "ModuleRelativePath", "UnrealAI C++/AICpp_AIController0.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICpp_AIController0_Statics::NewProp_blackboardComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnrealAI C++/AICpp_AIController0.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAICpp_AIController0_Statics::NewProp_blackboardComponent = { "blackboardComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAICpp_AIController0, blackboardComponent), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAICpp_AIController0_Statics::NewProp_blackboardComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAICpp_AIController0_Statics::NewProp_blackboardComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICpp_AIController0_Statics::NewProp_Behaviour_tree_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Artifical Intelligence" },
		{ "ModuleRelativePath", "UnrealAI C++/AICpp_AIController0.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAICpp_AIController0_Statics::NewProp_Behaviour_tree = { "Behaviour_tree", nullptr, (EPropertyFlags)0x0040000000000805, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAICpp_AIController0, Behaviour_tree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAICpp_AIController0_Statics::NewProp_Behaviour_tree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAICpp_AIController0_Statics::NewProp_Behaviour_tree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICpp_AIController0_Statics::NewProp_Behaviour_treeComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Artifical Intelligence" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnrealAI C++/AICpp_AIController0.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAICpp_AIController0_Statics::NewProp_Behaviour_treeComponent = { "Behaviour_treeComponent", nullptr, (EPropertyFlags)0x004000000008080d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAICpp_AIController0, Behaviour_treeComponent), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAICpp_AIController0_Statics::NewProp_Behaviour_treeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAICpp_AIController0_Statics::NewProp_Behaviour_treeComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAICpp_AIController0_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICpp_AIController0_Statics::NewProp_blackboardComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICpp_AIController0_Statics::NewProp_Behaviour_tree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICpp_AIController0_Statics::NewProp_Behaviour_treeComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAICpp_AIController0_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAICpp_AIController0>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAICpp_AIController0_Statics::ClassParams = {
		&AAICpp_AIController0::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAICpp_AIController0_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAICpp_AIController0_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAICpp_AIController0_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAICpp_AIController0_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAICpp_AIController0()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAICpp_AIController0_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAICpp_AIController0, 4047738559);
	template<> UNREALAI_API UClass* StaticClass<AAICpp_AIController0>()
	{
		return AAICpp_AIController0::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAICpp_AIController0(Z_Construct_UClass_AAICpp_AIController0, &AAICpp_AIController0::StaticClass, TEXT("/Script/UnrealAI"), TEXT("AAICpp_AIController0"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAICpp_AIController0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
