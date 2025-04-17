#include <stdio.h> // standard input output header 의 약자임
/*
	프로그램명 : Hello~ World를 출력하는 프로그램
	작성자: 박관수



*/
int main()
{
	// 출력 함수 - printf()
	// 문장의 끝은 필수적으로 세미콜론(;)으로 끝낸다.
	// '\n'은 줄바꿈 특수문자이다.
	// 문자 출력 : 큰따옴표로 묶는다.
	// 서식문자 : %s 를 사용한다.
	printf(" Hello~ World! \n");
	printf(" 안녕~ 세계야! \n");
	printf(" %s\n", "Hello~ World!");
	// 한 문자일 경우는 작은 따옴표로 묶는다.
	// 서식문자일 경우는 %c 를 사용한다.
	printf("C언어 입문 학점이 %c입니다. \n", 'A');
	
	// 숫자 : 정수(%d), 실수(%f)
	printf("%d\n", 10);
	printf("%.3f\n", 2.54);
	printf("%d\n", 4+5);
	printf("%d\n", 4-5); // 복사는 ctrl + d 이다.
	printf("%d\n", 4*5);
	printf("%.2f\n", 4.0/5.0);
	



	return 0;
}