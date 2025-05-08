//Calculator.c

//함수의 구현부
int add(int x, int y)
{

	return x + y;
}

//팩토리얼: 계승(3! = 3*2*1)
//1부터 특정 수까지의 곱하기
int factorial(int n)
{
int facto = 1; //곱하기는 1로 초기화
for (int i = 1; i <= n; i++)
{
	facto *= i; //facto = facto *o;

}
return facto;
}

