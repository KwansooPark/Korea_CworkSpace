#include <stdio.h>

int main()
{
	// 문자열 배열 생성
	char fr1[5] = "apple";
	char fr2[] = "apple";	// 문자열의 끝은 '\0'(NULL 문자)이 포함됨
	char fr3[] = "바나나";	// 한 글자 2Byte 
	char fr4[] = { 'a', 'p', 'p', 'l', 'e', '\0' };	//'\0' : 아스키 코드값이 0이다.


	//printf("%s\n", fr1);
	//printf("%s\n", fr2);
	//printf("%s\n", fr3);

	// 문자열 배열의 크기: sizeof()
	printf("%s %d\n", fr1, sizeof(fr1));
	printf("%s %d\n", fr2, sizeof(fr2));
	printf("%s %d\n", fr3, sizeof(fr3));
	printf("%s %d\n", fr4, sizeof(fr4));

	// fr2 배열의 크기
	printf("%dByte\n", sizeof(fr2));	//6
	printf("%dByte\n", sizeof(fr2[0]));	//1

	int size = sizeof(fr2) / sizeof(fr2[0]);
	printf("fr2배열의 크기: %d\n", size);

	// fr4 를 %c 로 출력
	for (int i = 0; i < size; i++)
	{
		printf("%c ", fr2[i]);
	}

		
	return 0;
}

