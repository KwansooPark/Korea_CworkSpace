#include <stdio.h>	//stdio �� printf(), getchar() �� ���Ͽ� �ۼ��� ���̴�.

int main()
{
	/*
		���� �Է� �� ���� �Է����� ���� ���� ó��
	*/
	int num;

	/*printf("���ڸ� �Է��ϼ���: ");
	scanf_s("%d", &num);

	printf("%d\n", num);*/

	char ch;
	/*printf("1���� ���� �Է�: ");
	ch = getchar();
	printf("�Է��� ����: %c", ch);*/

	int ch2;
	/*printf("1���� ���� �Է�: ");
	ch2 = getchar();
	printf("�Է��� ����: %c", ch2);*/

	// ���� �Է� �� ���� ó��
	while (1)
	{
		printf("���ڸ� �Է��ϼ���: ");
		if (scanf_s("%d", &num) == 1)
		{
			printf("%d\n", num);
			break;
		}
		while (getchar() != '\n'); // '\n' �� ���� ������ ��� ���� �����Ѵ�.
		printf("�߸��� �Է��Դϴ�.\n");
	}

	return 0;
}

