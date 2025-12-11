#include <iostream>
using namespace std;


/* call by value */
int add(int a, int b)
{
	int c = a + b;
	return c;
}


/* call by address */
void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

/* call by reference */
void swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}




int main()
{
	int num1 = 10, num2 = 20, sum;

	sum = add(num1, num2);
	cout << sum << '\n';

	/*******************************/

	cout << num1 <<' ' << num2 << '\n';
	swap(&num1, &num2);
	cout << num1 <<' ' << num2 << '\n';
	swap(num1, num2);
	cout << num1 <<' ' << num2 << '\n';

}