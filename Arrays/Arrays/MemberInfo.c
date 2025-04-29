#define _CRT_SECURE_NO_WARNINGS	//scanf() 사용 시 보안 오류
#include <stdio.h>

int main()
{
	// 회원의 정보 입력: 아이디, 패스워드, 이름, 몸무게, 키
	char id[20], password[256], name[30];
	float weight, height;

	printf("\n===== 회원 정보 입력 =====\n");
	printf("아이디 입력: ");
	//scanf("%s", id);	// 배열은 주소 연산자(&) 사용하지 않음.
	scanf_s("%s", id, sizeof(id)); // 입력크기를 제한해 버퍼 오버플로우 방지

	printf("패스워드 입력: ");
	scanf_s("%s", password, sizeof(password));

	printf("이름 입력: ");
	scanf_s("%s", name, sizeof(name));

	printf("몸무게 입력: ");
	scanf_s("%f", &weight);	//변수이므로 주소연산자로 처리

	printf("키 입력: ");
	scanf_s("%f", &height);	//변수이므로 주소연산자로 처리


	// 회원 정보 출력
	printf("\n===== 회원 정보 출력 =====\n");
	printf("아이디: %s\n", id);
	printf("패스워드: %s\n", password);
	printf("이름: %s\n", name);
	printf("몸무게: %3.1f\n", weight);
	printf("키: %.1f\n", height);


	return 0;
}

