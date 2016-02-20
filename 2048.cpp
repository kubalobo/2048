//============================================================================
// Name        : 2048.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
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
