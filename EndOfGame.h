/*
 * EndOfGame.h
 *
 *  Created on: 28 lut 2016
 *      Author: Monika
 */

#pragma once
#include "board.h"
#include <iostream>

//sprawdzenie czy koniec gry

bool EndOfGame(board plansza) {

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			if (plansza.field[i][j] == plansza.field[i + 1][j])
			{
				return false;
			}
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			if (plansza.field[i][j] == plansza.field[i][j + 1])
			{
				return false;
			}
		}
	}

	return true;
}


