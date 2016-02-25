#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Player.h"

using namespace std;

class Level
{
private:
	vector<string> _levelData;
protected:
	int sizeX, sizeY; //assume level is evenly square
public:
	string clear;

	Level();
	void Load(string filename){
	char getChar(int x, int y);
	void setChar(int x, int y, char c);
	void getSize(int &x, int &y);
	void Draw();
	~Level();
};

