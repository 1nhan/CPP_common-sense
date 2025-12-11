#include <iostream>
using namespace std;

int head_recursion_function(int n) {

	if (n > 0) {
		head_recursion_function(n - 1);

		cout << n << '\n';
	}
}


int main()
{


	return 0;
}