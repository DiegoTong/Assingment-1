#include "Enemy.h"

void update()
{
	// Movement Randomizer
	srand(time(NULL));
	int randNum = rand() % 10+1;
	if (randNum <9)
	{
		// Move x by 1
	}
	else
	{
		// move x reverse
	}

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

	/*
	If deduct from health, character multiply by 3
	*/
}