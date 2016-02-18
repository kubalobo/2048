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

	plansza.field[0][0] = 1;

	printer(plansza);

	wait();

	return 0;
}
