﻿#include "CANIMAL.h"
#include <mmsystem.h>
CANIMAL::CANIMAL() { pos.X = pos.Y = speed = 0; }
CANIMAL::CANIMAL(int y, int spd) { pos.Y = y; speed = spd; }
CBird::CBird() : CANIMAL(BIRD_Y, BIRD_SPD)
{
	avatar[0] = { char(169), char(250), char(170) };	//⌐·¬	-·-
}
CDino::CDino() : CANIMAL(DINO_Y, DINO_SPD)
{
	avatar[0] = { ' ', char(244) };			// ⌠
	avatar[1] = "(0)";						//(0)
	avatar[2] = { char(217), 'L', 'L' };	//┘LL
}

bool CANIMAL::inContact(Point ppos)
{
	return pos.X <= ppos.X && ppos.X <= pos.X + 2
		&& pos.Y == ppos.Y;
	//Việc xét điểm y còn tuỳ vào kích cỡ của animal
}

void CANIMAL::speak() { }

void CBird::speak()
{
	PlaySound("C:\\Users\\ACER\\Documents\\GitHub\\lthdt-18clc2-03\\[Road Crossing]\\sound\\Bird.wav", NULL, SND_SYNC);
}

void CDino::speak()
{
	PlaySound("C:\\Users\\ACER\\Documents\\GitHub\\lthdt-18clc2-03\\[Road Crossing]\\sound\\Dino.wav", NULL, SND_SYNC);
}