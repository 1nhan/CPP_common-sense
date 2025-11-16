/********************************************************************************************
*
*	Drill_17_1 자유 저장 영역에 할당한 배열에 대한 이해
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

constexpr int q6 = 11;
constexpr int q8 = 20;
constexpr double initial_value = 100;

class vector {
	int sz;
	double* elem;

public:
	vector(int s)
		:sz{ s }, elem{ new double[sz] }
	{
		for (int i = 0; i < sz; ++i)
			elem[i] = 0;
	}
	~vector()
	{
		delete[]elem;
		cout << "시스템 정상 종료" << '\n';
	}

	int size() { return sz; }
	double get(int s) const { return elem[s]; }
	void set(int n, double v) { elem[n] = v; }
};

ostream& print_vector(ostream& os, vector& v)
{
	for (int i = 0; i < v.size(); ++i)
		cout << "v [ " << i << " ] = " << v.get(i) << '\n';
	return os;
}

int main()
{
	vector vman1(q6);
	vector vman2(q8);

	for (int i = 0; i < q6; ++i)
	{
		vman1.set(i, initial_value + i);
	}
	for (int i = 0; i < q8; ++i)
	{
		vman2.set(i, initial_value + i);
	}

	print_vector(cout, vman1);
	print_vector(cout, vman2);

}


