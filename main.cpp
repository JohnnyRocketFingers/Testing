#include <iostream>
#include <string>

using namespace std;

class Item{
protected:
	string _name;
	int _id, _value, _dmg, _mp, _def, _atk, _wis, _dex, _vit, _spd;

private:
public:
	//Item();
	//~Item();
	
	Item::Item(){
		cout << "Item " << _name << " created!" << endl;
	}

	Item::~Item(){
		cout << "Item " << _name << " destoryed!" << endl;
	}
};

class Entity{
protected:
	string _name;
	int _hp, _mp, _def, _atk, _wis, _dex, _vit, _spd, _gold;
	float _exp;
private:
public:
	//Entity();
	//~Entity();

	Entity::Entity(){
		_name = "UNNAMED";
		_hp = _mp = _def = _atk = _wis = _dex = _vit = _spd = _gold = 0;
		cout << "Entity " << _name << " created!" << endl;
	}

	Entity::Entity(string name, int hp, int mp, int def, int atk, int wis, int dex, int vit, int spd, int gold){

	}

	Entity::~Entity(){
		cout << "Entity " << _name << " DESTORYED!" << endl;
	}
};

int main()
{
	int x,y;
	Entity* skele = new Entity;

	char c;
	c = cin.get();

	return 0;
}