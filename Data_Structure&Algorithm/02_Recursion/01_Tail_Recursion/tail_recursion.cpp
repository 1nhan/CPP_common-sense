#include <iostream>
using namespace std;

int tail_recursion_function(int n) {

	if (n > 0) {
		//... 동작
		cout << n << '\n';

		//... 마지막
		tail_recursion_function(n - 1);
		//tail_recursion_function(n - 1)+n; 
		/*
		+n은 리턴타임에 실행됨. 
		리턴타임을 제외한 부분까지가 tail_recursion이라고 함
		*/ 
	}
}

/**
* @brief	while_function
* - 시간 복잡도를 계산해서 위 tail_recursion_function과 비교하면
* - 전부 그런건 아니겠지만 단순 반복을 해야할때는 while같이 iterator를 사용하는 것이
* - 공간 복잡도에서 while_function은 OC(1),
* - tail_recursion_function은 OC(n)이기 때문에 성능면에서 좋다.
*/
int while_function(int n) {
	while (n > 0) {
		cout << n << '\n';
		n--;
	}
}

int main()
{


	return 0;
}