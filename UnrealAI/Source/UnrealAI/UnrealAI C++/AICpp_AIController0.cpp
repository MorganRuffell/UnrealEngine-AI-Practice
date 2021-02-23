// Fill out your copyright notice in the Description page of Project Settings.

#include "BehaviorTree/BehaviorTreeComponent.h"
#include "Engine.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "AICpp_Character.h"
#include "AICpp_NPC0.h"
#include "GameFramework/Actor.h"
#include "AICpp_AIController0.h"

AAICpp_AIController0::AAICpp_AIController0(FObjectInitializer const& objectIntializer)
{
	static ConstructorHelpers::FObjectFinder<UBehaviorTree> Obj(TEXT("BehaviorTree'/Game/AI/AI_02/AI_0/NPC0_BT.NPC0_BT'"));
	if (Obj.Succeeded())
	{
		Behaviour_tree = Obj.Object;
	}
	
	BehaviourTree_Component = objectIntializer.CreateDefaultSubobject<UBehaviorTreeComponent>(this,TEXT("AI0_BehaviourComp"));
	blackboardComponent = objectIntializer.CreateDefaultSubobject<UBlackboardComponent>(this, TEXT("AI0_BlackboardComp"));

}

AAICpp_AIController0::~AAICpp_AIController0()
{
}

void AAICpp_AIController0::BeginPlay()
{
	Super::BeginPlay();
	RunBehaviorTree(Behaviour_tree);
	BehaviourTree_Component->StartTree(*Behaviour_tree);
}


void AAICpp_AIController0::OnPossess(APawn* const InPawn)
{
	Super::OnPossess(InPawn);
	
	AAICpp_NPC0* Char = Cast<AAICpp_NPC0>(InPawn);

	if (Char && Char->AIBehaviourTreeSystem)
	{
		blackboardComponent->InitializeBlackboard(*Char->AIBehaviourTreeSystem->BlackboardAsset);
	
		EnemyKeyID = blackboardComponent->GetKeyID("TargetLocation");

		BehaviourTree_Component->StartTree(*Char->AIBehaviourTreeSystem);
	}


}

UBlackboardComponent* AAICpp_AIController0::get_blackboard() const
{
	return blackboardComponent;
}
