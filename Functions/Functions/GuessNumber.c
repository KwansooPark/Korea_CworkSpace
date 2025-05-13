#include <stdio.h>
#include <stdlib.h>	//난수 시
#include <time.h>

/*
	숫자 추측 게임
	- 컴퓨터가 난수를 생성
	- 사용자가 예측한 수 입력
		1. 정답
		2. 추측한 수 > 난수
		3. 추측한 수 < 난수
*/

int main()
{
	srand(time(NULL));
	int randNum;	//컴퓨터가 생성한 난수
	int guessNum;	//사용자가 추측한 수
	int count = 5;		//시도한 횟수

	randNum = rand() % 50 + 1;	// 1~50까지의 난수
	//printf("컴퓨터의 수: \n");

	while (1)
	{
		printf("나은 횟수 %d번\n", count--);
		printf("맞혀보세요(1~50 입력): ");
		scanf_s("%d", &guessNum);

		if (guessNum == randNum)
		{
			printf("정답이예요.\n");
			printf("컴퓨터의 수: %d\n", randNum);
			break;
		}
		else if (guessNum > randNum)
		{
			printf("큽니다!\n");
		}
		else
		{
			printf("작습니다!\n");
		}

		if (count == 0) {
			printf("남은 횟수가 0입니다. 아쉽게 실패했어요.");
			break;
		}
	}

	return 0;
}
