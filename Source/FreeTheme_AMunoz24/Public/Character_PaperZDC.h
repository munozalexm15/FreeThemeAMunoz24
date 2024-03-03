// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "PaperZDCharacter.h"
#include "Character_PaperZDC.generated.h"

class UInputMappingContext;
class UInputConfigData;

UCLASS()
class FREETHEME_AMUNOZ24_API ACharacter_PaperZDC : public APaperZDCharacter
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool c_isShooting = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool c_isJumping = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UPaperZDAnimBP* stateMachine;

private:
	void SmashAttack();
};
