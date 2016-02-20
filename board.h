#ifndef BOARD_H_
#define BOARD_H_

struct board {

	int field[4][4]; //[x][y] (matematycznie) - [kolumna][wiersz] - numerowane od zera do trzech

	board()
	{
		for (int i = 0; i < 4; i++)
			for (int j = 0; j < 4; j++)
				field[i][j] = 0;
	}
};



#endif /* BOARD_H_ */
