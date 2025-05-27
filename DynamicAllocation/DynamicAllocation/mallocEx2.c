//#define _CRT_SECURE_NO_WARNINGS //strcpy()
#include <stdio.h>
#include <string.h>	//strlen()
#include <stdlib.h> //malloc(), free()

/*
	문자열에서 공백(문자)을 지우는 프로그램
*/

void delBlank(char[]);
int main()
{
	char a[] = "A B c D e F !";

	delBlank(a);	//호출 
	printf("%s\n", a); //ABcDeF!

	return 0;
}

void delBlank(char arr[])
{
	int len = strlen(arr);	// '\0'은 포함되지 않는다.
	//arr을 저장할(복사할) 동적 배열을 생성
	char* str = (char*)malloc(sizeof(char) * len); //char 1byte
	int k = 0;	//배열의 인덱스

	for (int i = 0; i < len; i++) {
		if (arr[i] != ' ')	//공백이 아닌 문자 저장(복사)
			str[k++] = arr[i];
	}
	str[k] = '\0';	//문자열의 끝이므로 '\0'포함한다.
	//arr에 str을 저장
	strcpy_s(arr, sizeof(arr), str);	//앞: 복사대상, 뒤: 원본

	free(str);
}