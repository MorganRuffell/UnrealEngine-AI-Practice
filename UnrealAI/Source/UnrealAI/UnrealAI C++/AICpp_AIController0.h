// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AICpp_AIController0.generated.h"

/**
 * 
 */
UCLASS()
class UNREALAI_API AAICpp_AIController0 : public AAIController
{
	GENERATED_BODY()


public:
	//In order to work with this we have to include this advanced constructor it passes FObjectIntializer by const&
	AAICpp_AIController0(FObjectInitializer const& objectIntializer = FObjectInitializer::Get());
	~AAICpp_AIController0();

public:

	void BeginPlay() override;

	//Called on possession of Character
	void OnPossess(APawn* const InPawn) override;

	class UBlackboardComponent* get_blackboard() const;

private:

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Artifical Intelligence", meta = (AllowPrivateAccess = "true"))
	class UBehaviorTreeComponent* Behaviour_treeComponent;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Artifical Intelligence", meta = (AllowPrivateAccess = "true"))
	class UBehaviorTree* Behaviour_tree;

	UPROPERTY()
	class UBlackboardComponent* blackboardComponent;


};
