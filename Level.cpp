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

void Level::Update(){

}

void Level::Draw(){
	for (){
		for (){

		}
	}

	cout << clear;
	for (int i = 0; i < _levelData.size(); i++){
		printf("%s\n", _levelData[i].c_str());
	}
	printf("\n");
}

Level::~Level()
{
}
