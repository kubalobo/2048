/*
 * board.h
 *
 *  Created on: 10 lut 2016
 *      Author: kubalobo
 */

#ifndef BOARD_H_
#define BOARD_H_

struct board {

	int field[4][4];

	board()
	{
		for (int i = 0; i < 4; i++)
			for (int j = 0; j < 4; j++)
				field[i][j] = 0;
	}
};



#endif /* BOARD_H_ */
