// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "AICpp_blackboardKeys.h"
//#include "GameFramework/Pawn.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "UObject/UObjectGlobals.h"
#include "BTTask_FindRandomLocation.generated.h"

/**
 * 
 */

//The base class for all Behaviour tree tasks is UBTTask_BlackboardBase.
//
//The difference between this class and the one BP inherits from is the fact that this one does not contain
//OnExecute as a BlueprintImplementatble Event. 

//It is imperative that if you want to improve as a programmer you understand this change in working with AI in unreal engine.

UCLASS(Blueprintable)
class UNREALAI_API UBTTask_FindRandomLocation : public UBTTask_BlackboardBase
{
	GENERATED_BODY()

public:
	
	UBTTask_FindRandomLocation(FObjectInitializer const& object_intializer);

	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& owner_comp, uint8* node_memory) ;

private:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Search", meta = (AllowPrivateAccess = "true"))
	float SearchRadius = 1500.0f;
	

};
