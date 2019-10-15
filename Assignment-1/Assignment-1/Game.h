#pragma once
#include "List"
#include "Enemy.h"
#include "Player.h"
class Game
{
public:
	// pointer to 1 player and 4 enemies
	// list of pointers to GameCharacters
	void init();
	void render();
	void update();
	void battle();
	void stats();
	void clean();
protected:
	Enemy* enemy1;
	Enemy* enemy2;
	Enemy* enemy3;
	Enemy* enemy4;
	Player* player;
	list<GameCharacter> lsGameCharacters;
};

