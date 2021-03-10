// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealAI/UnrealAI C++/BTService_CheckForPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_CheckForPlayer() {}
// Cross Module References
	UNREALAI_API UClass* Z_Construct_UClass_UBTService_CheckForPlayer_NoRegister();
	UNREALAI_API UClass* Z_Construct_UClass_UBTService_CheckForPlayer();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_UnrealAI();
// End Cross Module References
	void UBTService_CheckForPlayer::StaticRegisterNativesUBTService_CheckForPlayer()
	{
	}
	UClass* Z_Construct_UClass_UBTService_CheckForPlayer_NoRegister()
	{
		return UBTService_CheckForPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_CheckForPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_CheckForPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealAI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_CheckForPlayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UnrealAI C++/BTService_CheckForPlayer.h" },
		{ "ModuleRelativePath", "UnrealAI C++/BTService_CheckForPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_CheckForPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_CheckForPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTService_CheckForPlayer_Statics::ClassParams = {
		&UBTService_CheckForPlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTService_CheckForPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_CheckForPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_CheckForPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTService_CheckForPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_CheckForPlayer, 1216664513);
	template<> UNREALAI_API UClass* StaticClass<UBTService_CheckForPlayer>()
	{
		return UBTService_CheckForPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_CheckForPlayer(Z_Construct_UClass_UBTService_CheckForPlayer, &UBTService_CheckForPlayer::StaticClass, TEXT("/Script/UnrealAI"), TEXT("UBTService_CheckForPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_CheckForPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
