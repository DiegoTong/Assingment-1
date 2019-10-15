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
	void checkGameOver();
private:
	list<GameCharacter*>::const_iterator iter;
	list<GameCharacter*> lsGameCharacters;
	char grid[12][12];
	bool gameOver;
};

