#pragma once
#include "GameCharacter.h"
class Player : public GameCharacter
{
	void update();
	void movement();
private:
	enum direction{UP=1,DOWN,LEFT,RIGHT};
	int move;
};

