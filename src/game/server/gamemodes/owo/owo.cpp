#include "owo.h"

#include <generated/protocol.h>

#include <game/server/entities/character.h>
#include <game/server/player.h>

CGameControllerOwo::CGameControllerOwo(class CGameContext *pGameServer) :
	CGameControllerDM(pGameServer)
{
	m_GameFlags = 0;
	m_pGameType = "owo";
	m_DefaultWeapon = WEAPON_HAMMER;

	m_pStatsTable = "dm";
	m_pExtraColumns = new CDmColumns();
	m_pSqlStats->SetExtraColumns(m_pExtraColumns);
	m_pSqlStats->CreateTable(m_pStatsTable);
}

CGameControllerOwo::~CGameControllerOwo() = default;

void CGameControllerOwo::Tick()
{
	CGameControllerDM::Tick();
}

void CGameControllerOwo::OnCharacterSpawn(class CCharacter *pChr)
{
	CGameControllerVanilla::OnCharacterSpawn(pChr);
	pChr->GiveWeapon(WEAPON_HAMMER, false, -1);
}

REGISTER_GAMEMODE(owo, CGameControllerOwo(pGameServer));
