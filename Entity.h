#pragma once
#include <iostream>
#include <string>

using namespace std;

class Entity{
protected:
	string _name;
	struct _stats{ int hp, mp, def, atk, wis, dex, vit, spd, gold; }_stats;

	float _exp;
private:
public:
	Entity();
	~Entity();
	
	Entity::Entity(string name, int str);
	Entity(string name, int hp, int mp, int def, int atk, int wis, int dex, int vit, int spd, int gold, float exp);
	void Update();
	void Attack(Entity* atke);
	void printStats();



};
