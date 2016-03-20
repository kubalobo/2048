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
#include "EndOfGame.h"

//Losuje element do wstawienia
int new_element() {
	int random_number = (rand() % 100);

	if (random_number < 20)
		return 4;
	else
		return 2;
}

//<<<<<<< HEAD
//Wstawia nowy element w losowe miejsce na planszy | zwraca true gdy KONIEC GRY
bool newElementsGenerator(board& plansza) {

	int zera = 0;
//=======
//void newElementsGenerator(board& plansza)
//{
//	for (int i = 0; i <10; ++i)
//	{
//		for (int j = 0; j<10; ++j)
//		{
//			if (plansza.field[i][j] ==0)
//				GameOver();
//		}
//	}
//	int a =(rand() %  4) + 0;
//	int b =(rand() %  4) + 0;
//	if (plansza.field[a][b]==0)
//		plansza.field[a][b]= new_element();
//	else 
//		newElementsGenerator(plansza);
//>>>>>>> refs/remotes/origin/Karolina

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			if (plansza.field[i][j] == 0)
				zera++;

	if (zera == 0 && EndOfGame(plansza) == true) {
		return true;	//KONIEC GRY
	}
	else if (zera != 0)
	{
		int a = (rand() % 4) + 0;
		int b = (rand() % 4) + 0;

		if (plansza.field[a][b] == 0)
			plansza.field[a][b] = new_element();
		else
			newElementsGenerator(plansza);
	}
	return false;
}

/*
 void newElementsGenerator(board& plansza)
 {

 int a =(rand() %  4) + 0;
 int b =(rand() %  4) + 0;
 if (plansza.field[a][b]==0)
 plansza.field[a][b]= new_element();
 else
 newElementsGenerator(plansza); //jak doda  to konczy

 }


 */
