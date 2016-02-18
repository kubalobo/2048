#pragma once

#include<conio.h>
#include<iostream>

board move(board plansza, enum direction arrow);

enum direction
{
	UP = 1,
	RIGHT = 2,
	DOWN = 3,
	LEFT = 4
};

void gameController(board plansza)
{
	bool koniec = false;
	while (koniec == false)
	{
		unsigned char znak = _getch();
		switch (znak)
		{
		case 0: //klawisze specjalne (czasem zero czasem 224 - zale¿ne od pc'ta chyba)
		case 224: //klawisze specjalne
			znak = _getch();
			switch (znak)
			{
			case 72: //strza³ka w górê
				plansza = move(plansza, UP);
				printer(plansza);
				break;
			case 80: //strza³ka w dó³
				break;
			case 75: //strza³ka w lewo
				break;
			case 77: //strza³ka w prawo
				break;
			}
			znak = 0;
			break;
		case 13: //ENTER
			break;
		case 27: //ESC
			koniec = true;
			break;
		}
	}
}

board move(board plansza, enum direction arrow)
{
	switch (arrow)
	{
	case UP:
		for (int i = 0; i < 4; i++)
		{
			for (int j = 1; j < 4; j++)
			{
				int temp = 1;
				while (plansza.field[i][j - temp] == 0)
					temp--;
				
				if (plansza.field[i][j] == plansza.field[i][j - temp])
				{
					plansza.field[i][j - temp] = plansza.field[i][j - temp] * 2;
					plansza.field[i][j] = 0;
				}
				else if (j - temp < 0)
				{
					plansza.field[i][0] = plansza.field[i][j];
					plansza.field[i][j] = 0;
				}
				else
				{
					plansza.field[i][j - temp + 1] = plansza.field[i][j];
					plansza.field[i][j] = 0;
				}
			}
		}
		break;
	case RIGHT:
		break;
	case DOWN:
		break;
	case LEFT:
		break;
	}

	

	return plansza;
}