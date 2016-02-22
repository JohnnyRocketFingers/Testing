#include "GManager.h"


GManager::GManager(){
	cout << "GManager created" << endl;
	player = new Player("Dave",'@',100,10,10,25,5,10,5,10,0,0);
	lvl.Load("Level1.txt", player);
	em.Load(lvl,*player);
	
}


void GManager::Update(){
	em.Update(lvl);
	lvl.MoveE(player);
	lvl.DrawE(player);
	lvl.Draw();
	player->Update();
	player->Move();
	
}


GManager::~GManager(){

}
