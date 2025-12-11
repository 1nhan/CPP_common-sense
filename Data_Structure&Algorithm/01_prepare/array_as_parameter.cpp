
#include<iostream>
using namespace std;

void fun1(int arr[], int n )
{
	for (int i = 0; i < n; ++i)
		cout << arr[i] << '\n';
}
void fun2(int * arr, int n) 
{
	arr[0] = { 20 };
}


int main()
{
	int A[] = { 2,4,6,8,10 };
	int n = 5; 
	fun2(A, n);
	for (int x : A)
		cout << x << ' ';

	return 0;
}