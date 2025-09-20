/****************************************************************************
*
*	연산자와 두 개의 피연산자를 입력받아 결과를 출력하는 프로그램을 작성하시오.
*	예를 들어 : +100 3.14 * 45
*	연산자를 operation이라는 이름의 문자열로 읽고, 
*	if문을 사용하여 사용자가 원하는 연산을 판별하시오.
*	예를 들어 : if (operation == "+") 피연산자는 double 타입의 변수에 저장하시오.
*	다음과 같은 연산자에 대해 구현하시오 : 
*	+, −, *, / , plus, minus, mul, div 각 연산자는 그 의미에 따라 동작해야 한다.
*
*****************************************************************************/

import std;
using namespace std;

int main(void)
{
	/*연산자와 두 개의 피연산자를 입력*/
	string operation = " ";
	double val1 = -1, val2 = -1;
	cout << "연산자와 두 개의 피연산자를 입력>>" << '\n';
	cin >> operation >> val1 >> val2;

	/*if문을 사용하여 사용자가 원하는 연산을 판별*/
	if (operation == "+" || operation == "plus")
		cout << val1 << ' ' << operation << ' ' << val2 << '\n';
	else if (operation == "-" || operation == "minus")
		cout << val1 << ' ' << operation << ' ' << val2 << '\n';
	else if (operation == "*" || operation == "mul")
		cout << val1 << ' ' << operation << ' ' << val2 << '\n';
	else if (operation == "/" || operation == "div")
		cout << val1 << ' ' << operation << ' ' << val2 << '\n';
	else cout << "reject" << '\n';
	
	return 0;
}