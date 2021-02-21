// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealAI/UnrealAI C++/BTTask_FindRandomLocation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_FindRandomLocation() {}
// Cross Module References
	UNREALAI_API UClass* Z_Construct_UClass_UBTTask_FindRandomLocation_NoRegister();
	UNREALAI_API UClass* Z_Construct_UClass_UBTTask_FindRandomLocation();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_UnrealAI();
// End Cross Module References
	void UBTTask_FindRandomLocation::StaticRegisterNativesUBTTask_FindRandomLocation()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_FindRandomLocation_NoRegister()
	{
		return UBTTask_FindRandomLocation::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_FindRandomLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SearchRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealAI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//It is imperative that if you want to improve as a programmer you understand this change in working with AI in unreal engine.\n" },
		{ "IncludePath", "UnrealAI C++/BTTask_FindRandomLocation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UnrealAI C++/BTTask_FindRandomLocation.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "It is imperative that if you want to improve as a programmer you understand this change in working with AI in unreal engine." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::NewProp_SearchRadius_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Search" },
		{ "ModuleRelativePath", "UnrealAI C++/BTTask_FindRandomLocation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::NewProp_SearchRadius = { "SearchRadius", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_FindRandomLocation, SearchRadius), METADATA_PARAMS(Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::NewProp_SearchRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::NewProp_SearchRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::NewProp_SearchRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_FindRandomLocation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::ClassParams = {
		&UBTTask_FindRandomLocation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_FindRandomLocation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_FindRandomLocation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_FindRandomLocation, 1982503251);
	template<> UNREALAI_API UClass* StaticClass<UBTTask_FindRandomLocation>()
	{
		return UBTTask_FindRandomLocation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_FindRandomLocation(Z_Construct_UClass_UBTTask_FindRandomLocation, &UBTTask_FindRandomLocation::StaticClass, TEXT("/Script/UnrealAI"), TEXT("UBTTask_FindRandomLocation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_FindRandomLocation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
