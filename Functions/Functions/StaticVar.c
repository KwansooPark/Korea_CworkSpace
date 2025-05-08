#include <stdio.h>

/*
	정적변수(Static Variable, 고정된 변수) 
	- 앞에 static 을 붙이면 정적 변수가 된다.(생성)
	- 값을 유지하고 공유하고 프로그램이 종료되면 소멸됨.
*/

void call()	//void 는 반환자료형이 없다.(= return 이 없다.)
{
	static int x = 0;
	x += 1;		// x = x + 1;
	printf("현재 호출은 %d번째입니다.\n", x);

}

int main()
{
	//call() 호출
	call();
	call();
	call();

	return 0;
}

