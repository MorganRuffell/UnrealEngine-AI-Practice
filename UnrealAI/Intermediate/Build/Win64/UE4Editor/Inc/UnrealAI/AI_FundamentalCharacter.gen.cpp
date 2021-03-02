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
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
// End Cross Module References
	static FName NAME_AAI_FundamentalCharacter_Sprint = FName(TEXT("Sprint"));
	void AAI_FundamentalCharacter::Sprint()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAI_FundamentalCharacter_Sprint),NULL);
	}
	static FName NAME_AAI_FundamentalCharacter_StopSprinting = FName(TEXT("StopSprinting"));
	void AAI_FundamentalCharacter::StopSprinting()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAI_FundamentalCharacter_StopSprinting),NULL);
	}
	static FName NAME_AAI_FundamentalCharacter_StopWalking = FName(TEXT("StopWalking"));
	void AAI_FundamentalCharacter::StopWalking()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAI_FundamentalCharacter_StopWalking),NULL);
	}
	static FName NAME_AAI_FundamentalCharacter_Walk = FName(TEXT("Walk"));
	void AAI_FundamentalCharacter::Walk()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAI_FundamentalCharacter_Walk),NULL);
	}
	void AAI_FundamentalCharacter::StaticRegisterNativesAAI_FundamentalCharacter()
	{
	}
	struct Z_Construct_UFunction_AAI_FundamentalCharacter_Sprint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAI_FundamentalCharacter_Sprint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UnrealAI Fundamentals/AI_FundamentalCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAI_FundamentalCharacter_Sprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI_FundamentalCharacter, nullptr, "Sprint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAI_FundamentalCharacter_Sprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_FundamentalCharacter_Sprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAI_FundamentalCharacter_Sprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAI_FundamentalCharacter_Sprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAI_FundamentalCharacter_StopSprinting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAI_FundamentalCharacter_StopSprinting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UnrealAI Fundamentals/AI_FundamentalCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAI_FundamentalCharacter_StopSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI_FundamentalCharacter, nullptr, "StopSprinting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAI_FundamentalCharacter_StopSprinting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_FundamentalCharacter_StopSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAI_FundamentalCharacter_StopSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAI_FundamentalCharacter_StopSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAI_FundamentalCharacter_StopWalking_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAI_FundamentalCharacter_StopWalking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UnrealAI Fundamentals/AI_FundamentalCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAI_FundamentalCharacter_StopWalking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI_FundamentalCharacter, nullptr, "StopWalking", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAI_FundamentalCharacter_StopWalking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_FundamentalCharacter_StopWalking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAI_FundamentalCharacter_StopWalking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAI_FundamentalCharacter_StopWalking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAI_FundamentalCharacter_Walk_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAI_FundamentalCharacter_Walk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UnrealAI Fundamentals/AI_FundamentalCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAI_FundamentalCharacter_Walk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI_FundamentalCharacter, nullptr, "Walk", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAI_FundamentalCharacter_Walk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_FundamentalCharacter_Walk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAI_FundamentalCharacter_Walk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAI_FundamentalCharacter_Walk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAI_FundamentalCharacter_NoRegister()
	{
		return AAI_FundamentalCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AAI_FundamentalCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlackboardComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAI_FundamentalCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealAI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAI_FundamentalCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAI_FundamentalCharacter_Sprint, "Sprint" }, // 968686062
		{ &Z_Construct_UFunction_AAI_FundamentalCharacter_StopSprinting, "StopSprinting" }, // 2857976219
		{ &Z_Construct_UFunction_AAI_FundamentalCharacter_StopWalking, "StopWalking" }, // 4050542404
		{ &Z_Construct_UFunction_AAI_FundamentalCharacter_Walk, "Walk" }, // 1879492538
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_FundamentalCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "UnrealAI Fundamentals/AI_FundamentalCharacter.h" },
		{ "ModuleRelativePath", "UnrealAI Fundamentals/AI_FundamentalCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_SphereRadius_MetaData[] = {
		{ "Category", "QueryCollision" },
		{ "ModuleRelativePath", "UnrealAI Fundamentals/AI_FundamentalCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_FundamentalCharacter, SphereRadius), METADATA_PARAMS(Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_SphereRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_SphereRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "UnrealAI Fundamentals/AI_FundamentalCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_FundamentalCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "UnrealAI Fundamentals/AI_FundamentalCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_FundamentalCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_CollisionSphere_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnrealAI Fundamentals/AI_FundamentalCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_CollisionSphere = { "CollisionSphere", nullptr, (EPropertyFlags)0x004000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_FundamentalCharacter, CollisionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_CollisionSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_CollisionSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnrealAI Fundamentals/AI_FundamentalCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_FundamentalCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnrealAI Fundamentals/AI_FundamentalCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_FundamentalCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_BlackboardComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ArtificalIntelligence" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnrealAI Fundamentals/AI_FundamentalCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_BlackboardComponent = { "BlackboardComponent", nullptr, (EPropertyFlags)0x004000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_FundamentalCharacter, BlackboardComponent), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_BlackboardComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_BlackboardComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAI_FundamentalCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_SphereRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_CollisionSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_FundamentalCharacter_Statics::NewProp_BlackboardComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAI_FundamentalCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI_FundamentalCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAI_FundamentalCharacter_Statics::ClassParams = {
		&AAI_FundamentalCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAI_FundamentalCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AAI_FundamentalCharacter, 4013602084);
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
