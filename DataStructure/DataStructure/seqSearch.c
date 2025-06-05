#include <stdio.h>

/*
	순차 탐색(검색): 처음부터 끝까지 순서대로 찾음
	이진 탐색(검색): 
*/

int main()
{
	int a[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int i;	//인데스
	int x = 8;	//찾을 값

	printf("===== 순차 검색 =====\n");
	for (i = 0; i < 9; i++) {
		if (a[i] == x) {
			printf("%d은 a[%d]에 있습니다.\n", x, i);
		}
	}

	printf("===== 이분 검색 =====\n");
	int low, high, mid;	//첫 인덱스, 끝 인덱스, 중간 인덱스
	int val;	//검색 값

	low = 0;
	high = 8;
	val = 8;

	while (low <= high) {
		mid = (low + high) / 2;
		if (a[mid] == val) {
			break;
		}
		else if (a[mid] < val) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	/*
		mid = (0+8) / 2 = 4
		a[4] < 8, low = 5, high = 8, mid = 6
		a[6] < 8, low = 7, high = 8, mid = 7
		a[7] == 8, 찾음, 반복 종료
	*/


	if (a[mid] == x) {
		printf("%d은 a[%d]에 있습니다.\n", val, mid);
	}
	else {
		printf("%d은 없습니다.\n", val);
	}

	return 0;
}