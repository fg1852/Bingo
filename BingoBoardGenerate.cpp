#include "main.h"

void BingoBoardGenerate(int* userBoard, int* computerBoard)
{
	Board print;
	print.Title();
	int a = 0, i = 0;
	for (int j = 0; j < 25;)
	{
		if (a == 0)
		{
			cout << setw(5) << userBoard[i];
			i++;
			if (i % SIZE == 0 && i != 0)
			{
				a = 1;
				cout << "		";
			}
		}
		if (a == 1)
		{
			cout << setw(5) << computerBoard[j];
			j++;
			if (j % SIZE == 0)
			{
				a = 0;
				cout << endl;
			}
		}
	}
	i = 0;
	cout << endl;
}