#pragma once
#include "List"
#include "Enemy.h"
#include "Player.h"
class Game
{
public:
	// pointer to 1 player and 4 enemies
	// list of pointers to GameCharacters
	void init(string *iD);
	void render();
	void update();
	void battle();
	void stats();
	void clean();
	void updateGrid();
	void printGrid();
	list<GameCharacter*> lsGameCharacters;
	char grid[12][12];
};

