#pragma once
#include <iostream>
#include <string>
#include "Entity.h"

using namespace std;

class GManager{
protected:
	Entity* mobs[100];
	int pos = 0;
private:
public:

	GManager::GManager();
	GManager::~GManager();

	void GManager::Push(Entity* enemy);
	Entity* GManager::Pop();
	void GManager::Update();


};

