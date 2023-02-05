// Copyright Epic Games, Inc. All Rights Reserved.

#include "SpaceGameMode.h"
#include "States/SpaInitialGameModeState.h"

ASpaceGameMode::ASpaceGameMode()
{
	PrimaryActorTick.bStartWithTickEnabled = true;
	PrimaryActorTick.bCanEverTick = true;
}

void ASpaceGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);
	StateMachine.Initialize<SpaInitialGameModeState>(this);
	StateMachine.ProcessStateTransitions();
}

void ASpaceGameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	if (StateMachine.IsInitialized())
	{
		StateMachine.UpdateStates();
	}
}
