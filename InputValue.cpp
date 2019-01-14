#include "main.h"

void Select::InputValue(int* userBoard, int* computerBoard)
{
	input = Cin(computerBoard, userBoard);
	Sleep(1000);
	for (int k = 0; k < (25); k++)
	{
		if (userBoard[k] == input)
			userBoard[k] = CHECK;
		if (computerBoard[k] == input)
			computerBoard[k] = CHECK;
	}
}