﻿#pragma once

#include "COBJECT.h"

class CPEOPLE : public COBJECT
{
public:
	CPEOPLE();
	void setAvatar(int i);

	//void Move(char button) { } //Gọi 4 hàm hướng đi bên dưới
	//void up() { }
	//void left() { }
	//void right() { }
	//void down() { }

	//bool inContact(CVEHICLE v);
	//bool inContact(CANIMAL a);
	//CVEHICLE nowContact(const CVEHICLE*& v); //Trả về vehicle đang va chạm với people
	//CANIMAL nowContact(const CANIMAL*& a);

	//bool isFinish() { return true; }
	bool isDead();

	int getIcon();
	int setIcon(int i);

private:
	int icon;
	bool alive;
};