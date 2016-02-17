#include "Utility.h"

void seedRand(){
	srand(time(NULL));
}

int random(int min, int max){
	return ((rand() % ((max+1)-min)) + min);
}
