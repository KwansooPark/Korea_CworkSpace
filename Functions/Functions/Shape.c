#include <stdio.h>

// �ǽ� ���� Ǯ��(p.75)

int square(int x)
{
	return x * x; 
}

float triangle(int size, int height)
{

	//return  (float)(size * height) / 2; // ���� ����ȯ�ؾ� �Ǽ��� ��ȯ��.
	// return (size * height) / 2.0; 
	float area = (float)(size * height) / 2;
	return area;
}

int main()
{
	int rectArea;
	float triArea;

	//���簢���� ����
	rectArea = square(4);

	//�ﰢ���� ����
	triArea = triangle(3, 5);

	printf("���簢���� ����: %dcm\n", rectArea);
	printf("�ﰢ���� ����: %.1fcm\n", triArea);

	return 0;
}

