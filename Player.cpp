#include "Player.h"


Player::Player(string name, int hp, int mp, int def, int atk, int wis, int dex, int vit, int spd, int gold, int exp)
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

	cout << "Player " << _name << " created with sweet stats!" << endl;

}

void Player::Move(){
	char input;
	char tile;

	input = getch();

	switch (input){
	case 'w'://up
	case 'W':
		tile = lvl.getChar(_x, _y - 1);
		if (canMove(_x, _y - 1, tile)) {_y -= 1;}

		break;
	case 's'://down
	case 'S':
		tile = lvl.getChar(_x,_y + 1);
		if (canMove(_x, _y + 1, tile)) { _y += 1; }
		break;

	case 'a'://left
	case 'A':
		tile = lvl.getChar(_x - 1, _y);
		if (canMove(_x - 1, _y, tile)) { _x -= 1; }
		break;

	case 'd'://right
	case 'D':
		tile = lvl.getChar(_x + 1, _y);
		if (canMove(_x + 1, _y, tile)) { _x += 1; }
		break;
	case 'x':
	case 'X':
		printf("Waiting...\n");
		break;
	default:
		tile = lvl.getChar(_x, _y);
		printf("Invalid input %s!\n", input);
	}
}

bool Player::canMove(int x, int y, char tile){//if not air then cant move
	switch (tile){
	case '#':
		return false;
	case '.':
		return true;
	case '@':
		return false;
	default:
		return false;
	}
}

Player::~Player()
{
}
