#include "main.h"

void Select::GameStart(int* userBoard, int* computerBoard)
{
	Line l;
	while (count < 50)
	{
		InputValue(userBoard, computerBoard);

		system("cls");

		Title();

		for (int j = 0; j < 25;)
		{
			if (a == 0)
			{
				if (userBoard[i] == CHECK)
				{
					cout << setw(5) << 'X';
					i++;
				}
				else
				{
					cout << setw(5) << userBoard[i];
					userbingo = l.BingoCheck(userBoard);
					i++;
				}
				if (i % SIZE == 0 && i != 0)
				{
					a = 1;
					cout << "		";
				}
			}
			if (a == 1)
			{
				if (computerBoard[j] == CHECK)
				{
					cout << setw(5) << 'X';
					j++;
				}
				else
				{
					cout << setw(5) << computerBoard[j];
					combingo = l.BingoCheck(computerBoard);
					j++;
				}
				if (j % 5 == 0)
				{
					a = 0;
					cout << endl;
				}
			}
		}
		i = 0;
		count++;
		c++;
		
		if (userbingo == 4) 
		{
			cout << "User Win!" << endl;
			break;
		}
		else if (combingo == 4)
		{
			cout << "Computer Win!" << endl;
			break;
		}
			
			
	}
}