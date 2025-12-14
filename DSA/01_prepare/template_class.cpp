#include<iostream>
using namespace std;


template<class T>
class  Arithmetic
{
public:
	Arithmetic		(T a, T b):a{a},b{b}	{ }
	
	T add			();
	T sub			();
	
	
	~Arithmetic		()						{ };
	
private:
	T a;
	T b;
};

template<class T>
T Arithmetic<T>::add	()					{ return a + b; }
template<class T>
T Arithmetic<T>::sub	()					{ return a - b; }

int main()
{
	Arithmetic<char> ar{'A','B'};

	cout << "Add " << (int)ar.add() << '\n';
	cout << "Sub " << (int)ar.sub() << '\n';
	
	return 0;
}



/*
*	지금 궁금한 점. func1, func2는 둘다 재귀함수지만 프린트f가 되냐 안되냐인거 같은데 교수님은 
* 1번의 o/p는 3. 2. 1로 2번의 o/p는 1.2.3으로 적으셨거든 나는 이점이 이해가 안되는데 2번은 지금 프린트문이 아얘 못가지 않나
*/
void func1(int n)
{
	if (n > 0) {
		printf("%d", n);
		func1(n - 1);
	}
}


void func2(int n)
{
	if (n > 0) {
		func2(n - 1);
		printf("%d", n);
	}
}

int main()
{
	int x = 3;
	func2(3);
	return 0;
}





