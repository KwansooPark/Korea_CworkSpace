#include <stdio.h>
#include <time.h>	//time()
#include <Windows.h>

/*
	시간 함수: time.h 포함한다.
	- time.h 자료형을 사용한다.
*/

int main()
{
	time_t now;
	//long now;
	now = time(NULL);	//time(NULL): 시간이 계속 흐름을 의미한다.

		//유닉스(운영체제) 사용을 기준으로 한다.
		//초(second) 기준으로 한다.
	printf("1970년 1월 1일(0시 0분 0초)이후 %ld초\n", now);	//ld: long dicimal
	
	//일(day)로 환산
	printf("1970년 1월 1일(0시 0분 0초)이후 %ld일\n", now / (24 * 60 * 60));

	//년(year)으로 환산
	printf("1970년 1월 1일(0시 0분 0초)이후 %ld년\n", now / (365	*24 * 60 * 60));


	//수행 시간 측정
	/*time_t start, end;

	start = tiem(NULL);	//시작 시간
	printf("시작 시각: %ld초\n", start);

	// 1~10까지 출력
	for (int i = 1; i <= 10; i++)
	{
		printf("%d\n", i);
		Sleep(500);	//
	}

	end = time(NULL);
	printf("종료 시각: %ld초\n", end);
	printf("수행 시간: %ld초\n", (end - start));*/


	clock_t start, end;
	double elapsedTime; //소요시간

	start = clock();
	// 1~10까지 출력
	for (int i = 1; i <= 10; i++)
	{
		printf("%d\n", i);
		Sleep(500);	//
	}
	end = clock();	//종료시간

	// CLOCKS_PER_SEC: 초당 시각 상수 (대문자로 써져있으면 상수이다.)
	elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
	printf("소요 시간: %.2lf초\n", elapsedTime);

	return 0;
}

