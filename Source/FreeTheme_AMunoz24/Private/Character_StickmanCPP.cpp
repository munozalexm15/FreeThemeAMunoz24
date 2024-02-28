// Fill out your copyright notice in the Description page of Project Settings.


#include "..\Public\Character_StickmanCPP.h"

// Sets default values
ACharacter_Stickman::ACharacter_Stickman()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACharacter_Stickman::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACharacter_Stickman::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACharacter_Stickman::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

