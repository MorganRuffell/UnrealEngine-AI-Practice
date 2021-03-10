// Fill out your copyright notice in the Description page of Project Settings.

#include "BTService_CheckForPlayer.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AICpp_NPC0.h"
#include "AICpp_AIController0.h"
#include "UnrealAI/UnrealAICharacter.h"

UBTService_CheckForPlayer::UBTService_CheckForPlayer()
{
;	bCreateNodeInstance = true;
}

//In this tick node
void UBTService_CheckForPlayer::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	AAICpp_AIController0* EnemyPlayerController = Cast<AAICpp_AIController0>(OwnerComp.GetAIOwner());
	
	if (EnemyPlayerController != nullptr)
	{
		AUnrealAICharacter* enemy = Cast<AUnrealAICharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
			
		if (enemy)
		{
			OwnerComp.GetBlackboardComponent()->SetValue<UBlackboardKeyType_Object>(EnemyPlayerController->EnemyKeyID, enemy);
			GEngine->AddOnScreenDebugMessage(-1,2.0f,FColor::Blue, "There is an Enemy here...");
		}
	}
}
