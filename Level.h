#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Entity.h"
#include "Player.h"

using namespace std;

class Level
{
private:
	vector<string> _levelData;
protected:
	
public:
	Level();
	void Load(string filename, Player *player);
	void MoveE(Entity* ent);
	char getChar(int x, int y);
	void setChar(int x, int y, char c);
	void Draw();
	void DrawE(Entity* ent);
	~Level();
};

