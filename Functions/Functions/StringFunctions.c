#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //strcpy(), strlen(), strcmp()

/*
	문자열 복사: strcpy()
	문자열의 갯수: strlen()
	문자열의 비교
*/

int main()
{
	char msg1[] = "Good Luck";
	char msg2[20];
	char msg3[20];

	printf("%d\n", strlen(msg1));	//문자열은 9개(공백도 포함한다.)
	printf("%d\n", sizeof(msg1));	//메모리의 크기: 10 (마지막 '\0'(NULL)도 있다. 

	//문자열 복사
	strcpy(msg2, msg1);
	printf("%s\n", msg2);

	strcpy(msg3, "Have a good time!");
	printf("%s\n", msg3);

	//문자열의 비교
	char greet1[] = "hello";
	char greet2[] = "Hello";
	int result;

	result = strcmp(greet1, greet2);
	printf("%d\n", result);	// 0일때 일치한다는 의미이다. 1일 때 불일치한다.

	if (result == 0)
	{
		printf("문자열이 일치합니다.\n");
	}
	else
	{
		printf("문자열이 일치하지 않습니다.\n");
	}


	return 0;
}