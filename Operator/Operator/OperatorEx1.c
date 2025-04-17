//#include <stdio.h>
///*
//*	산술연산자: +, -,*, /, %
//*/
//int main()
//{
//	int a = 99;
//	int b = 2;
//
//	printf("%d\n", a + b);
//	printf("%d\n", a - b);
//	printf("%d\n", a * b);
//	printf("%.1lf\n", a / (double)b); // 강제(명시적) 형변환(Type Conversion)
//	printf("%d\n", a % b);
//
//	// 증감 연산자: ++(1 증가), --(1 감소)
//	//	+=2(2 증가)
//	printf("%d\n", a++);	// 99라는 값이 나옴. 후치 연산자 (반대는 전치 연산자) a = a + 1
//	printf("%d\n", a);	// 100
//
//	printf("%d\n", ++a);	// 전치 연산자 a = a + 1
//	printf("%d\n", a);	// 101
//	
//	printf("%d\n", a--); // 후치 연산자 a = a + 1
//	printf("%d\n", a); // 100
//
//	printf("%d\n", --a); // 전치 연산자 a = a + 1
//	printf("%d\n", a); // 99
//
//
//	return 0;
//}