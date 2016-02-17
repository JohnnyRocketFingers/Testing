#include "GManager.h"


GManager::GManager(){
	cout << "GManager created" << endl;
	player = new Player("Dave",100,10,10,25,5,10,5,10,0,0);
	lvl.Load("Level1.txt",player);
	
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
	//draw level
	lvl.Draw();
	//update/draw mobs
	for (int i = 0; i < pos; i++)
	{
		mobs[i]->Update();
		mobs[i]->Draw(lvl);//todo: have entities draw them selves , maybe have level draw entities so lvl.draw(mobs[i]) instead 
	}
	//process move and draw player
	player->Move(lvl);
	player->Draw(lvl);
	
}


GManager::~GManager(){

}
