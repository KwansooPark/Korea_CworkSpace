#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	�Է� ó��
	scanf(�Է�����, ���������� ����)
	scanf_s(�Է�����, ���������� ����)
	& : ���� �տ� �ּ� �����ڸ� �տ� ����
*/

int main()
{

	int iNum;
	float fNum;

	printf("���� �Է�: ");
	scanf_s("%d", &iNum);

	printf("�Էµ� ���� : %d\n", iNum);
	scanf_s("%f", &fNum);

	printf("�Էµ� ����: %d\n", iNum);
	printf("�Էµ� ������ �ּ�: %x\n", &iNum);

	printf("�Էµ� �Ǽ�: %f\n", fNum);
	printf("�Էµ� �Ǽ��� �ּ�: %f\n", &fNum);


	return 0;
}