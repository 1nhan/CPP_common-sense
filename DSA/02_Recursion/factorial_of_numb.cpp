#include<iostream>
using namespace std;

int factorial(int n)
{
	if (n == 0) return 1;

	return factorial(n - 1) * n;
}

int iter_factorial(int n)
{
	int f = 1;
	for (int i = 1; i <= n; ++i)
		f *= i;
	return f;
}


int main()
{
	int res = 5;
	cout<< factorial(5)<<'\n';
	cout<< iter_factorial(5)<<'\n';
	
}