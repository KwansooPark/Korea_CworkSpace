#include <stdio.h>

/*
	���尴�� ���� �¼��� �� �� ���
	- ���尴���� �¼������� ������ �������� ���
	- ���尴���� �¼������� ������ �������� �ʴ� ���
*/

int main()
{
	int customer = 22;	//���尴 ��
	int column = 4;	//�� ��
	int row;		//��(��) ��

	printf("���尴 �� �Է�: ");
	scanf_s("%d", &customer);

	printf("�¼� �� ��: ");
	scanf_s("%d", &column);

	if (customer % column == 0) {
		row = customer % column;	//����� int����(����)
	}
	else
	{
		row = (int)(customer / column) + 1;
	}

	printf("%d���� ���� �ʿ��մϴ�.\n", row);

	return 0;
}