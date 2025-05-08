#include <stdio.h>
#include <time.h>	//time()
#include <Windows.h>

/*
	�ð� �Լ�: time.h �����Ѵ�.
	- time.h �ڷ����� ����Ѵ�.
*/

int main()
{
	time_t now;
	//long now;
	now = time(NULL);	//time(NULL): �ð��� ��� �帧�� �ǹ��Ѵ�.

		//���н�(�ü��) ����� �������� �Ѵ�.
		//��(second) �������� �Ѵ�.
	printf("1970�� 1�� 1��(0�� 0�� 0��)���� %ld��\n", now);	//ld: long dicimal
	
	//��(day)�� ȯ��
	printf("1970�� 1�� 1��(0�� 0�� 0��)���� %ld��\n", now / (24 * 60 * 60));

	//��(year)���� ȯ��
	printf("1970�� 1�� 1��(0�� 0�� 0��)���� %ld��\n", now / (365	*24 * 60 * 60));


	//���� �ð� ����
	/*time_t start, end;

	start = tiem(NULL);	//���� �ð�
	printf("���� �ð�: %ld��\n", start);

	// 1~10���� ���
	for (int i = 1; i <= 10; i++)
	{
		printf("%d\n", i);
		Sleep(500);	//
	}

	end = time(NULL);
	printf("���� �ð�: %ld��\n", end);
	printf("���� �ð�: %ld��\n", (end - start));*/


	clock_t start, end;
	double elapsedTime; //�ҿ�ð�

	start = clock();
	// 1~10���� ���
	for (int i = 1; i <= 10; i++)
	{
		printf("%d\n", i);
		Sleep(500);	//
	}
	end = clock();	//����ð�

	// CLOCKS_PER_SEC: �ʴ� �ð� ��� (�빮�ڷ� ���������� ����̴�.)
	elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
	printf("�ҿ� �ð�: %.2lf��\n", elapsedTime);

	return 0;
}

