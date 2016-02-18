#pragma once
#include <iostream>
#include <string>
#include "Entity.h"
#include "Level.h"
#include "Player.h"
#include "EntityManager.h"

using namespace std;

class GManager{
private:
protected:
	Level lvl;
	Player* player;
	EntityManager em;
public:

	GManager::GManager();
	GManager::~GManager();

	void GManager::Update();


};

