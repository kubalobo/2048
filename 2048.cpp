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

using namespace std;


int main() {

	board plansza;

	plansza.field[0][1] = 1;
	plansza.field[2][1] = 1;
	plansza.field[0][2] = 1;
	plansza.field[1][2] = 1;
	plansza.field[2][3] = 1;
	plansza.field[2][2] = 1;
	plansza.field[2][0] = 1;
	

	printer(plansza);

	gameController(plansza);

	return 0;
}
