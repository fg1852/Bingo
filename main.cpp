#include "main.h"

int main()
{
	srand(time(NULL));

	// ����� ������ ����
	User user;
	int* userB = user.UserRandNumGenerate();
	// ��ǻ�� ������ ����
	Computer computer;
	int* comB = computer.ComRandNumGenerate();
	// ������ ���
	BingoBoardGenerate(userB, comB);
	// ���� ����
	Select select;
	select.GameStart(userB, comB);

	free(userB);
	free(comB);
	return 0;
}
