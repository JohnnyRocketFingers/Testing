#pragma once
#include <iostream>
#include <conio.h>
#include "Entity.h"

using namespace std;

class Player : public Entity
{
public:
	Player(string name,char symbol, int hp, int mp, int def, int atk, int wis, int dex, int vit, int spd, int gold, int exp);
	void Move();
	void Update();
	~Player();
};

