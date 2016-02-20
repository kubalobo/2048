/*
 * newElementsGenerator.h
 *
 *  Created on: 20 lut 2016
 *      Author: Karolina Kami�ska
 */

#pragma once

#include <iostream>
#include <cstdlib>
#include <ctime>

#include "board.h"

int new_element()
{
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


