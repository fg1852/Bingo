#include "BingoCheck.h"
#include "main.h"

int Line::ComAI(int* comBoard, int* userBoard)
{
	while(1)
	{
		randnum = rand() % 25;
		if (comBoard[randnum] != 88)
		{
			break;
		}
	}
	return comBoard[randnum];
}