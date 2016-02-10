/*
 * board.h
 *
 *  Created on: 10 lut 2016
 *      Author: kubalobo
 */

#ifndef BOARD_H_
#define BOARD_H_

#include <vector>

struct board {

	int row[4];
	int column[4];

	board()
	{
		for(int i = 0; i < 5; i++)
		{
			row[i] = 0;
			column[i] = 0;
		}
	}
};



#endif /* BOARD_H_ */
