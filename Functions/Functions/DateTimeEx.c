#define _CRT_SECURE_NO_WARNINGS // localtime(&ct) 관련 오류 처리를 위한 명령
#include <stdio.h>
#include <time.h>

int main()
{
	// 날짜 표시
	time_t ct;	//현재 시간 변수 선언
	struct tm* now;	//구조체 변수 선언

	//현재 시간 가져오기
	ct = time(NULL);
	now = localtime(&ct); //&: 주소라는 의미, ct의 주소를 매개로 전달한다.

	printf("%d년\n", now->tm_year + 1900);
	printf("%d월\n", now->tm_mon + 1);
	printf("%d일\n", now->tm_mday);

	return 0;
}

