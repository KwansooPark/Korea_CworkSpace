#include <stdio.h>

/*
	���(recursive) �˰���: �ڱ� �ڽ��� ȣ��(�Լ�)�ϴ� ���� ���Ѵ�.
	�Լ� ���ο� ���� �ڱ� �ڽ� �Լ�()
	���ѹݺ��� �ϹǷ� ���� ������ �ʼ���.
	if���� �����
*/

void sos(int n) {
	printf("Help me!\n");
	n--;
	if(n>0) //���� ����
	sos(n);
 }

/*
	n=4, sos(4), Help me!
	n=3, sos(3), Help me!
	n=2, sos(2), Help me!
	n=1, sos(1), Help me!
	n=0, �ݺ�����
*/

int main()
{
	sos(4);



	return 0;
}
