#include "Player.h"

void Player::update()
{
	cout << "Input 1/2/3/4 to move or 5 to change type" << endl;
	movement();
	check_walls();
	m_health--;
}



void Player::movement()
{
	cin >> move;
	while (!cin.good())
	{
		cout << "You made an illegal choice." << endl;
		cout << "Input 1/2/3/4 to move or 5 to change type" << endl;
		cin.clear();
		cin.ignore(10000, '\n');
		move = 0;
		cin >> move;
		system("CLS");
	}
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
	case CHANGE:
		cout << "Choose your type: ROCK = 0/ PAPER = 1/ SCISSORS = 2" << endl;
		cin >> move;
		while (!cin.good())
		{
			cout << "You made an illegal choice." << endl;
			cout << "Choose your type: ROCK = 0/ PAPER = 1/ SCISSORS = 2" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			move = 0;
			cin >> move;
			system("CLS");
		}
			type = move;
		m_health = m_health - 19;
		break;
	default:
		break;
	}
}

