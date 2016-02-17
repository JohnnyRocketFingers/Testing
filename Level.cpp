#include "Level.h"

Level::Level()
{
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
	
	//process tiles
	char tile;
	for (int i = 0; i < _levelData.size(); i++){
		for (int j = 0; j < _levelData[i].size(); j++){
			tile = _levelData[i][j];

			switch (tile){
			case '@':
				player->setPosition(j, i);
				_levelData[i][j] = '.'; //todo: maybe write function to do this
				break;
			case 'G':
				//todo: generate enityt and push onto list for updates and stuff.
			default:
				printf("Unrecognized Symbol %s", tile);
			}
		}
	}
}

char Level::getChar(int x, int y){
	return _levelData[y][x];
}

void Level::setChar(int x, int y, char c){
	_levelData[y][x] = c;
}

void Level::Draw(){
	for (int i = 0; i < _levelData.size(); i++){
		printf("%s\n", _levelData[i].c_str());
	}
	printf("\n");
}

Level::~Level()
{
}
