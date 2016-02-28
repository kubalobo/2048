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
		for (int j = 0; j < 3; j++) {
			if (plansza.field[i][j] != plansza.field[i + 1][j] &&
				plansza.field[i][j] != 0 &&
				plansza.field[i+1][j] != 0) {
				return true;
				//std::cout << "END OF GAME!!!";
			}
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (plansza.field[i][j] != plansza.field[i][j + 1] &&
				plansza.field[i][j] != 0 &&
				plansza.field[i][j + 1] != 0) {
				return true;
				//std::cout << "END OF GAME!!!";
			}
		}
	}

	return false;
}


