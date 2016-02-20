/*
 * newElementsGenerator.h
 *
 *  Created on: 20 lut 2016
 *      Author: Karolina Kamiñska
 */

#pragma once

#include <iostream>
#include "board.h"
#include <cstdlib>
#include <ctime>

using namespace std;



int new_element()
{
	//srand( time( NULL ) );
	int random_number = (rand() %100);

	if (random_number < 20)
	return 4;
	else
	return 2;
}

void newElementsGenerator(board& plansza)
{

	int a =(rand() %  4) + 0;
	int b =(rand() %  4) + 0;
	if (plansza.field[a][b]==0)
		plansza.field[a][b]= new_element();
	else 
		newElementsGenerator(plansza);

}


