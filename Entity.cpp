#include "Entity.h"


Entity::Entity()
{
	_name = "UNNAMED";
	_stats.hp = _stats.mp = _stats.def = _stats.atk = _stats.wis = _stats.dex = _stats.vit = _stats.spd = _stats.gold = _stats.exp = _x = _y = 0;
	_symbol = '!';
	cout << "Entity " << _name << " created!" << endl;
}

Entity::Entity(string name, int str){

	_name = name;

	switch (str){
	case 0:
		_stats.hp = random(5,10); _stats.mp = 0; _stats.def = random(1,3); _stats.atk = random(1,3); _stats.wis = 0; _stats.dex = random(1,3); _stats.vit = 1; _stats.spd = random(1,3); _stats.gold = random(1,10); _stats.exp = random(1,10);
		break;
	case 1:
		_stats.hp = random(10,20); _stats.mp = random(0,5); _stats.def = random(2, 5); _stats.atk = random(2, 5); _stats.wis = random(0,2); _stats.dex = random(1, 3); _stats.vit = 2; _stats.spd = random(2, 5); _stats.gold = random(5, 25); _stats.exp = random(10, 20);
		break;
	case 2:
		_stats.hp = random(20, 50); _stats.mp = random(2,8); _stats.def = random(3, 10); _stats.atk = random(3, 10); _stats.wis = random(1,3); _stats.dex = random(3, 8); _stats.vit = 3; _stats.spd = random(3, 8); _stats.gold = random(10, 50); _stats.exp = random(20, 30);
		break;
	case 3:
		_stats.hp = random(50, 90); _stats.mp = random(4, 10); _stats.def = random(4, 15); _stats.atk = random(10, 24); _stats.wis = random(2, 6); _stats.dex = random(4, 10); _stats.vit = 4; _stats.spd = random(4, 12); _stats.gold = random(20, 100); _stats.exp = random(30, 50);
		break;
	default:
		_stats.hp = 1; _stats.mp = 1; _stats.def = 1; _stats.atk = 1; _stats.wis = 1; _stats.dex = 1; _stats.vit = 1; _stats.spd = 1; _stats.gold = 0; _stats.exp = 150.0;
	};
}

Entity::Entity(string name, int hp, int mp, int def, int atk, int wis, int dex, int vit, int spd, int gold, int exp)
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
	_stats.exp = exp;

	cout << "Entity " << _name << " created with sweet stats!" << endl;

}

void Entity::Update(){
	//printStats();
}

void Entity::setPosition(int x, int y){
	_x = x;
	_y = y;
}

void Entity::getPosition(int &x, int &y){
	x = _x;
	y = _y;
}

char Entity::getSymbol(){
	return _symbol;
}

void Entity::Attack(Entity* atke){


}
/*
void Entity::Draw(Level &lvl){
	lvl.setChar(_x, _y, _symbol);
}
*/

void Entity::printStats(){
	cout << "*" << _name << "*" << endl;
	printf("hp = %u\nmp = %i\ndef = %i\natk = %i\nwis = %i\ndex = %i\nvit = %i\nspd = %i\ndrops %i gold & is worth %i exp.\n ", _stats.hp, _stats.mp, _stats.def, _stats.atk, _stats.wis, _stats.dex, _stats.vit, _stats.spd, _stats.gold, _stats.exp);
}

Entity::~Entity()
{
	cout << "Entity " << _name << " DESTORYED!" << endl;
}