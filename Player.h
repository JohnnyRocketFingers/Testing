#pragma once
#include <iostream>
#include <conio.h>
#include "Entity.h"
#include "Level.h"

using namespace std;

class Player : public Entity
{
public:
	Player(string name, int hp, int mp, int def, int atk, int wis, int dex, int vit, int spd, int gold, int exp);
	void Move();
	bool canMove(int x, int y, char tile);
	~Player();
};

