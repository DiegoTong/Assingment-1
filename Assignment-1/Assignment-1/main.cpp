#include "Game.h"
int main()
{
	
	Game oGame;
	string playerID;
	cin >> playerID;
	oGame.init(&playerID);

	return 0;
}