#pragma once
#include <iostream>
#include <time.h>
using namespace std;
class GameCharacter
{
public:
	virtual void update(); //virtual function
	void spawn(string typeID, int health, int speed, int x, int y); // create an object
	void render();// virtual function
	void stats();// print all stats relating to the object
	bool isAlive();// return true if its health is greater than 0
	int get_xValue();
	int get_yValue();
	char get_firstCharacter();

protected:
	string m_typeID;
	int m_health;
	int m_speed; // value between 1 and 3
	int m_x;
	int m_y;
};

