/*
 * newElementsGenerator.h
 *
 *  Created on: 20 lut 2016
 *      Author: Karolina Kamiñska
 */

#pragma once

#include <iostream>
#include <cstdlib>
#include <ctime>

#include "board.h"

//Losuje element do wstawienia
int new_element()
{
	int random_number = (rand() % 100);

	if (random_number < 20)
	return 4;
	else
	return 2;
}

//Wstawia nowy element w losowe miejsce na planszy | jesli zajete to rekurencyjnie powtarza az trafi - B£¥D!
/*void newElementsGenerator(board& plansza) {

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++) {
			if (plansza.field[i][j] != 0)
				break;
			else {
				int a = (rand() % 4) + 0;
				int b = (rand() % 4) + 0;

				if (plansza.field[a][b] == 0)
					plansza.field[a][b] = new_element();
				else
					newElementsGenerator(plansza);
			}
		}
}*/



void newElementsGenerator(board& plansza)
{

	int a =(rand() %  4) + 0;
	int b =(rand() %  4) + 0;
	if (plansza.field[a][b]==0)
		plansza.field[a][b]= new_element();
	else
		newElementsGenerator(plansza);

}



