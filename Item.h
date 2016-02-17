#pragma once
#include <iostream>
#include <string>
using namespace std;

class Item{
protected:
	string _name;
	int _id, _value, _dmg, _mp, _def, _atk, _wis, _dex, _vit, _spd;

private:
public:
	Item();
	~Item();

};

