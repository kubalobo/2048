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
		case 0: //klawisze specjalne (czasem zero czasem 224 - zale�ne od pc'ta chyba)
		case 224: //klawisze specjalne
			znak = _getch();
			switch (znak)
			{
			case 72: //strza�ka w g�r�
				std::cout << "up";
				break;
			case 80: //strza�ka w d�
				break;
			case 75: //strza�ka w lewo
				break;
			case 77: //strza�ka w prawo
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