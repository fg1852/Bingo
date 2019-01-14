#pragma once

class Line
{
public:
	int randnum;
	int horizontal;
	int vertical;
	int r_diagonal;
	int l_diagonal;
	int BingoCheck(int* Board);
	int ComAI(int* comBoard,int* userBoard);
};