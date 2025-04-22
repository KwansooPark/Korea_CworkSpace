#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	입력 처리
	scanf(입력형식, 데이터저장 변수)
	scanf_s(입력형식, 데이터저장 변수)
	& : 변수 앞에 주소 연산자를 앞에 붙임
*/

int main()
{

	int iNum;
	float fNum;

	printf("정수 입력: ");
	scanf_s("%d", &iNum);

	printf("입력된 정수 : %d\n", iNum);
	scanf_s("%f", &fNum);

	printf("입력된 정수: %d\n", iNum);
	printf("입력된 정수의 주소: %x\n", &iNum);

	printf("입력된 실수: %f\n", fNum);
	printf("입력된 실수의 주소: %f\n", &fNum);


	return 0;
}