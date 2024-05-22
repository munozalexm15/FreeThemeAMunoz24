// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputAction.h"
#include "InputActionValue.h"
#include "PaperZDCharacter.h"
#include "Character_PaperZDC.generated.h"

class UInputMappingContext;
class UInputConfigData;

UENUM(BlueprintType)
enum Field_Positions
{
	LEFT,
	RIGHT
};

UCLASS()
class FREETHEME_AMUNOZ24_API ACharacter_PaperZDC : public APaperZDCharacter
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool c_isShooting = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool c_isCharging = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool c_isJumping = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool c_IsHit = false;
	
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<Field_Positions> Position;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool c_CanMove = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UPaperZDAnimBP* stateMachine;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UInputAction* Last_IA;

private:
	void SmashAttack();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>&) const override;
};
