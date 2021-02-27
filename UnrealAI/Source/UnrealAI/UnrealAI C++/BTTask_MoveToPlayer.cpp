// Fill out your copyright notice in the Description page of Project Settings.

#include "BTTask_MoveToPlayer.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Object.h"
#include "UnrealAI/UnrealAICharacter.h"

EBTNodeResult::Type UBTTask_MoveToPlayer::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAICpp_AIController0* EnemyAI = Cast<AAICpp_AIController0>(OwnerComp.GetAIOwner());

	AUnrealAICharacter* _Enemy = Cast<AUnrealAICharacter>(OwnerComp.GetBlackboardComponent()->GetValue<UBlackboardKeyType_Object>(EnemyAI->EnemyKeyID));

	if (_Enemy)
	{
		EnemyAI->MoveToActor(_Enemy, 5.0f, true, true, true, 0, true);
		return EBTNodeResult::Succeeded;
	}
	else
	{
		return EBTNodeResult::Failed;
	}
	
	return EBTNodeResult::Failed;

}