/****************************************************************************
*
*	사용자가 철자로 입력한 숫자 이름(예: "zero", "two")을 숫자(0, 2 등)로 
*	변환하는 프로그램을 작성하시오.변환 대상은 "zero"부터 "four"까지, 
*	즉 0~4에 해당하는 숫자 이름만 처리합니다.
*	사용자가 "stupid computer!"처럼 정의되지 않은 입력을 하면, 
*	"not a number I know"라는 메시지를 출력해야 합니다.
*
*****************************************************************************/
import std;
using namespace std;

int main(void)
{
	string val;

	cout << "press number to english spell(zero-four)" << '\n';
	cin >> val;
	if (val == "zero")			cout << 0 << " is " << val << '\n';
	else if (val == "one")		cout << 1 << " is " << val << '\n';
	else if (val == "two")		cout << 2 << " is " << val << '\n';
	else if (val == "three")	cout << 3 << " is " << val << '\n';
	else if (val == "four")		cout << 4 << " is " << val << '\n';
	else						cout << "not a number I know" << '\n';

	return 0;
}