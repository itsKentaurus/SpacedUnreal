// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "HSM.h"
#include "GameFramework/GameModeBase.h"
#include "SpaceGameMode.generated.h"

UCLASS(minimalapi)
class ASpaceGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ASpaceGameMode();
	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;

protected:
	virtual void Tick(float DeltaSeconds) override;

private:
	hsm::StateMachine StateMachine;
};



