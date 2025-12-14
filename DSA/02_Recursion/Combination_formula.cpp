#include <iostream>
using namespace std;

int fact(int n)
{
	if (n == 0) return 1;
	return fact(n - 1) * n;
}

/**
* @brief	nCr
* - nCr = n!/(r!*(n-1)!);
*/
int nCr(int n, int r)
{
	int num, den;
	num = fact(n);
	den = fact(r) * fact(n - r);
	return num / den;
}

/**
* @brief	NCR
* - 파스칼 삼각형의 성질을 그대로 코드로 옮겨놓음
*/
int NCR(int n, int r)
{
	if (r == 0 || n == r) return 1;
	return NCR(n - 1, r - 1) + NCR(n-1, r);
}

int main()
{
	cout << NCR(5, 3);
	return 0;
}