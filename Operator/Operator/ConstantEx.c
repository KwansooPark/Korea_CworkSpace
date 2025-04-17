#include <stdio.h>
#define PI 3.1415
/*
	상수(constant) - 변경될 수 없는 값
	1. 매크로(macro) 상수
	2. const 자료형

	전처리기 : #include, #define -> 텍스트 전환 동작
	컴파일러 : 변수 등의 메모리 사용해서 기계어로 번역
*/

int main()
{
	const int MIN_NUM = 1;	//상수
	const int MAX_NUM = 100;	//상수

	//MIN_NUM = 0;	//값을 변경할 수 없음(재할당 안됨)

	printf("%d\n", MIN_NUM);
	printf("%d\n", MAX_NUM);

	// 원의 넓이 계산
	int radius = 10;
	//const double PI = 3.1415;
	int area;

	area = PI * radius * radius;

	printf("%.2lf\n", area);


	return 0;
}
