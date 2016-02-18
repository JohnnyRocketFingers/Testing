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
	int sizeX, sizeY; //assume level is evenly square
public:
	Level();
	void Load(string filename, Player *player);
	void MoveE(Entity* ent);
	char getChar(int x, int y);
	void setChar(int x, int y, char c);
	void getSize(int &x, int &y);
	void Draw();
	void DrawE(Entity* ent);
	~Level();
};

