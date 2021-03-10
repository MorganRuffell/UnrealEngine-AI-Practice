// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "CharacterMovementModes.generated.h"

/**
 * 
 */
UCLASS()
class UNREALAI_API UCharacterMovementModes : public UUserDefinedEnum
{
	GENERATED_BODY()
	
public:
	UCharacterMovementModes();
	~UCharacterMovementModes();

};
