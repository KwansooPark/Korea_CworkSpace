//#include <stdio.h>
//
///*
//	자료형의 범위
//*/
//
//int main()
//{
//	/*
//	* 'A' -65 (아스키 코드)
//	*  char : -128 ~ 127(1Byte = 8bit)
//	*  unsigned char : 0 ~ 255(부호없는 자료형)
//	*/
//	printf("======= char 자료형 =======\n");
//	char ch = 'A';
//
//	printf("%c %d\n", ch, ch);
//	// printf("%d\n", ch); //아스키 코드값
//	
//	char value1 = -128;
//	printf("%d\n", value1);
//
//	char value2 = 128;	// overflow
//	printf("%d\n", value2);
//
//	unsigned value3 = 128;
//	// short value3 = 128; //short : 16비트 (-32768 ~ 32767)
//	printf("%d\n", value3);
//
//	/*
//		int 형 4Byte = 32bit
//		-21억 ~ 21억
//		long (윈도우: 4Byte), (MacOS: 8Byte)
//	*/
//
//	printf("==== int 자료형 ====\n");
//	int iNum = 2100000000;
//	printf("%d\n", iNum);
//
//	int iNum2 = 2200000000; //범위 초과로 overflow
//	printf("%d\n", iNum2);
//
//	// long형은 숫자 뒤에 'L' or 'l'을 넣음
//	long long llNum = 2200000000;
//	printf("%lld\n", llNum);
//
//	/*
//		실수형: 소숫점이 있는 숫자
//		float: 4Byte, 소수 6자리까지 표기('F' or 'f'를 붙인다.)
//		double: 8Byte, 소수 15자리
//
//	*/
//
//	printf("==== florat 와 double 자료형 ====");
//	float fNum = 0.1234567F; //자리수 초과로 오류
//	printf("%f\n", fNum);
//
//	double dNum = 0.123456789012345; //자리수 초과로 오류
//	printf("%.15lf\n", dNum);
//
//	return 0;
//
//    }