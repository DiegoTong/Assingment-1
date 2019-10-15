#pragma once
#include "GameCharacter.h"
class Enemy : public GameCharacter
{
	
public:
	virtual void update(GameCharacter playerLocation);
};

