#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <time.h>

/*
	strtok(문자열, 구분기호): 문자열을 구분기호로 잘라낸다.
	- 포인터로 문자를 반환한다.
	- 분리된 문자를 배열에 저장할 수 있다.
*/

#define MAX_WORDS 10	//문자열(단어)의 최대 갯수
int main()
{
	char words[] = "ant bear chicken horse pig";
	char* wordList[MAX_WORDS];	//분리된 문자를 배열에 저장한다.
	int idxOfWord = 0;	// 배열의 인덱스

	//첫번째 문자열(단어) 분리
	/*char* ptr = strtok(words, " ");	//공백으로 구분
	printf("첫째 요소: %s\n", ptr);	//ant
	wordList[idxOfWord++] = ptr;

	ptr = strtok(NULL, " ");	//ant 뒤의 '\0'을 가리킨다.
	printf("둘째 요소: %s\n", ptr); //bear
	wordList[idxOfWord++] = ptr;

	printf("%s\n", wordList[0]);	//ant
	printf("%s\n", wordList[1]);	//bear */

	char* ptr = strtok(words, " ");
	while (ptr != NULL) {
		wordList[idxOfWord++] = ptr;
		ptr = strtok(NULL, " ");
	}

	//전체 출력
	for (int i = 0; i < idxOfWord; i++) {
		printf("%s ", wordList[i]);
	}
	printf("\n");

	//랜덤하게 추출
	srand(time(NULL));

	int rndIdx = rand() % idxOfWord;
	printf("단어: %s\n", wordList[rndIdx]);

	return 0;
}