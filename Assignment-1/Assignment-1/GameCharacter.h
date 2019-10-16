#pragma once
#include <iostream>
#include <ctime>
#include <vector>
#include <windows.h>

using namespace std;
class GameCharacter
{
public:
	void SetColor(int value);
	enum eType { ROCK =0, PAPER, SCISSOR };
	virtual void update(); //virtual function
	int randomizer();
	void chase(int x, int y);
	virtual void movement();
	void check_walls();
	void spawn(string typeID, int health, int speed, int x, int y); // create an object
	void render();// virtual function
	string typeTXT();
	string get_name();
	bool isAlive();// return true if its health is greater than 0
	int get_xValue();
	int get_yValue();
	int get_mHealth();
	int get_Type();
	char get_firstCharacter();
	void setDamage();
protected:
	char blue[8] = { 0x1b, '[','1',';','3','4','m',0 };
	string m_typeID;
	int m_health;
	int m_speed; // value between 1 and 3
	int m_x;
	int m_y;
	int playerCord[2];
	int randNum;
	int type;

};

