#include <iostream>
using namespace std;

/**
* @brief	fib_loop
* -
*/
int fib_loop(int n)
{
	int f0 = 0, f1 = 1, s;

	if (n <= 1) return n;

	for (int i = 2; i <= n; ++i)
	{
		s = f0 + f1;
		f0 = f1;
		f1 = s;
	}
	return s;
}

/**
* @brief	fib_recursion
* -
*/
int fib_recursion(int n)
{
	if (n <= 1) return n;
	return fib_recursion(n - 2) + fib_recursion(n - 1);
}

/**
* @brief	fib_memoization
* -
*/
int fib_memoization(int n)
{
	if (n <= 1) { f[n] = n; return n; }
	else {
		if (f[n - 1] == -1) f[n - 1] = fib_memoization(n - 1);
		if (f[n - 2] == -1) f[n - 2] = fib_memoization(n - 2);
		return f[n - 2] + f[n - 1];
	}
	
}

int f[10];
int main()
{
	for (int i = 0; i < 10; ++i)
		f[i] = -1;


	return 0;
}