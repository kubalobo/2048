#pragma once

#include <iostream>
#include <cstdlib>
#include <iomanip>

#include "board.h"

void printer(board plansza)
{
	system("cls");	//czyszczenie ekranu - tylko windows!

	//Prymitywna drukarka - do rozwiniecia przez Weronike

	// wyœwietlanie górnego paska
	std::cout << "   " ;
	for (int i = 0; i < 27; i++)
		std::cout << "_" ;
		std::cout << std::endl;


	for (int i = 0; i < 4; i++)
	{
		std::cout << "  |" << std::setw(7) << "|" << std::setw(7) << "|" << std::setw(7) << "|" << std::setw(7) << "|" <<std::endl << "  "; // wyœwietlanie pionowych kresek
		for (int j = 0; j < 4; j++)
			if (plansza.field[j][i] == 0)
				std::cout << "|" << std::setw(6) << " "; // wstawianie elementu pustego
			else
				std::cout << "|" << std::setw(5) << plansza.field[j][i] << " "; // wstawianie liczby
		std::cout << "|" << std::endl << "  ";

		// wyœwietlanie dolnego paska
		for (int i = 0; i < 4; i++)
		{
			std::cout << "|";
			for (int i = 0; i < 6; i++)
			std::cout << "_";
		}
		std::cout << "|" << std::endl;


	}
}
