#include <iostream>
using namespace std;

int sum(int n)
{
	if (n == 0) return 0;
	return sum(n - 1) + n;
}

int iter_sum(int n)
{
	int sum = 0;
	for (int i = 0; i < n; ++i)
		sum += i;
	return sum;
}

int main()
{
	int res = 5;
	sum(res);
	iter_sum(res);
	return 0;
}