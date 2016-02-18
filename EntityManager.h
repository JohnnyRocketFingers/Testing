#pragma once
#include <iostream>
#include <string>
#include "Entity.h"
#include "Level.h"
#include "Player.h"

using namespace std;

class EntityManager{
private:
protected:
	static const int MAX = 100;
	Entity* mobs[MAX];
	Player* player;
	int pos = 0;
	int id = 0;
public:

	EntityManager();
	~EntityManager();

	void Load(Level &lvl, Player &player);
	Entity* getEntity(int id);
	void Push(Entity* enemy);
	void Remove(int id);
	Entity* createEntity(string name,char symbol, int skill, int x, int y);
	void Update(Level &lvl);


};

