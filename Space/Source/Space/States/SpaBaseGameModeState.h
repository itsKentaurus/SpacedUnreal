#pragma once
#include "HSM.h"

using namespace hsm;
class ASpaceGameMode;

struct SpaBaseGameModeState :  StateWithOwner<ASpaceGameMode>
{
	static hsm::StateTypeId GetStateType()
	{
		static hsm::StateTypeId sStateTypeId(HSM_TEXT("SpaBaseGameModeState"));
		return sStateTypeId;
	}

	virtual hsm::StateTypeId DoGetStateType() const { return GetStateType(); }
	virtual const hsm_char* DoGetStateDebugName() const { return HSM_TEXT("SpaBaseGameModeState"); }
};