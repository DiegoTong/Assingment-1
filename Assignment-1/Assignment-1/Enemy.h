#pragma once
#include "GameCharacter.h"
class Enemy : public GameCharacter
{
	
public:
	virtual void update();
	void move_Enemy();
	void move_Rand();
	void changeType();
};

