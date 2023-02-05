// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Engine/DeveloperSettings.h"
#include "SpaGameplayTagSettings.generated.h"

UCLASS(config=Game, DisplayName="Tags Settings")
class SPACESHARED_API USpaGameplayTagSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(Config, EditDefaultsOnly, Category="Main Menu")
	FGameplayTag StartGame;
};
