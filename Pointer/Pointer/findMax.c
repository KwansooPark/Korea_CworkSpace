#include <stdio.h>

/*
	1. �迭���� �ִ밪 ã��
	2. ������ �迭���� �ִ밪 ã��
*/

int findMax(int, int);
int findMax2(int*, int*);
int main()
{
	int arr[] = { 21, 35, 73, 2, 97, 66 };
	int max1, max2;

	max1 = findMax(arr, 6); //�迭�� ������ �����Ѵ�.
	max2 = findMax(arr, );	//&arr[0]

	printf("�ִ�: %d %d\n", max1, max2);

	return 0;
}

int findMax2(int* a, int len)
{
	int maxVal, i;
	maxVal = *(a + 0);	//*a(�������� ��Ȯ��)
	for (i = 0; i < len; i++)
	{
		if ((a + i) > maxVal)
			maxVal = *(a + i);
	}
}

int findMax(int a[], int len)
{
	int maxVal, i; 

	maxVal = a[0]; //�ִ� ����
	for (i = 0; i < len; i++)
	{
		if (a[i] > maxVal)
			maxVal = a[i];
	}
	return maxVal; //�ִ� ��ȯ
}