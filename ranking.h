/*
 * ranking.h
 *
 *  Created on: 21 lut 2016
 *      Author: Karolina Kamiñska
 */

#pragma once

#include <iostream>
#include "board.h"


using namespace std;

int max(board plansza)
{
    int i, j, max;
    for(i=0;i<4;++i)
    {
    	max = plansza.field[i][0];
        for(j=0;j<4;++j)
        {
            if(plansza.field[i][j]>max) max=plansza.field[i][j];
        }
    }
 return max;
}


void make_ranking()
{

}

void show_ranking()
{

}
