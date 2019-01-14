#include "main.h"

int main()
{
	srand(time(NULL));

	// 사용자 빙고판 생성
	User user;
	int* userB = user.UserRandNumGenerate();
	// 컴퓨터 빙고판 생성
	Computer computer;
	int* comB = computer.ComRandNumGenerate();
	// 빙고판 출력
	BingoBoardGenerate(userB, comB);
	// 숫자 대입
	Select select;
	select.GameStart(userB, comB);

	free(userB);
	free(comB);
	return 0;
}
