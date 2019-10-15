#include "Enemy.h"
//Enemy::Enemy(const Enemy& c)
//{
//	m_typeID = c.m_typeID;
//	m_health = c.m_health;
//	m_speed = c.m_speed;
//	m_x = c.m_x;
//	m_y = c.m_y;
//}
void Enemy::update(GameCharacter playerLocation) 
{
	if (playerLocation.get_xValue > m_x)
	{
		m_x++;
	}
	if (playerLocation.get_xValue < m_x)
	{
		m_x--;
	}
	if (playerLocation.get_yValue > m_y)
	{
		m_y++;
	}
	if (playerLocation.get_yValue < m_y)
	{
		m_y--;
	}
	// Movement Randomizer
	if (randomizer() < 5)
	{
		// Move x by 1

	}
	else
	{
	
		// move x reverse
	}

	// If they hit a perimeter, the player stops moving


	if (randomizer() < 5)
	{
		
		// Move y by 1
	}
	else
	{
		// move y reverse

	}
	check_walls();
	/*
	If deduct from health, character multiply by 3
	*/
}