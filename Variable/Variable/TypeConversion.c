#include <stdio.h>
/*
	 �ڷ����� ��ȯ
*/

int main()
{
	// ������ ����ȯ(�ڵ� ����ȯ)
	int iNum = 20;
	float fNum = iNum;	//ū �ڷ��� = ���� �ڷ���
	double dNum = 2.54;
	int iNum2;

	print("%d\n", iNum);
	print("%.1f\n", fNum);	// 20.0
	print("%.1f\n", iNum + fNum);	//40.0

	// ����� ����ȯ(���� ����ȯ)
	// �ڷ����� �Ұ�ȣ�� ���� �ش� ex) (int), (double)

	iNum2 = (int)dNum;
	print("%d\n", iNum2);	//2

	// ����
	dNum = 1.2;
	fNum = 0.9F;	// double �� �⺻�̰� float �� �⺻�� �ƴϱ� ������ F �� �ٿ��ش�.

	iNum = (int)dNum + (int)fNum;	// 1+0 = 1
	printf("%d\n", iNum); 

	iNum = (int)(dNum + fNum);	//2
	printf("%d\n", iNum);

	return 0;

}