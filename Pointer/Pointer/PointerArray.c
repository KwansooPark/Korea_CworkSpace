#include <stdio.h>

/*
	������ �迭�� ������
*/

int main()
{
	int a[4] = { 10, 20, 30, 40 };
	int* pa;
	int i;

	//�迭�� �̸��� �迭�� �����ּ��̴�.
	/*printf("%d %x %x\n", a[0], &a[0], a);	// a: 10 �迭�� �ּ��̴�.
	printf("%d %x %x\n", a[1], &a[1], a+1); //a+1:20 �迭�� �ּ��̴�.
	printf("%d %x %x\n", a[2], &a[2], a+2); //a+2:30 �迭�� �ּ��̴�.
	printf("%d %x %x\n", a[3], &a[3], a+3); //a+3:40 �迭�� �ּ��̴�.*/

	for (i = 0; i < 4; i++)
	{
		printf("%d %x %x\n", a[i], &a[i], i + 1);
	}

	printf("===========================================\n");

	//�������� �迭(�����ּ�)�� ����
	pa = a;

	/*printf("������ pa�� ��: %x\n", pa + 0);
	printf("������ pa�� ����Ű�� �޸��� ��: %d\n", *pa);*/

	/*printf("%x %d\n", pa + 0, *(pa + 0));
	printf("%x %d\n", pa + 1, *(pa + 1));
	printf("%x %d\n", pa + 2, *(pa + 2));
	printf("%x %d\n", pa + 3, *(pa + 3));*/

	for (i = 0; i < 4; i++)
	{
		printf("%x %d\n", pa + i, *(pa + i));
	}

	//�迭�� �������� ũ��
	printf("%dbyte %dbyte\n", sizeof(a), sizeof(pa));	
	// �迭: 4byte*4�� = 16����Ʈ

	return 0;
}

