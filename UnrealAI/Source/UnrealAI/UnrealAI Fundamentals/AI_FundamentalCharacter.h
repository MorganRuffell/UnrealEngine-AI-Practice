// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/SphereComponent.h"
#include "AI_FundamentalCharacter.generated.h"

UCLASS()
class UNREALAI_API AAI_FundamentalCharacter : public ACharacter
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "", meta = (AllowPrivateAccess))
	class USphereComponent* CollisionSphere;

public:
	// Sets default values for this character's properties
	AAI_FundamentalCharacter();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
