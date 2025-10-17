#ifndef GAME_SERVER_GAMEMODES_OWO_OWO_H
#define GAME_SERVER_GAMEMODES_OWO_OWO_H

#include <game/server/gamemodes/vanilla/dm/dm.h>

class CGameControllerOwo : public CGameControllerDM
{
public:
	CGameControllerOwo(class CGameContext *pGameServer);
	~CGameControllerOwo() override;

	void OnCharacterSpawn(class CCharacter *pChr) override;
	void Tick() override;
};
#endif
