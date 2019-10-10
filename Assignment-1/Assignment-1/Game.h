#pragma once
#include "List"
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
};

