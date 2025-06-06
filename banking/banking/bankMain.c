#include <stdio.h>

#define MAX_ACCOUNTS 2	//최대 계정수
#define OWNER_LEN 40	//예금주 크기

/*
	은행 업무 프로젝트 만들기
	- 은행 계정(BankAccount) 구조체 정의
	- 메뉴 : 계좌생성, 예금, 출금, 계좌목록, 종료
*/

typedef struct {
	int ano;	//계좌번호
	char owner[OWNER_LEN];	//예금주
	int balance;	//잔고
}BankAccount;

//전역변수: 배열 생성(최대 계정 수)
BankAccount accounts[MAX_ACCOUNTS];
int idxOfAccount = 0;	//배열의 인덱스

//계좌 생성 함수 정의
void createAccount() {

	if (idxOfAccount >= MAX_ACCOUNTS) {
		printf("더 이상 계좌를 생성할 수 없습니다.\n");
		return;
	}

	//신규 계좌 생성
	printf("계좌번호: ");
	scanf_s("%d", &accounts[idxOfAccount].ano);
	printf("예금주: ");
	scanf_s("%s", accounts[idxOfAccount].owner,
		sizeof(accounts[idxOfAccount].owner));
	printf("잔고: ");
	scanf_s("%d", &accounts[idxOfAccount].balance);
	idxOfAccount++;	//다음 인덱스 증가

	printf("결과: 계좌가 생성되었습니다.\n");

}

//계좌 목록
void displayAccount() {
	printf("******************계좌 목록******************\n");

	if (idxOfAccount == 0) {
		printf("등록된 계좌가 없습니다.\n");
		return;
	}

	for (int i = 0; i < idxOfAccount; i++) {
		printf("계좌번호: %d, 예금주: %s, 잔액: %d\n", accounts[i].ano,
			accounts[i].owner, accounts[i].balance);
	}
}

//예금
void deposit() {
	//계좌검색이 필요 : 등록된 계좌를 검색해야 한다.
	int accountNumber;	//계좌번호(외부 입력 계좌번호)
	int money;	//입금액

	printf("입금할 계좌번호: ");
	scanf_s("%d", &accountNumber);

	//검색 루프
	for (int i = 0; i < idxOfAccount; i++) {
		//외부에서 입력한 계좌와 등록된 계좌번호가 일치한다면 
		if (accounts[i].ano == accountNumber) {
			printf("입금액: ");
			scanf_s("%d", &money);

			accounts[i].balance += money;
			printf("정상 처리되었습니다. 현재 잔액: %d\n", accounts[i].balance);
			return;	//for문 나가기
		}
	}//for 닫기
	printf("계좌를 찾을 수 없습니다.\n");
}

//출금
void withdraw() {
	int accountNumber;	//계좌번호(외부 입력 계좌번호)
	int money;	//입금액

	printf("출금할 계좌번호: ");
	scanf_s("%d", &accountNumber);

	//검색 루프
	for (int i = 0; i < idxOfAccount; i++) {
		//외부에서 입력한 계좌와 등록된 계좌번호가 일치한다면 
		if (accounts[i].ano == accountNumber) {
			printf("출금액: ");
			scanf_s("%d", &money);

			if (money > accounts[i].balance || money < 0) {
				printf("잔액이 부족하거나 올바른 금액이 아닙니다. 현재 잔액: %d\n", accounts[i].balance);
				return;	//메뉴로 빠져나가기
			}

			accounts[i].balance -= money;
			printf("정상 처리되었습니다. 현재 잔액: %d\n", accounts[i].balance);
			return;	//for문 나가기
		}
	}//for 닫기
	printf("계좌를 찾을 수 없습니다.\n");
}


int main()
{
	int choice;	//메뉴

	while (1) {
		printf("=======================================================\n");
		printf("1. 계좌생성 | 2. 예금 | 3. 출금 | 4. 계좌목록 | 5. 종료 \n");
		printf("=======================================================\n");
		printf("선택> ");

		scanf_s("%d", &choice); //메뉴 입력
		switch (choice) {
		case 1:
			createAccount(); break;
		case 2:
			deposit(); break;
		case 3:
			withdraw(); break;
		case 4:
			displayAccount(); break;
		case 5:
			printf("프로그램을 종료합니다.\n");
			return;
		default:
			printf("잘못된 입력입니다. 다시 선택하세요\n"); break;
		}
	}//while 닫기
	system("pause"); //콘솔창 닫힘 문제 예방

	return 0;
}