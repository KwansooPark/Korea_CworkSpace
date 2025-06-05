#include <stdio.h>

int main()
{
	FILE* fp;
	int i, j;

	fopen_s(&fp, "gugudan.txt", "w");
	if (fp == NULL) {
		printf("파일 열기에 실패함\n");
		return 1;
	}
	
	//구구단 쓰기
	for (i = 2; i < 10; i++) {
		for (j = 1; j < 10; j++) {
			fprintf(fp, "%d x %d = %d\n", i, j, (i * j));
		}
		fprintf(fp, "\n");
	}
	fclose(fp);

	//파일 읽기 - fgets() 이용
	fopen_s(&fp, "gugudan.txt", "r");
	if (fp == NULL) {
		printf("파일 열기에 실패함\n");
		return 1;
	}

	char buf[256];
	while (fgets(buf, sizeof(buf), fp) != NULL) {
		printf("%s", buf);
	}

	fclose(fp);

	return 0;
}
