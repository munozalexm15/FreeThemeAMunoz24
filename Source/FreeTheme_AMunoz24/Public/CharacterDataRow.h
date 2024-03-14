// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperZDCharacter.h"
#include "Engine/DataTable.h"
#include "CharacterDataRow.generated.h"


/**
 * Row con las propiedades de cada personaje: Sprites, Habilidades (si da tiempo), fuerza de los tiros, imagen, etc.
 */
USTRUCT()
struct FCharacterDataRow : public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<UTexture2D> Image {nullptr};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Strength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Speed;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<APaperZDCharacter> CharacterBP {nullptr};
};

