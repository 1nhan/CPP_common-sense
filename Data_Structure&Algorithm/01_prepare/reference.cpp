#include <iostream>
using namespace std;


int main()
{
	int a = 10;
	//int& r; 반드시 초기화 해야함
	int& r = a;

	cout << a << ' ' << r << '\n';

	a = 25;

	cout << a << ' ' << r << '\n';
	
	int b = 30;
	r = b;
	
	cout << b << ' ' << a << ' ' << r << '\n';
	return 0;
}