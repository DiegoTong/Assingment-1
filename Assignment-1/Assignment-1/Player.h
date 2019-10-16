#pragma once
#include "GameCharacter.h"
class Player : public GameCharacter
{
	void update();
	void movement();
private:
	enum choice{UP=1,DOWN,LEFT,RIGHT,CHANGE};
	int move;
};

