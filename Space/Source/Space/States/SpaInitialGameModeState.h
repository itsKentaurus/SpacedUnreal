#pragma once

#include "CoreMinimal.h"
#include "HSM.h"
#include "SpaBaseGameModeState.h"

using namespace hsm;

struct SpaInitialGameModeState : SpaBaseGameModeState
{
	DEFINE_HSM_STATE(SpaInitialGameModeState)
	SpaInitialGameModeState();
};
