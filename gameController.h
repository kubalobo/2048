#pragma once

#include<conio.h>
#include<iostream>
#include "board.h"

enum direction
{
	UP = 1,
	RIGHT = 2,
	DOWN = 3,
	LEFT = 4
};

board move(board plansza, enum direction arrow);



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
				plansza = move(plansza, DOWN);
				printer(plansza);
				break;
			case 75: //strza³ka w lewo
				plansza = move(plansza, LEFT);
				printer(plansza);
				break;
			case 77: //strza³ka w prawo
				plansza = move(plansza, RIGHT);
				printer(plansza);
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
				if (plansza.field[i][j] != 0)
				{
					int temp = 1;
					while (plansza.field[i][j - temp] == 0 && j - temp > 0)
						temp++;

					if (plansza.field[i][j] == plansza.field[i][j - temp])
					{
						plansza.field[i][j - temp] *= 2;
						plansza.field[i][j] = 0;
					}
					else if (j - temp == 0 && plansza.field[i][j - temp] == 0)
					{
						plansza.field[i][0] = plansza.field[i][j];
						plansza.field[i][j] = 0;
					}
					else if (temp == 1)
					{
						continue;
					}
					else
					{
						plansza.field[i][j - temp + 1] = plansza.field[i][j];
						plansza.field[i][j] = 0;
					}
				}
			}
		}
		break;
	case RIGHT:
		for (int i = 0; i < 4; i++)
		{
			for (int j = 2; j >= 0; j--)
			{
				if (plansza.field[j][i] != 0)
				{
					int temp = 1;
					while (plansza.field[j + temp][i] == 0 && j + temp < 3)
						temp++;

					if (plansza.field[j][i] == plansza.field[j + temp][i])
					{
						plansza.field[j + temp][i] *= 2;
						plansza.field[j][i] = 0;
					}
					else if (j + temp == 3 && plansza.field[j + temp][i] == 0)
					{
						plansza.field[3][i] = plansza.field[j][i];
						plansza.field[j][i] = 0;
					}
					else if (temp == 1)
					{
						continue;
					}
					else
					{
						plansza.field[j + temp - 1][i] = plansza.field[j][i];
						plansza.field[j][i] = 0;
					}
				}
			}
		}
		break;
	case DOWN:
		for (int i = 0; i < 4; i++)
		{
			for (int j = 2; j >= 0; j--)
			{
				if (plansza.field[i][j] != 0)
				{
					int temp = 1;
					while (plansza.field[i][j + temp] == 0 && j + temp < 3)
						temp++;

					if (plansza.field[i][j] == plansza.field[i][j + temp])
					{
						plansza.field[i][j + temp] *= 2;
						plansza.field[i][j] = 0;
					}
					else if (j + temp == 3 && plansza.field[i][j + temp] == 0)
					{
						plansza.field[i][3] = plansza.field[i][j];
						plansza.field[i][j] = 0;
					}
					else if (temp == 1)
					{
						continue;
					}
					else
					{
						plansza.field[i][j + temp - 1] = plansza.field[i][j];
						plansza.field[i][j] = 0;
					}
				}
			}
		}
		break;
	case LEFT:
		for (int i = 0; i < 4; i++)
		{
			for (int j = 1; j < 4; j++)
			{
				if (plansza.field[j][i] != 0)
				{
					int temp = 1;
					while (plansza.field[j - temp][i] == 0 && j - temp > 0)
						temp++;

					if (plansza.field[j][i] == plansza.field[j - temp][i])
					{
						plansza.field[j - temp][i] *= 2;
						plansza.field[j][i] = 0;
					}
					else if (j - temp == 0 && plansza.field[j - temp][i] == 0)
					{
						plansza.field[0][i] = plansza.field[j][i];
						plansza.field[j][i] = 0;
					}
					else if (temp == 1)
					{
						continue;
					}
					else
					{
						plansza.field[j - temp + 1][i] = plansza.field[j][i];
						plansza.field[j][i] = 0;
					}
				}
			}
		}
		break;
	}


	return plansza;
}
