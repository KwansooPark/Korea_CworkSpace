#include <stdio.h>
// 사용자 정의 헤더파일은 큰따옴표를 사용해야 한다.
#include "Calculator.h"

//int add(int x, int y)
//{
//
//
//	return x + y;
//}

int main()
{
	// 지역 변수 선언
	int x = 3, y = 4;
	int value1, value2;

	// 연사 및 함수 호출
	count++;
	value1 = add(x, y);
	value2 = factorial(y);

	//출력
	printf("count = %d\n", count);
	printf("value1 = %d\n", value1);
	printf("%d! = %d\n", y, value2);
	printf("5! = %d\n", factorial(5));

	system("pause");	//exe 실행파일이 꺼지지 않도록 함.

	return 0;
}

