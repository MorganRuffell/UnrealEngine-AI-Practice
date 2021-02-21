// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BehaviorTree/BlackboardComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationSystem.h"
#include "AICpp_AIController0.h"
//#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Vector.h"
#include "AICpp_blackboardKeys.h"
#include "BTTask_FindRandomLocation.h"

UBTTask_FindRandomLocation::UBTTask_FindRandomLocation(FObjectInitializer const& object_intializer)
{
	
	NodeName = TEXT("FindRandomLocation");
}

EBTNodeResult::Type UBTTask_FindRandomLocation::ExecuteTask(UBehaviorTreeComponent& owner_comp, uint8* node_memory)
{
	//Get AI Controller, and it's NPC.
	auto const controller = Cast<AAICpp_AIController0>(owner_comp.GetAIOwner()); 
	auto const NPC = controller->GetPawn();

	//Obtain NPC location to use as an origin location
	FVector const origin = NPC->GetActorLocation();
	
	//Create a location on the NavMesh called Random Location
	FNavLocation RandomLocation;

	//Get the navigation system and generate a random location on the NavMesh.
	UNavigationSystemV1* const navigationSystem = UNavigationSystemV1::GetCurrent(GetWorld());


	if (navigationSystem->GetRandomPointInNavigableRadius(origin, SearchRadius, RandomLocation, 0,0))
	{
		controller->get_blackboard()->SetValueAsVector(bb_Keys::TargetLocation, RandomLocation.Location);
	}

	//Finish with success
	//FinishLatentTask(owner_comp, EBTNodeResult::Succeeded);
	
	FinishLatentTask(owner_comp, EBTNodeResult::Succeeded);
	

	return EBTNodeResult::Succeeded;
}
