
#include <iostream>
using namespace std;

/*
double power(int m, int n)
{
	if (n == 0) return 1;
	return power(m, n - 1) * m;
}
*/

double power(int m, int n)
{
	if (n == 0) return 1;
	double half = power(m, n / 2);
	if (n % 2 == 0) half* half;
	return m * half*half;
}

int main() {
	double res = power(3, 4);
	cout << res << '\n';
	return 0;
}