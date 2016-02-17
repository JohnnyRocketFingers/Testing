#pragma once
#include <iostream>
#include <string>
#include "Entity.h"
#include "Level.h"
#include "Player.h"

using namespace std;

class GManager{
private:
protected:
	Entity* mobs[100];
	Level lvl;
	Player* player;
	int pos = 0;
public:

	GManager::GManager();
	GManager::~GManager();


	void GManager::Push(Entity* enemy);
	Entity* GManager::Pop();
	void GManager::Update();


};

