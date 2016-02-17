#include <iostream>
#include <string>
#include <cstdlib> //idk
#include <conio.h> //getch
#include "GManager.h"//includes Entity
#include "Level.h"
#include "Utility.h"

using namespace std;


int main()
{
	char input;
	string clear(50,'\n');
	bool running = true;
	seedRand();

	GManager gm;
	
	
	while (running){
		gm.Update();
	}

	gm.Push(new Entity("Jared", 100, 0, 5, 10, 0, 20, 5, 10, 5, 5.0));
	gm.Push(new Entity("Lars",0));
	gm.Push(new Entity("Lars2", 1));
	gm.Push(new Entity("Lars3", 2));
	gm.Push(new Entity("Lars4", 3));
	

	gm.Update();


	char c;
	cout << "Enter something to exit." << endl;
	c = cin.get();

	return 0;
}