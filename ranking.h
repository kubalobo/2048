/*
 * ranking.h
 *
 *  Created on: 21 lut 2016
 *      Author: Karolina Kamiñska
 */

#pragma once

#include <iostream>
#include "board.h"
#include <fstream>
#include <string>


using namespace std;

string Names[10];
	unsigned int Scores[10];
	unsigned int score;
	string Name;

void Start()
{
	score =0;
		Name = "------";
		for (int q = 0; q<10; ++q)
				{
					Names[q] = Name;
					Scores[q] = score;
				}
}


void LoadData()
{
	// otwieranie pliku
	fstream open;
	open.open("ranking.txt", ios::in);

	//sprawdzanie, czy mamy dostep do pliku i czy istnieje
	if (open.good())
	{
		for (int i = 0; i <10; i++)
		{
			open >> Scores[i];
			open >> Names[i];
		}
	// zamykanie pliku
		open.close();
	}

}

void SaveData()
{
	//otwieranie pliku
	ofstream in ("ranking.txt");

	//petla zapisu danych
	for (int i = 0; i <10; ++i)
	{
		in << Scores[i];
		in << endl;
		in << Names[i];
		in << endl;
	}

	//zamykanie pliku
	in.close();

}

void Compare()
{
	for (int i = 0; i<10; ++i)
	{
		if (score> Scores[i])
		{
			for (int j = 8; j>i; --j)
			{
				Names[j] = Names[j+i];
				Scores[j] =Scores [j+i];
			}
			Scores[i] = score;
			Names[i] = Name;

			score = 0;
			Name = "Nowy";
		}
	}
}


void SetScore(board plansza, unsigned int score)
{
	//score = 0;
    for(int i=0; i<4; ++i)
    {
        for(int j=0; j<4; ++j)
        {
            int sum = plansza.field[i][j];
            score += sum;
        }
    }
}



void SetName(string player_name)
{
	Name = player_name;
}

unsigned int GetScore()
{
	return score;
}

bool GameOver()
{
	system ("cls");
	cout << "=========================" << endl;
	cout << "        KONIEC GRY       " << endl;
	cout << "=========================" << endl;
	cout << "Suma punktow: " << GetScore() << endl;
	cout << "Podaj swoje imie: " << endl;
	string namez;
	cin >> namez;
	SetName(namez);
	_getch();
	return 0;
}





/*void make_ranking()
{ fstream plik;
plik.open( "ranking.txt", std::ios::in | std::ios::out );
}

void show_ranking()
{

}

*/

/*fstream plik;
plik.open( "ranking.txt", std::ios::in | std::ios::out );
if( plik.good() == true )
{
    string dane;
    getline(plik,dane)
} else std::cout << "Dostep do pliku zostal zabroniony!" << std::endl;
plik.close();
*/

/*ifstream ifs("ranking.txt");
int cw = slistPDifferentWords(ifs);
cout << "Words: " << cw ;
*/
