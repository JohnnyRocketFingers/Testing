#include "GManager.h"


GManager::GManager(){
	cout << "GManager created" << endl;
}

void GManager::Push(Entity* enemy){
	mobs[pos] = enemy;
	pos++;
}

Entity* GManager::Pop(){
	pos -= 1;
	return mobs[pos + 1];
}

void GManager::Update(){
	for (int i = 0; i < pos; i++)
	{
		mobs[i]->Update();
	}
}

GManager::~GManager(){

}
