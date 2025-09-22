/****************************************************************************
*
*	정수 값을 입력받아 홀수(odd)인지 짝수(even)인지 판별하는 프로그램을 작성하시오.
*	출력은 명확하고 완전해야 하며, 단순히 yes 또는 no를 출력하지 마십시오.
*	예: "The value 4 is an even number."
*	힌트 : §2.4의 나머지 연산자(modulo operator)를 참고하십시오.
*
*****************************************************************************/

import std;
using namespace std;

int main(void)
{
	/*입력*/
	int val = -1;
	cout << "정수 값을 입력>>" << '\n';

	/*홀짝 구분*/
	if (val % 2 == 0)cout<<"The value"<< val <<"is an even number." << '\n';
	else cout << "The value" << val << "is an odd number." << '\n';

	return 0;
}