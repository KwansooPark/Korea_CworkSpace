#include <stdio.h>
#define RATE_KPH_MPH 1.6093	//��ȯ���

/*
	KPH(Kilometer per hour)�� MPH(Mile per hour)�� ��ȯ
*/


int main()
{
	int kph;	//Kilometer per hour
	double mph;	//mile per hour

	printf("����� ������ �Է��ϼ���[KPH]: ");
	scanf_s("%d\n", &kph);

	// ��ȯ : ų�ι��� / ��ȯ���
	mph = kph / RATE_KPH_MPH;

	printf("����� ������ %.2lf[MPH]�Դϴ�.\n", mph);


	return 0;
}