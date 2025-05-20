#include <stdio.h>

/*
	값을 저장하는 변수 : 메모리의 할당된 공간에 값을 저장한다.
	포인터 : 메모리의 할당된 공간에 주소를 저장(주소 연산자: &)
*/

void calcSum(x, y);
int main()
{
	//x에서 y까지 더하기
	calcSum(1, 5);
	calcSum(2, 5);

	/*
	int x = 10;
	int* ptr = &x;

	// %p, %x -> 주소에 대응하는 서식 기호
	printf("%d %p\n", x, &x);
	printf("%d %p\n", *ptr, ptr); //역참조로 값에 접근(*ptr)
	*/

	return 0;
}

void calcSum(x, y)
{
	int i;
	int sum = 0;

	for (i = x; i <= y; i++)
	{
		sum = sum + i;

	}
	printf("%d\n", sum);
}