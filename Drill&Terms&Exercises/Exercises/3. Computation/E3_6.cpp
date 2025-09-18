/************************************************************************
*
*	아주 간단한 계산기 프로그램을 작성하세요.
*	덧셈, 뺄셈, 곱셈, 나눗셈의 네 가지 기본 연산을 
*	두 개의 입력값에 대해 수행할 수 있어야 합니다.
*	사용자에게 두 개의 double 값과 연산을 나타내는 
*	문자 하나를 입력받도록 하세요.
*	예: 입력값이 35.6, 24.1, '+'이면 출력은 “The sum of 35.6 and 24.1 is 59.7” 	
*
*************************************************************************/
import std;
using namespace std;

int main(void)
{
	double val1 = -1, val2 = -1;
	char operation = ' ';
	/*입력*/
	cin >> val1 >> val2 >> operation;
	/*입력 끝*/

	/*출력*/
	if (operation == '+')
		cout << "The sum of " << val1 << " and " <<
		val2 << " is " << val1+val2 << '\n';
	else if (operation == '-')
		cout << "The difference of " << val1 << " and " <<
		val2 << " is " << val1-val2<< '\n';
	else if (operation == '*')
		cout << "The product of " << val1 << " and " <<
		val2 << " is " << val1*val2 << '\n';
	else if (operation == '/')
		cout << "The quotient of " << val1 << " and " <<
		val2 << " is " << val1/val2 << '\n';
	else cout << "reject" << '\n';
	/*출력 끝*/

	return 0;
}