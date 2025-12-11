#include <iostream>
using namespace std;

/**
* @brief	func1
* - main x(5);
*	- func1(5); -> return 5;
*		- func1(4);	-> return 9;
			-func1(3); -> return 12;
				-func1(2); -> return 14;
					-func1(1); -> return 15;
						-func1(0);
*/
int func1(int n)
{
	if (n > 0) {
		return func1(n - 1) + n;
	}
	return 0;

}

/**
* @brief	func1
* - main x(5);
*	- func1(5); -> return 5;
*		- func1(4);	-> return 10;
			-func1(3); -> return 15;
				-func1(2); -> return 20;
					-func1(1); -> return 25;
						-func1(0);
	int x = 0; 
	아래 
	static int x = 0;와 같다.
*/
int func2(int n)
{
	static int x = 0;
	if (n > 0) {
		x++;
		return func2(n - 1) + x;
	}
	return 0;

}

int main()
{
	int x = 5;
	cout << func1(x) << '\n';
	cout << func2(x) << '\n';

	return 0;
}