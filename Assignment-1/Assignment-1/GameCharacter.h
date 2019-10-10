#pragma once
#include <iostream>
using namespace std;
class GameCharacter
{
public:
	void spawn(string typeID, int health, int speed, int x, int y); // create an object
	void render();// virtual function
	void stats();// print all stats relating to the object
	bool isAlive();// return true if its health is greater than 0
protected:
	string m_typeID;
	int m_health;
	int m_speed; // value between 1 and 3
	int m_x;
	int m_y;
};

