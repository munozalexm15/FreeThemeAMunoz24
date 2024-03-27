// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperZDCharacter.h"
#include "Engine/DataTable.h"
#include "BehaviorTree/BehaviorTree.h"
#include "AIDifficultyDataRow.generated.h"


/**
 * Row con las propiedades de cada personaje: Sprites, Habilidades (si da tiempo), fuerza de los tiros, imagen, etc.
 */
USTRUCT()
struct FAIDifficultyDataRow : public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DifficultyName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UBehaviorTree> DifficultyBTAsset;
};

