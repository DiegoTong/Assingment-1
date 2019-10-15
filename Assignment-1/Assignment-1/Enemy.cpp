#include "Enemy.h"
#include <ctime>
//Enemy::Enemy(const Enemy& c)
//{
//	m_typeID = c.m_typeID;
//	m_health = c.m_health;
//	m_speed = c.m_speed;
//	m_x = c.m_x;
//	m_y = c.m_y;
//}
void Enemy::update() const
{
	// Movement Randomizer
	srand(time(NULL));
	int randNum = (rand() % 10 + 1);
	if (randNum <9)
	{
		// Move x by 1
	}
	else
	{
		// move x reverse
	}
	srand(time(NULL));
    randNum = (rand() % 10 + 1);

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