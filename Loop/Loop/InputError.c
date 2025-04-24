#include <stdio.h>	//stdio → printf(), getchar() 를 위하여 작성한 것이다.

int main()
{
	/*
		숫자 입력 시 문자 입력으로 인한 오류 처리
	*/
	int num;

	/*printf("숫자를 입력하세요: ");
	scanf_s("%d", &num);

	printf("%d\n", num);*/

	char ch;
	/*printf("1개의 문자 입력: ");
	ch = getchar();
	printf("입력한 문자: %c", ch);*/

	int ch2;
	/*printf("1개의 문자 입력: ");
	ch2 = getchar();
	printf("입력한 문자: %c", ch2);*/

	// 문자 입력 시 오류 처리
	while (1)
	{
		printf("숫자를 입력하세요: ");
		if (scanf_s("%d", &num) == 1)
		{
			printf("%d\n", num);
			break;
		}
		while (getchar() != '\n'); // '\n' 이 나올 때까지 모든 문자 제거한다.
		printf("잘못된 입력입니다.\n");
	}

	return 0;
}

