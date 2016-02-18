#include "Player.h"


Player::Player(string name,char symbol, int hp, int mp, int def, int atk, int wis, int dex, int vit, int spd, int gold, int exp)
{
	_name = name;
	_symbol = symbol;
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
	int x, y;
	bool moreInput;

	getPosition(x, y);
	
	do{
		input = _getch();
		moreInput = false;

		switch (input){
		case 'w'://up
		case 'W':
			setTryMovePos(x, y - 1);
			break;

		case 's'://down
		case 'S':
			setTryMovePos(x, y + 1);
			break;

		case 'a'://left
		case 'A':
			setTryMovePos(x - 1, y);
			break;

		case 'd'://right
		case 'D':
			setTryMovePos(x + 1, y);
			break;

		case 'x':
		case 'X':
			setTryMovePos(x, y);
			printf("Waiting...\n");
			break;

		default:
			printf("Invalid input %c!\n", input);
			moreInput = true;
		}
	} while (moreInput);
}

void Player::Update(){

}

Player::~Player()
{
}
