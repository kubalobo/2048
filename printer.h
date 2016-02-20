#pragma once

#include <iostream>
#include <cstdlib>

#include "board.h"

void printer(board plansza)
{
	system("cls");	//czyszczenie ekranu
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			std::cout << plansza.field[j][i] << " ";
		std::cout << std::endl;
	}
}
