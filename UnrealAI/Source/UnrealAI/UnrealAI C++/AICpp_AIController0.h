// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"
#include "AICpp_AIController0.generated.h"

/**
 * 
 */
UCLASS()
class UNREALAI_API AAICpp_AIController0 : public AAIController
{
	GENERATED_BODY()

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Artifical Intelligence")
	class UBehaviorTreeComponent* BehaviourTree_Component;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Artifical Intelligence")
	class UBehaviorTree* Behaviour_tree;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Artifical Intelligence")
	class UBlackboardComponent* blackboardComponent;

public:
	//In order to work with this we have to include this advanced constructor it passes FObjectIntializer by const&
	AAICpp_AIController0(FObjectInitializer const& objectIntializer = FObjectInitializer::Get());
	
	
	~AAICpp_AIController0();

public:

	void BeginPlay() override;

	


	//Called on possession of Character
	void OnPossess(APawn* const InPawn) override;

	class UBlackboardComponent* get_blackboard() const;

	uint8 EnemyKeyID;

protected:



};
