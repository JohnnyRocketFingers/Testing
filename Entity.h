#pragma once
#include <iostream>
#include <string>
#include "Utility.h"

using namespace std;

class Entity{
private:
protected:
	string _name;
	char _symbol;
	int _x, _y;
	int _tx, _ty;
	struct _stats{ int hp, mp, def, atk, wis, dex, vit, spd, gold, exp; }_stats;
public:
	Entity();
	~Entity();
	
	Entity(string name, int str);
	Entity(string name, int hp, int mp, int def, int atk, int wis, int dex, int vit, int spd, int gold, int exp);
	void Update();
	void setPosition(int x, int y);
	void getPosition(int &x, int &y);
	char getSymbol();
	void setSymbol(char symb);
	void getTryMovePos(int &x, int &y);
	void setTryMovePos(int x, int y);
	void Attack(Entity* atke);
	void printStats();

};
