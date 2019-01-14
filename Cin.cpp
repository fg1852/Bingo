#include "main.h"

int Select::Cin(int* computerBoard, int* userBoard)
{
	Line l;
	if (c % 2 == 0)
	{
		cin >> input;
		cout << "User : " << input << endl;
		return input;
	}
	if (c % 1 == 0)
	{
		comInput = l.ComAI(computerBoard, userBoard);
		cout << "Com : " << comInput << endl;
		return comInput;
	}
}