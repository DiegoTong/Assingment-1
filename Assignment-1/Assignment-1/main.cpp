#include "Game.h"
int main()
{
	char userInput = 'y';
	Game oGame;
	string playerID;
	cin >> playerID;
	oGame.init(&playerID);
	while (userInput != 'n')
	{
		oGame.update();
		cin >> userInput;
	}
	return 0;
}