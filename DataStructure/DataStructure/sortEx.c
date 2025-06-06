#include <stdio.h>

/*
	정렬 알고리즘: 단순정렬(교환법), 버블정렬(인접요소 비교)
	: 정렬 후엔 오름차순, 내림차순 정렬이 가능함.
*/

int main()
{
	//1. 단순정렬
	int a[5] = { 3, 2, 5, 1, 4 };
	int	i, j, temp;	//temp: 교환을 위한 임시변수

	for (i = 0; i < 4; i++) {
		for (j = i + 1; j < 5; j++) {
			if (a[i] < a[j]) { //내림차순
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	/*				   3, 2, 5, 1, 4
		i=0, j=1, 3<2, 교환없음
			 j=2, 3<2, 5, 2, 3, 1, 4
			 j=3, 5<1, 교환없음
			 j=4, 3<4, 교환없음
		i=1, j=2, 2<3, 5, 3, 2, 1, 4
			 j=3, 3<1, 교환없음
			 j=4, 3<4, 5, 4, 2, 1, 3

	*/

	for (i = 0; i < 5; i++) {
		printf("%-2d", a[i]);
	}


	return 0;
}