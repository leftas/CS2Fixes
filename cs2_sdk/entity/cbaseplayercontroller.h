#pragma once

#include "../chandle.h"
#include "cbaseentity.h"

class CBasePlayerController : public CBaseEntity
{
public:
	DECLARE_SCHEMA_CLASS(CBasePlayerController);

	SCHEMA_FIELD(uint64, m_steamID)
	SCHEMA_FIELD(CHandle, m_hPawn)
	SCHEMA_FIELD(char, m_iszPlayerName)
};