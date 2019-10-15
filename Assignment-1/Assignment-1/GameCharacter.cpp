#include "GameCharacter.h"
void GameCharacter::update()
{


}
void GameCharacter::spawn(string typeID, int health, int speed, int x, int y)
{
	m_typeID = typeID;
    m_health = health;
	m_speed = speed; // value between 1 and 3

}
void GameCharacter::render()
{
	cout << m_typeID;
	cout << m_x;
	cout << m_y;
}
void GameCharacter::stats()
{
	cout << m_health;
	cout << m_speed;
}
bool GameCharacter::isAlive()
{
	return true;
}