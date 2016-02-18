#pragma once

#include<conio.h>
#include<iostream>

void wait()
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
				std::cout << "up";
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