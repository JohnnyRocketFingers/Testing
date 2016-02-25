#include "GManager.h"


GManager::GManager(){
	cout << "GManager created" << endl;
	player = new Player("Dave",'@',100,10,10,25,5,10,5,10,0,0);
	lvl.Load("Level1.txt");
	em.Load(lvl,*player);//sets player and enemy positions according to mapfile
	
}


void GManager::Update(){
	player->Move(lvl);
	player->Update();
	em.Update(lvl);
	lvl.Draw();
	
}


GManager::~GManager(){

}
