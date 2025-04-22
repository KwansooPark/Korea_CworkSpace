#include <stdio.h>
#define RATE_KPH_MPH 1.6093	//변환상수

/*
	KPH(Kilometer per hour)를 MPH(Mile per hour)로 변환
*/


int main()
{
	int kph;	//Kilometer per hour
	double mph;	//mile per hour

	printf("당신의 구속을 입력하세요[KPH]: ");
	scanf_s("%d\n", &kph);

	// 변환 : 킬로미터 / 변환상수
	mph = kph / RATE_KPH_MPH;

	printf("당신의 구속은 %.2lf[MPH]입니다.\n", mph);


	return 0;
}