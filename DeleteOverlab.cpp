#include "main.h"

int* Overlab::DeleteOverlab(int mode)
{
	int* userBoard = (int*)malloc(sizeof(int) * 25);
	int* computerBoard = (int*)malloc(sizeof(int) * 25);
	for (int i = 0; i < 25;)
	{
		int temp = rand() % 50;
		if (mode == TRUE)
		{
			if (checkUserExistOfNum[temp] == FALSE)
			{
				checkUserExistOfNum[temp] = TRUE;
				userBoard[i] = temp + 1;
				i++;
			}
		}
		else
			if (checkComputerExistOfNum[temp] == FALSE)
			{
				checkComputerExistOfNum[temp] = TRUE;
				computerBoard[i] = temp + 1;
				i++;
			}
	}
	return (mode == TRUE) ? userBoard : computerBoard;
}