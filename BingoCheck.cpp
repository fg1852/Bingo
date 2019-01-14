#include "BingoCheck.h"
#define CHECK 88
int Line::BingoCheck(int* Board)
{
	horizontal = 0;
	vertical = 0;
	l_diagonal = 0;
	r_diagonal = 0;
	int sumBingo = 0;
	for (int k = 0; k < 5; k++)
	{
		if (Board[k * 5] == CHECK && Board[k * 5 + 1] == CHECK && Board[k * 5 + 2] == CHECK && Board[k * 5 + 3] == CHECK && Board[k * 5 + 4] == CHECK)
			horizontal++;
		if (Board[k] == 88 && Board[k + 5] == CHECK && Board[k + 10] == CHECK && Board[k + 15] == CHECK && Board[k + 20] == CHECK)
			vertical++;
	}
	if (Board[0] == CHECK && Board[6] == CHECK && Board[12] == CHECK && Board[18] == CHECK && Board[24] == CHECK)
		l_diagonal++;
	if (Board[4] == CHECK && Board[8] == CHECK && Board[12] == CHECK && Board[16] == CHECK && Board[20] == CHECK)
		r_diagonal++;

	sumBingo = horizontal + vertical + l_diagonal + r_diagonal;
	return sumBingo;
}

