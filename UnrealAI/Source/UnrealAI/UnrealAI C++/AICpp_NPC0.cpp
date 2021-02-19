// Fill out your copyright notice in the Description page of Project Settings.


#include "AICpp_NPC0.h"

// Sets default values
AAICpp_NPC0::AAICpp_NPC0()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	EnemyCollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Collider"));
	EnemyCollisionSphere->SetupAttachment(RootComponent);


}

// Called when the game starts or when spawned
void AAICpp_NPC0::BeginPlay()
{
	Super::BeginPlay();

	//Annotated out the material instance data from this tutorial. Very useful for material instance creation 
	//at runtime.

	/*UMaterialInstanceDynamic* const material_instance = UMaterialInstanceDynamic::Create(GetMesh()->GetMaterial(0), this);
	if (material_instance)
	{
		material_instance->SetVectorParameterValue("BodyColor", FLinearColor(0.9f, 0.9f ,0.9f, 1.0f));
		GetMesh()->SetMaterial(0,material_instance);
	*/

}

// Called every frame
void AAICpp_NPC0::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAICpp_NPC0::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

