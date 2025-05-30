#include <stdio.h>
#include <math.h>	//round(), floor(), ceil(), abs(), pow(), sqrt()

/*
	수학 관련 함수: math.h 파일 필요
*/


int main()
{
	
	//반올림: round()
	printf("%.1f\n", round(2.54));	//3.0
	printf("%.1f\n", round(2.14));	//2.0

	//내림(버림): floor()
	printf("%.1f\n", floor(2.54));	//2.0
	printf("%.1f\n", floor(2.54));	//2.0

	//올림: ceil()
	printf("%.1f\n", ceil(2.54));	//3.0
	printf("%.1f\n", ceil(2.14));	//3.0

	//절대값: abs()
	printf("%d\n", abs(-8));	//8
	printf("%d\n", abs(8));		//8

	//거듭제곱: pow()
	printf("%.f\n", pow(2, 4));	//16
	printf("%.f\n", pow(10, 3));	//1000

	//제곱근: sqrt()
	printf("%.f\n", sqrt(16));	//4
	printf("%.f\n", sqrt(100));	//100

	return 0;
}



