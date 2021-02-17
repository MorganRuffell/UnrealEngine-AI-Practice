// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AI_FundamentalController.generated.h"

UCLASS()
class UNREALAI_API AAI_FundamentalController : public AAIController
{
	GENERATED_BODY()
	
	/** blackboard */
	UPROPERTY(BlueprintReadOnly, Category = AI, meta = (AllowPrivateAccess = "true"))
	UBlackboardComponent* CurrentBlackboard;


public:

	//Base Methods
	AAI_FundamentalController();
	~AAI_FundamentalController();
	
};
