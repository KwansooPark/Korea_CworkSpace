#include <stdio.h> // standard input output header �� ������
/*
	���α׷��� : Hello~ World�� ����ϴ� ���α׷�
	�ۼ���: �ڰ���



*/
int main()
{
	// ��� �Լ� - printf()
	// ������ ���� �ʼ������� �����ݷ�(;)���� ������.
	// '\n'�� �ٹٲ� Ư�������̴�.
	// ���� ��� : ū����ǥ�� ���´�.
	// ���Ĺ��� : %s �� ����Ѵ�.
	printf(" Hello~ World! \n");
	printf(" �ȳ�~ �����! \n");
	printf(" %s\n", "Hello~ World!");
	// �� ������ ���� ���� ����ǥ�� ���´�.
	// ���Ĺ����� ���� %c �� ����Ѵ�.
	printf("C��� �Թ� ������ %c�Դϴ�. \n", 'A');
	
	// ���� : ����(%d), �Ǽ�(%f)
	printf("%d\n", 10);
	printf("%.3f\n", 2.54);
	printf("%d\n", 4+5);
	printf("%d\n", 4-5); // ����� ctrl + d �̴�.
	printf("%d\n", 4*5);
	printf("%.2f\n", 4.0/5.0);
	



	return 0;
}