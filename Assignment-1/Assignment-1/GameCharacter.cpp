#include "GameCharacter.h"
void GameCharacter::update()
{


}
void GameCharacter::spawn(string typeID, int health, int speed, int x, int y)
{
	m_typeID = typeID;
    m_health = health;
	m_speed = speed; // value between 1 and 3
	m_x = x;
	m_y = y;
}
void GameCharacter::render()
{
	cout << m_typeID;
	cout << m_x;
	cout << m_y;
	cout << "\n";
}
void GameCharacter::stats()
{
	cout << m_health;
	cout << m_speed;
	cout << "\n";
}
bool GameCharacter::isAlive()
{
	return true;
}

int GameCharacter::get_xValue() 
{
	return m_x;
}
int GameCharacter::get_yValue()
{
	return m_y;
}
char GameCharacter::get_firstCharacter()
{
	return m_typeID[0];
}