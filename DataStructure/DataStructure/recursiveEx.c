#include <stdio.h>

/*
	재귀(recursive) 알고리즘: 자기 자신을 호출(함수)하는 것을 말한다.
	함수 내부에 같은 자기 자신 함수()
	무한반복을 하므로 종료 조건이 필수다.
	if문을 사용함
*/

void sos(int n) {
	printf("Help me!\n");
	n--;
	if(n>0) //종료 조건
	sos(n);
 }

/*
	n=4, sos(4), Help me!
	n=3, sos(3), Help me!
	n=2, sos(2), Help me!
	n=1, sos(1), Help me!
	n=0, 반복종료
*/

int main()
{
	sos(4);



	return 0;
}
