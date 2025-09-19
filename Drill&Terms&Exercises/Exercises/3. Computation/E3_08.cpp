/************************************************************************
*
*	아주 간단한 계산기 프로그램을 작성하세요.
*	덧셈, 뺄셈, 곱셈, 나눗셈의 네 가지 기본 연산을
*	두 개의 입력값에 대해 수행할 수 있어야 합니다.
*	사용자에게 두 개의 double 값과 연산을 나타내는
*	문자 하나를 입력받도록 하세요.
*	예: 입력값이 35.6, 24.1, '+'이면 출력은 “The sum of 35.6 and 24.1 is 59.7”
*
*	수정하여, 한 자리 숫자를 숫자 형태 또는 영어 단어 형태로 입력받을 수 있도록 하세요.
*
*************************************************************************/
import std;
using namespace std;

int main(void)
{
	string eng_val1 = " ", eng_val2 = " ";
	char operation = ' ';
	int val1 = -1, val2 = -1;
	
	/*한 자리 숫자의 영어 벡터 생성*/
	vector<string>eng_number = 
	{ "zero","one","two","three","four",
	"five","six","seven","eight","nine" };

	/*한 자리 숫자를 숫자 형태 또는 영어 단어 형태로 입력*/
	while (cin >> eng_val1 >> eng_val2 >> operation)
	{
		/*eng_val1, eng_val2를 int로*/
		for (int x = 0; x < eng_number.size(); ++x)
		{
			if (eng_val1 == eng_number[x]) val1 = x;
			else if (eng_val2 == eng_number[x]) val2 = x;
		}
		if (operation == '+')
			cout << "The sum of " << eng_number[val1] << " and " <<
			eng_number[val2] << " is " << val1 + val2 << '\n';
		else if (operation == '-')
			cout << "The difference of " << eng_number[val1] << " and " <<
			eng_number[val2] << " is " << val1 - val2 << '\n';
		else if (operation == '*')
			cout << "The product of " << eng_number[val1] << " and " <<
			eng_number[val2] << " is " << val1 * val2 << '\n';
		else if (operation == '/')
			cout << "The quotient of " << eng_number[val1] << " and " <<
			eng_number[val2] << " is " << val1 / val2 << '\n';
		else cout << "reject" << '\n';
	}
	/*입력 끝*/

	return 0;
}