#include "Player.h"
//Player::Player(const Player& c)
//{
//	m_typeID = c.m_typeID;
//	m_health = c.m_health;
//	m_speed = c.m_speed;
//	m_x = c.m_x;
//	m_y = c.m_y;
//}

void Player::update()
{
	cout << "Input W/A/S/D to move" << endl;

	cin >> move;
	switch (move)
	{
	case UP:
		cout << m_y;
		m_y -= 1;
		break;
	case DOWN:
		m_y += 1;
		break;
	case LEFT:
		m_x -= 1;
		break;
	case RIGHT:
		m_x += 1;
		break;
	default:
		cout << "You made an illegal choice." << endl;
	}
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