#include <stdio.h>

int main()
{
	// 변수값 교환하기
	int x = 1;
	int y = 2;
	int temp; // 교환을 위한 변수

	printf("===== 교환 전 =====\n");
	printf("x = %d, y = %d\n", x, y);

	// 교환
	temp = x;	//같다는 의미가 아니라 우측 값을 좌측 값에 대입한다는 의미이다.
	x = y;
	y = temp;

	printf("===== 교환 후 =====\n");
	printf("x= %d, y = %d\n", x, y);

	printf("\n");

	// 복합 대입 연산자 -> 산술 연산자 + 대입 연산자

	int val = 10;
	val += 3;	//val = val + 3;
	printf("%d\n", val);	// 13

	val -= 3;	//val = val - 3;
	printf("%d\n", val);	// 10

	val *= 3;	//val = val * 3;
	printf("%d\n", val);	// 30

	val /= 3;	//val = val / 3;
	printf("%d\n", val);	// 10

	val %= 3;	//val = val % 3;
	printf("%d\n", val);	// 1


	return 0;
}