#include <iostream>
#include <string>
//#include <conio.h> //getch
#include "GManager.h"//includes Entity
#include "Level.h"
#include "Utility.h"
#include "EntityManager.h"

using namespace std;


int main()
{
	char input;

	bool running = true;
	seedRand();

	GManager gm;
	EntityManager em;
	
	while (running){
		gm.Update();
	}


	char c;
	cout << "Enter something to exit." << endl;
	c = cin.get();

	return 0;
}