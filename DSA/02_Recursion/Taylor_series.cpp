#include<iostream>
using namespace std;

/**
* @brief	e
* - e^x에 대한 taylor series(테일러 급수)
* @param
* - int x
* - int n
* @variable
* - p : x의 거듭제곱 (x = 0)일때
* - f : 팩토리얼 (0!)일때
* - r : 이전 단계의 재귀적 구현 
* @return
* - r + p / f;
* - 이전 항(r)과 현재 항(p/f)
*/
double e(int x, int n)
{
	static int p = 1, f = 1;
	int r;
	if (n == 0) return 1;
	else {
		r = e(x, n - 1);
		p = p * x;
		f = f * n;
		return r + p / f;
	}
}

double e2(int x, int n)
{
	double s = 1;
	int i = 0; 
	double num = 1;
	double den = 1;

	for (i = 1; i < n; i++) {
		num *= x;
		den *= i;
		s += num / den;
	}
	return s;
}

/**
* @brief	e1_with_horner
* - horner's method을 적용한 taylor series
* - 덧셈과 곱셈 횟수를 최소화하는 효율적인 알고리즘
* @param
* - int x
* - int n
*/
double e1_with_horner(int x, int n)
{
	double s = 1;
	for (; n > 0; --n)
		s = 1 + x / n * s;
	return s;
}

double e2_with_horner(int x, int n)
{
	static double s = 1;
	if (n == 0) return s;
	s = 1 + x / n * s;
	
	return e2_with_horner(x,n-1);
}

int main()
{
	printf("%lf \n", e2(1, 10));
	return 0;
}