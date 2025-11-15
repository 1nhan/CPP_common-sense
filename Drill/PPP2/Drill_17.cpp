/********************************************************************************************
*
*	Drill_17
*	
*	1. new를 이용해서 자유저장 영역에 int 10개를 저장하는 배열을 할당하자.
*	2. int 10개의 값을 cout에 출력
*   3. delete[]를 이용해서 배열을 해제하자.
*	4. a가 가리키는 요소의 값을 os에 출력하는 함수 print_array10(ostream& os, int* a)를 정의
*	5. 자유 저장 영역에 int 10개를 저장하는 배열을 할당하고 그 값을 100, 101~~~로 초기화 한 후 값을 출력.
*	6. 자유 저장 영역에 int 11개를 저장하는 배열을 할당하고 그 값을 100, 101~~~로 초기화 한 후 값을 출력.
*	7. a가 가리키는 요소의 값을 os에 출력하는 함수 print_array(ostream& os, int* a, int n)을 정의
*	8. 자유 저장 영역에 int 20개를 저장하는 배열을 할당하고, 그 값을 100, 101, 102,...로 초기화한 후 값을 출력.
*   9. 할당한 배열을 해제했는가
*  10. 5번과 6, 8번 문제를 배열 대신 벡터를 이용해 풀고, print_array() 대신 print_vector()를 정의
* 
*********************************************************************************************/

#include <iostream>
using namespace std;

class my_array {
	int sz;
	int* elem;
public:
	my_array(int s)
		:sz{s}, elem{new int[s]}
	{ 
		for (int i = 0; i < s; ++i)
			elem[s] = 0;
	}
	~my_array() { delete[] elem; }

	
	int size() const { return sz; }
	void print_array10(ostream& os, int* a);

};

void my_array::print_array10(ostream& os, int* a)
{
	for (int i = 0; i < 10; ++i)
		os << elem[i] << '\n';
}

auto main()
{
	my_array ten(10);
	my_array eleven(11);

	
}