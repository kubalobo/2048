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

	//Dwa poczatkowe elementy
	newElementsGenerator(plansza);
	newElementsGenerator(plansza);

	//Wydruk pierwszej planszy
	printer(plansza);

	//Uruchomienie glownej petli programu
	gameController(plansza);


	return 0;

}
