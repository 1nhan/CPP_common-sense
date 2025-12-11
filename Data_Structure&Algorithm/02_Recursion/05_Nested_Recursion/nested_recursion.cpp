#include<iostream>
using namespace std;

int nested_recursion(int n) {

	if (n > 100) 
		return(n - 10);
	else 
		return nested_recursion(nested_recursion(n + 11));
}

int main()
{
	int x = 95;
	cout << nested_recursion(x)<<'\n';

	return 0;
}