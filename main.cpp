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
	struct _stats{ int hp, mp, def, atk, wis, dex, vit, spd, gold; }_stats;
	
	float _exp;
private:
public:
	//Entity();
	//~Entity();

	Entity::Entity()
	{
		_name = "UNNAMED";
		_stats.hp = _stats.mp = _stats.def = _stats.atk = _stats.wis = _stats.dex = _stats.vit = _stats.spd = _stats.gold = 0;
		_exp = 0;
		cout << "Entity " << _name << " created!" << endl;
	}

	Entity::Entity(string name, int str){
		_name = name;
		switch (str){
		case 0:
			_stats.hp = 5; _stats.mp = 0; _stats.def = 1; _stats.atk = 2; _stats.wis = 0; _stats.dex = 3; _stats.vit = 1; _stats.spd = 2; _stats.gold = 2; _exp = 5.0;
			break;
		case 1:
			_stats.hp = 20; _stats.mp = 5; _stats.def = 5; _stats.atk = 5; _stats.wis = 2; _stats.dex = 5; _stats.vit = 2; _stats.spd = 5; _stats.gold = 8; _exp = 10.0;
			break;
		case 2:
			_stats.hp = 40; _stats.mp = 8; _stats.def = 10; _stats.atk = 10; _stats.wis = 4; _stats.dex = 8; _stats.vit = 3; _stats.spd = 8; _stats.gold = 16; _exp = 20.0;
			break;
		case 3:
			_stats.hp = 90; _stats.mp = 10; _stats.def = 15; _stats.atk = 24; _stats.wis = 6; _stats.dex = 10; _stats.vit = 4; _stats.spd = 12; _stats.gold = 32; _exp = 60.0;
			break;
		default:
			_stats.hp = 1; _stats.mp = 1; _stats.def = 1; _stats.atk = 1; _stats.wis = 1; _stats.dex = 1; _stats.vit = 1; _stats.spd = 1; _stats.gold = 0; _exp = 150.0;
		};
	}

	Entity::Entity(string name, int hp, int mp, int def, int atk, int wis, int dex, int vit, int spd, int gold, float exp)
	{
		_name = name;
		_stats.hp = hp;
		_stats.mp = mp;
		_stats.def = def;
		_stats.atk = atk;
		_stats.wis = wis;
		_stats.dex = dex;
		_stats.vit = vit;
		_stats.spd = spd;
		_stats.gold = gold;
		_exp = exp;

		cout << "Entity " << _name << " created with sweet stats!" << endl;

	}

	void Entity::Update(){
		printStats();
	}


	void Entity::Attack(Entity* atke){


	}

	void Entity::printStats(){
		cout << "*" << _name << "*" << endl;
		printf("hp = %u\nmp = %i\ndef = %i\natk = %i\nwis = %i\ndex = %i\nvit = %i\nspd = %i\ndrops %i gold & is worth %f exp.\n ", _stats.hp, _stats.mp, _stats.def, _stats.atk, _stats.wis, _stats.dex, _stats.vit, _stats.spd, _stats.gold, _exp);
	}

	Entity::~Entity()
	{
		cout << "Entity " << _name << " DESTORYED!" << endl;
	}
};

class GManager{
protected:
	Entity* mobs[100];
	int pos = 0;
private:
public:
	GManager::GManager(){
		cout << "GManager created" << endl;
	}

	void GManager::Push(Entity* enemy){
		mobs[pos] = enemy;
		pos++;
	}

	Entity* GManager::Pop(){
		pos -= 1;
		return mobs[pos+1];
	}

	void GManager::Update(){
		for (int i = 0; i < pos; i++)
		{
			mobs[i]->Update();
		}
	}

	GManager::~GManager(){

	}
};

int main()
{
	int x,y;
	GManager gm;
	gm.Push(new Entity("Jared", 100, 0, 5, 10, 0, 20, 5, 10, 5, 5.0));
	gm.Push(new Entity("Lars",0));
	gm.Push(new Entity("Lars2", 1));
	gm.Push(new Entity("Lars3", 2));
	gm.Push(new Entity("Lars4", 3));
	

	gm.Update();

	char c;
	cout << "Enter something to exit." << endl;
	c = cin.get();

	return 0;
}