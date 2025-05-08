#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	//난수(무작위수, 랜덤수) 사용
	//srand(10);	//시드(seed) 배정: 항상 똑같이 나옴(srand 값을 정했기 때문)
	srand(time(NULL));

	/*int rndVal = rand();
	printf("%d\n,", rndVal);*/
	
	//동전(2가지 경우의 수)
	int coin = rand() % 2;	// 0 or 1 이 나온다.
	printf("%d\n,", coin);

	//앞면: 0, 뒷면: 1
	if (coin % 2 == 0)
	{
		printf("앞면\n");

	}
	else
	{
		printf("뒷면\n");
	}
	return 0;
}

