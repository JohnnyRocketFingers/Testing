#include "EntityManager.h"


EntityManager::EntityManager()
{
}

void EntityManager::Load(Level &lvl,Player &playerin){
	player = &playerin;

	//process tiles
	int xlvl, ylvl;
	lvl.getSize(xlvl,ylvl);

	char tile;
	for (int y = 0; y < ylvl; y++){
		for (int x = 0; x < xlvl; x++){
			tile = lvl.getChar(x, y);

			switch (tile){
			case '@':
				player->setPosition(x, y);
				lvl.setChar(x, y, '.');
				break;
			case 'G':
				//todo: generate enityt and push onto list for updates and stuff.
				createEntity("Gobby", 'G', 1,x,y);
				
				lvl.setChar(x, y, '.');
				break;
			case '#':
				break;
			case '.':
				break;
			default:
				printf("Unrecognized Symbol %s", tile);
			}
		}
	}
}

Entity* EntityManager::getEntity(int id){
	for (int i = 0; i < MAX; i++){
		if (mobs[i]->id == id){
			return mobs[i];
		}
	}
}

void EntityManager::Push(Entity* enemy){
	for (int i = pos; i < MAX; i++){
		if (mobs[i] == NULL){
			mobs[i] = enemy;
			pos++;
			break;
		}
	}
}

void EntityManager::Remove(int id){
	for (int i = 0; i < MAX; i++)
	{
		if (mobs[i]->id == id){
			delete mobs[i];
			mobs[i] = NULL;
			pos = i;
			break;
		}
	}
}

Entity* EntityManager::createEntity(string name,char symbol, int skill,int x, int y){
	Entity *tmp = new Entity(name, symbol, skill, (id++), x , y);
	Push(tmp);
	return tmp;
}

void EntityManager::Update(Level &lvl){
	for (int i = 0; i < MAX; i++)
	{
		if (mobs[i] != NULL){
			mobs[i]->Update(player);//do ent stuff
			lvl.MoveE(mobs[i]);//move ent
			lvl.DrawE(mobs[i]);//draw ent
		}
	}
}

EntityManager::~EntityManager()
{
	for (int i = 0; i < MAX; i++)
	{
		if (mobs[i] != NULL){
			delete mobs[i];
			mobs[i] = NULL;
		}
	}
}
