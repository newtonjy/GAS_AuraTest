// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacterAuraBase.generated.h"

UCLASS(Abstract)
class CPP_ARUA_API AMyCharacterAuraBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacterAuraBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnyWhere, Category = "Combat")
	TObjectPtr<USkeletalMeshComponent> Weapon;
public:	


};
