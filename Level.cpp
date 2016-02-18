#include "Level.h"

Level::Level()
{
	clear = string(100, '\n');
}

void Level::Load(string filename, Player *player){
	ifstream file;
	file.open(filename);
	if (file.fail()){
		perror(filename.c_str()); 
		system("PAUSE");
		exit(1);
	}

	string line;
	while (getline(file, line)){
		_levelData.push_back(line);
	}

	file.close();

	sizeY = _levelData.size();
	sizeX = _levelData[0].size();
	
}

void Level::MoveE(Entity* ent){
	int tx, ty;
	int x, y;
	ent->getPosition(x, y);	//get ent current position
	ent->getTryMovePos(tx, ty);	//get the position its trying to move to
	char tile = getChar(tx,ty);	//get char at that position

	switch (tile){
	case '.':					//if char is air set thier position to that new position
		setChar(x, y, tile);
		ent->setPosition(tx, ty);
		break;
	}
}

void Level::DrawE(Entity* ent){
	int x, y;
	ent->getPosition(x, y); //get position of the current entity
	setChar(x, y, ent->getSymbol()); //draw the ent at that position
}

char Level::getChar(int x, int y){
	return _levelData[y][x];
}

void Level::setChar(int x, int y, char c){
	_levelData[y][x] = c;
}

void Level::getSize(int &x, int &y){
	x = sizeX;
	y = sizeY;
}

void Level::Draw(){
	cout << clear;
	for (int i = 0; i < _levelData.size(); i++){
		printf("%s\n", _levelData[i].c_str());
	}
	printf("\n");
}

Level::~Level()
{
}
