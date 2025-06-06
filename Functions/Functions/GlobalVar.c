#include <stdio.h>

//전역변수와 지역변수를 사용
/*
	지역변수: 함수 또는 제어문(조건, 반복) 블럭{} 내부에서 생성되고 
			호출되거나 사용된 후 메모리에서 삭제(소멸)된다. (생명주기라고 한다.)
	
	전역변수: main() 위에 사용(생성)되어 전체 범위에서 영향을 미치고,
			프로그램이 종료되면 소멸된다.
*/

int x = 1;	//전역변수
int add10();	//함수 선언부(프로토타입) 명시
int main()
{
	
	int value;	//main()의 지역변수

	// add10() 호출
	value = add10();
		
	printf("%d\n", value);
	printf("%d\n", x);

	return 0;
}

// 어떤 수에 10을 더하는 함수
int add10()		//반환자료형 함수이름()
{
	int x = 1;	//지역변수(Local Variable)
	x = x + 10;

	return x;
}

