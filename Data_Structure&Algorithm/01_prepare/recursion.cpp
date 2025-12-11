#include<iostream>
using namespace std;

/*
* @brief	func1
- 호출(Call)
  - func2(3)
	- func2(2)
	  - func2(1)
		- func2(0)

- 출력(Print)
  - 3
  - 2
  - 1
*/
void func1(int n)
{ 
	if (n > 0) {
		cout << n << '\n';
		func1(n - 1);
	}
}

/*
* @brief	func2
- 호출(Call)
  - func2(3)
	- func2(2)
	  - func2(1)
		- func2(0)

- 출력(Print)
  - 1
  - 2
  - 3
*/
void func2(int n)
{ 
	if (n > 0) {
		func2(n - 1);
		cout << n << '\n';
	}
}


int main()
{
	int x = 3;
	func1(x);
	func2(x);
	return 0;
}