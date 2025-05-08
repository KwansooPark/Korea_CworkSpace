#include <stdio.h>

// 실습 문제 풀이(p.75)

int square(int x)
{
	return x * x; 
}

float triangle(int size, int height)
{

	//return  (float)(size * height) / 2; // 강제 형변환해야 실수로 반환됨.
	// return (size * height) / 2.0; 
	float area = (float)(size * height) / 2;
	return area;
}

int main()
{
	int rectArea;
	float triArea;

	//정사각형의 넓이
	rectArea = square(4);

	//삼각형의 넓이
	triArea = triangle(3, 5);

	printf("정사각형의 넓이: %dcm\n", rectArea);
	printf("삼각형의 넓이: %.1fcm\n", triArea);

	return 0;
}

