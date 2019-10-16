#include "GameCharacter.h"
void GameCharacter::update()
{
	cout << "I'm empty inside" << endl;
}
void GameCharacter::movement()
{
}
int GameCharacter::randomizer()
{
	randNum = rand() % 10 + 1;
	return randNum;
}
string GameCharacter::get_name()
{
	return m_typeID;
}
void GameCharacter::spawn(string typeID, int health, int speed, int x, int y)
{
	m_typeID = typeID;
    m_health = health;
	m_speed = speed; // value between 1 and 3
	m_x = x;
	m_y = y;
	playerCord[0] = x;
	playerCord[1] = 1;
	randNum = rand() % 10 + 1;
	if (randNum <= 4)
	{
		type = ROCK;
	}
	else if (randNum > 4 && randNum < 7)
	{
		type = PAPER;
	}
	else if (randNum >= 7)
	{
		type = SCISSOR;
	}

}
void GameCharacter::render()
{
	SetColor(7);
	cout << m_typeID << " x: " << m_x << " y: " << m_y << " Health: ";
	if (m_health < 20)
	{
		SetColor(4);
		cout << m_health;
		SetColor(7);
	}
	else if (m_health >= 20 && m_health < 70)
	{
		SetColor(14);
		cout << m_health;
		SetColor(7);
	}
	else if (m_health >=70)
	{
		SetColor(2);
		cout << m_health;
		SetColor(7);
	}
	cout <<" Speed: " << m_speed << " Type: ";
	
	cout << typeTXT() << "\n";
	SetColor(7);
}
bool GameCharacter::isAlive()
{
	if (m_health > 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
string GameCharacter::typeTXT()
{
	if (type == 0)
	{
		SetColor(8);
		return "ROCK";

	}
	else if (type == 1)
	{
		SetColor(5);
		return "PAPER";
	}
	else if (type == 2)
	{
		SetColor(3);
		return "SCISSORS";
	}
}
int GameCharacter::get_xValue() 
{
	return m_x;
}
int GameCharacter::get_yValue()
{
	return m_y;
}
int GameCharacter::get_mHealth()
{
	return m_health;
}
char GameCharacter::get_firstCharacter()
{
	return m_typeID[0];
}
void GameCharacter::check_walls()
{
	if (m_y > 11)
	{
		cout << "You made an illegal choice." << endl;
		m_y = 11;
	}
	if (m_x > 11)
	{
		cout << "You made an illegal choice." << endl;
		m_x = 11;
	}
	if (m_y < 0)
	{
		cout << "You made an illegal choice." << endl;
		m_y = 0;
	}
	if (m_x < 0)
	{
		cout << "You made an illegal choice." << endl;
		m_x = 0;
	}
}
int GameCharacter::get_Type()
{
	return type;
}
void GameCharacter::chase(int x, int y)
{
	playerCord[0] = x;
	playerCord[1] = y;
}

void GameCharacter::setDamage()
{
	m_health = 0;
}
void GameCharacter::SetColor(int value) 
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), value);
}
/*
1: Blue
2: Green
3: Cyan
4: Red
5: Purple
6: Yellow (Dark)
7: Default white
8: Gray/Grey
9: Bright blue
10: Brigth green
11: Bright cyan
12: Bright red
13: Pink/Magenta
14: Yellow
15: Bright white
*/