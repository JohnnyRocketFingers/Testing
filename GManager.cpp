#include "GManager.h"


GManager::GManager(){
	cout << "GManager created" << endl;
	player = new Player("Dave",'@',100,10,10,25,5,10,5,10,0,0);
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
	//update/draw mobs
	for (int i = 0; i < pos; i++)
	{
		mobs[i]->Update();//do ent stuff
		lvl.MoveE(mobs[i]);//move ent
		lvl.DrawE(mobs[i]);//draw ent
	}
	//process move and draw player
	lvl.Draw();
	player->Update();
	player->Move();
	lvl.MoveE(player);
	lvl.DrawE(player);
	
}


GManager::~GManager(){

}
