#include <stdio.h>
#include <stdlib.h> //srand(), rand()
#include <time.h>	//time()

/*
	���� ������ ����
	- ������ ������.
	- ����ڰ� ���� �Է��Ѵ�.
	- ����ڿ� ������ ������ "�¾���", �ٸ��� "��!" �� ����Ѵ�.
	- 1, 2 �� �ƴ� �ٸ� ���� �Է��ϸ� �����Ѵ�.
*/

int main()
{
	int coin;	//��ǻ���� ����
	int you;	//�����

	//���� ���� ��
	//char aspect[][10] = { "�ո�", "�޸�" };	//�ѱ��� �� ���ڴ� 2����Ʈ
	char* aspect[] = { "", "�ո�", "�޸�" };	//���� ���� ��

	//printf("%s\n", aspect[1]);
	srand(time(NULL));	//�õ尪�� ���� �ð����� �ڵ� ��ȯ

	printf("�ո��� 1, �޸��� 2, ����� �ٸ� ���� �Է��ϼ���.\n");

	while (1)
	{
		coin = rand() % 2 + 1;	// ���� ���� 1~2 ��
		printf("������ �������ϴ�. �ո�? �޸�? : ");
		scanf_s("%d", &you);	// ����ڰ� �Է�

		if (you < 1 || you > 2) {
			printf("������ �����մϴ�.");
			break;
		}
		else {
			printf("�����: %s, ����: %s\n", aspect[you], aspect[coin]);
			//���� ������ Ȱ��
			printf("%s\n", (you == coin) ? "�¾���" : "��!");
			/*if (you == coin)
				printf("�¾���\n");
			else
				printf("��!\n");*/
		}		
	}
	
	return 0;
}