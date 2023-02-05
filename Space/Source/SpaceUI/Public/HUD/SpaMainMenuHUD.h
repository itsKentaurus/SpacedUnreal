// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SpaMainMenuHUD.generated.h"

struct FGameplayTag;

UCLASS()
class SPACEUI_API USpaMainMenuHUD : public UUserWidget
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintCallable)
	void RunTag(const FGameplayTag& Tag);
};
