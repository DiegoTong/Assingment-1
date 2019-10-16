#include "Enemy.h"

void Enemy::update() 
{
	randomizer();
	// Movement Randomizer
	if (randNum <= 4)
	{
		randomizer();
		move_Enemy();
	}
	else if (randNum > 4 && randNum <= 9)
	{
		randomizer();
		move_Rand();
	}
	else
	{
		randomizer();
		changeType();
		m_health = m_health - 19;
		// move x reverse
	}

	// If they hit a perimeter, the player stops moving


	// If they hit a perimeter, the player stops moving
	check_walls();
	m_health--;
	/*
	If deduct from health, character multiply by 3
	*/
}

void Enemy::move_Enemy()
{
	// Move x by 1
	m_speed = 1;
	if (randNum <= 5)
	{
		if (playerCord[0] > m_x)
		{
			m_x += m_speed;
		}
		else if (playerCord[0] < m_x)
		{
			m_x -= m_speed;
		}
	}
	else
	{
		if (playerCord[1] > m_y)
		{
			m_y += m_speed;
		}
		else if (playerCord[1] < m_y)
		{
			m_y -= m_speed;
		}
	}
}

void Enemy::move_Rand()
{

	if (randNum > 2 && randNum <= 4)
	{
		m_x++;
	}
	else if (randNum > 4 && randNum <= 6)
	{
		m_x--;
	}
	else if (randNum > 6 && randNum <= 8)
	{
		m_y++;
	}
	else if (randNum > 8 && randNum <= 10)
	{
		m_y--;
	}
}

void Enemy::changeType()
{
	if (randNum <= 4)
	{
		type = 0;

	}
	else if (randNum > 4 && randNum <=7)
	{
		type = 1;
	}
	else if (randNum > 7)
	{
		type = 2;
	}
}