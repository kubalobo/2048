//============================================================================
// Name        : 2048.cpp
// Author      : 
// Version     : Alpha
// Description : 2048 super game
//============================================================================

#include <iostream>

#include "board.h"
#include "printer.h"
#include "gameController.h"
#include "newElementsGenerator.h"

using namespace std;

int main() {

	board plansza;
	srand( time( NULL ) );
	newElementsGenerator(plansza);
	newElementsGenerator(plansza);


	printer(plansza);

	gameController(plansza);


	return 0;

}
