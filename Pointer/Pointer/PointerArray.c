#include <stdio.h>

/*
	정수형 배열과 포인터
*/

int main()
{
	int a[4] = { 10, 20, 30, 40 };
	int* pa;
	int i;

	//배열의 이름은 배열의 시작주소이다.
	/*printf("%d %x %x\n", a[0], &a[0], a);	// a: 10 배열의 주소이다.
	printf("%d %x %x\n", a[1], &a[1], a+1); //a+1:20 배열의 주소이다.
	printf("%d %x %x\n", a[2], &a[2], a+2); //a+2:30 배열의 주소이다.
	printf("%d %x %x\n", a[3], &a[3], a+3); //a+3:40 배열의 주소이다.*/

	for (i = 0; i < 4; i++)
	{
		printf("%d %x %x\n", a[i], &a[i], i + 1);
	}

	printf("===========================================\n");

	//포인터의 배열(시작주소)을 저장
	pa = a;

	/*printf("포인터 pa의 값: %x\n", pa + 0);
	printf("포인터 pa가 가리키는 메모리의 값: %d\n", *pa);*/

	/*printf("%x %d\n", pa + 0, *(pa + 0));
	printf("%x %d\n", pa + 1, *(pa + 1));
	printf("%x %d\n", pa + 2, *(pa + 2));
	printf("%x %d\n", pa + 3, *(pa + 3));*/

	for (i = 0; i < 4; i++)
	{
		printf("%x %d\n", pa + i, *(pa + i));
	}

	//배열과 포인터의 크기
	printf("%dbyte %dbyte\n", sizeof(a), sizeof(pa));	
	// 배열: 4byte*4개 = 16바이트

	return 0;
}

