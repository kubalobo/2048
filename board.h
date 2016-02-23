#pragma once

struct board {

	int field[4][4]; //[x][y] (matematycznie) - [kolumna][wiersz] - numerowane od zera do trzech

	//Konstruktor domyslny - wypelnia wszystko zerami - zero to brak zadnego elementu
	board()
	{
		for (int i = 0; i < 4; i++)
			for (int j = 0; j < 4; j++)
				field[i][j] = 0;
	}
};
