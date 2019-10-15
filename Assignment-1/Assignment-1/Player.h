#pragma once
#include "GameCharacter.h"
class Player : public GameCharacter
{
	void update();
	enum movement{UP=1,DOWN,LEFT,RIGHT};
	int move;
};

