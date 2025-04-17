#include <stdio.h>
/*
	 자료형의 변환
*/

int main()
{
	// 묵시적 형변환(자동 형변환)
	int iNum = 20;
	float fNum = iNum;	//큰 자료형 = 작은 자료형
	double dNum = 2.54;
	int iNum2;

	print("%d\n", iNum);
	print("%.1f\n", fNum);	// 20.0
	print("%.1f\n", iNum + fNum);	//40.0

	// 명시적 형변환(강제 형변환)
	// 자료형을 소괄호로 묶어 준다 ex) (int), (double)

	iNum2 = (int)dNum;
	print("%d\n", iNum2);	//2

	// 연산
	dNum = 1.2;
	fNum = 0.9F;	// double 이 기본이고 float 가 기본이 아니기 때문에 F 를 붙여준다.

	iNum = (int)dNum + (int)fNum;	// 1+0 = 1
	printf("%d\n", iNum); 

	iNum = (int)(dNum + fNum);	//2
	printf("%d\n", iNum);

	return 0;

}