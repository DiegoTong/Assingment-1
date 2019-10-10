#include "Player.h"

void update()
{
	cout << "Input W/A/S/D to move" << endl;
	srand(time(NULL));
	int randNum = rand() % 10 + 1;
	if (randNum < 9)
	{
		// Move x by 1
	}
	else
	{
		// move x reverse
	}

	// If they hit a perimeter, the player stops moving

	srand(time(NULL));
	randNum = rand() % 10 + 1;
	if (randNum < 9)
	{
		// Move y by 1
	}
	else
	{
		// move y reverse
	}
}