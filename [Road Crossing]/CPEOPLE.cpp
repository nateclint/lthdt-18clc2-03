#include "CPEOPLE.h"
#include "Constants.h"

#include <iostream>
using namespace std;

CPEOPLE::CPEOPLE()
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO cbsi;
	GetConsoleScreenBufferInfo(console, &cbsi);
	
	icon = PLAYER_SYMBOL;
	pos = { cbsi.srWindow.Right / 2, cbsi.srWindow.Bottom };
	alive = true;
}

//bool CPEOPLE::inContact(CVEHICLE v)
//{
//	return v.inContact(pos);
//}
//bool CPEOPLE::inContact(CANIMAL a)
//{
//	return a.inContact(pos);
//}
//CVEHICLE CPEOPLE::nowContact(const CVEHICLE*& v)
//{
//	for (int i = 0; i < MAX_TRUCK + MAX_CAR; i++)
//	{
//		if (inContact(v[i]))
//			return v[i];
//	}
//}
//CANIMAL CPEOPLE::nowContact(const CANIMAL*& a)
//{
//	for (int i = 0; i < MAX_DINO + MAX_BIRD; i++)
//	{
//		if (inContact(a[i]))
//			return a[i];
//	}
//}

bool CPEOPLE::isDead()
{
	return true;
}

void CPEOPLE::draw(char s, COORD pos)
{
	if (s == ' ')
	{
		GotoXY(pos.X, pos.Y);
		cout << "  ";
		GotoXY(pos.X, pos.Y + 1);
		cout << "   ";
		GotoXY(pos.X, pos.Y + 2);
		cout << "  ";
	}
	else
	{
		GotoXY(pos.X, pos.Y);
		cout << ' ' << s;
		GotoXY(pos.X, pos.Y + 1);
		cout << '-' << (char)219 << '-';
		GotoXY(pos.X, pos.Y + 2);
		cout << ' ' << '^';
	}
}