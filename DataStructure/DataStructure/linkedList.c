#include <stdio.h>

/*
	���� ����Ʈ
	- �ڱ� ���� ����ü: struct ���ο� ������ Ÿ���� ������ ��� ����
	- �����͸� �̿��� ��� ����� ��ȸ
*/

typedef struct {
	int data;
	struct List* next;	//�ڱ� ���� ����ü
}List;

int main()
{
	List x, y, z;	//����ü�� ����(���)
	//�ʱ�ȭ
	x.data = 10;
	y.data = 20;
	z.data = 30;

	//��� ����(linked List ����)
	x.next = &y;
	y.next = &z;
	z.next = NULL;	//z�� ������ ���(����Ʈ ��)

	//�����͸� ���: ����Ʈ ��ȸ
	List* p;
	p = &x;	//�ʱ�ȭ

	printf("%d %x\n", x.data, p->next); //10 d4f1f9f8

	p = p->next; 
	printf("%d %x\n", y.data, p->next); //20 d4f1fa28

	//��� ����(y ����)
	x.next = y.next;
	y.next = NULL;

	//��ü ���
	for (p = &x; p != NULL; p = p->next) {
		printf("%d ", p->data);
	}

	return 0;
}