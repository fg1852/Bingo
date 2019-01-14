#pragma once
#include "Title.h"

class Select : public Board
{
private:
	int count = 0;
	int userbingo = 0;
	int combingo = 0;
	int c = 0;
	int comInput;
	int input;
public:
	void GameStart(int* userBoard, int* computerBoard);
	void InputValue(int* userBoard, int* computerBoard);
	int Cin(int* computerBoard,int* userBoard);
};