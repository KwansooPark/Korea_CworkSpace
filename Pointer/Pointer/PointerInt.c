#include <stdio.h>

/*
	포인터: 메모리의 주소를 저장하는 변수
*/

int main()
{
	/*int n;
	int* pn;	//pn이라는 이름의 정수형 포인터 선언

	n = 3;
	pn = &n;	//변수 n의 주소를 저장함 (초기화)

	printf("변수의 값: %d\n", n);
	printf("변수의 메모리 번지: %x\n", &n);
	printf("포인터의 값: %x\n", pn);
	printf("포인터의 메모리 번지: %x\n", &pn);

	//포인터가 가리키는 메모리의 값: 역참조
	printf("포인터가 가리키는 메모리의 값: %x\n", *pn);

	//자료형의 크기 비교: 포인터는 자료형에 무관하게 모두 8바이트이다.
	printf("%dbyte %dbyte\n", sizeof(n), sizeof(pn));*/

	//정수형 포인터 사용
	int a = 10;
	int* b;

	printf("a의 값은 %d\n", a);	// 10

	b = &a;
	*b = 20;	//20으로 변경

	printf("b가 가리키는 값은 %d\n", *b);
	printf("a의 값은 %d\n", a);	// 20


	return 0;
}
