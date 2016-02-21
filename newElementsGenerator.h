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
#include "ranking.h"
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
	for (int i = 0; i <10; ++i)
	{
		for (int j = 0; j<10; ++j)
		{
			if (plansza.field[i][j] ==0)
				GameOver();
		}
	}
	int a =(rand() %  4) + 0;
	int b =(rand() %  4) + 0;
	if (plansza.field[a][b]==0)
		plansza.field[a][b]= new_element();
	else 
		newElementsGenerator(plansza);

}


