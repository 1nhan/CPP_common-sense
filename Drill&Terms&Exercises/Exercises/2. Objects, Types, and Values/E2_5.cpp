/****************************************************************************
*
*	사용자에게 두 개의 정수 값을 입력하도록 요청(prompt)하는 프로그램을 작성하시오.
*	입력된 값을 int 타입 변수 val1과 val2에 저장하고, 두 값의 작은 값, 큰 값,
*	합(sum), 차(difference), 곱(product), 비율(ratio)을 계산하여 출력하시오.
*
*	위 프로그램을 수정하여, 사용자에게 부동소수점 값(floating-point value)을 입력받고 
*	이를 double 타입 변수에 저장하도록 하시오. 
*	동일한 입력값에 대해 두 프로그램의 출력을 비교해보십시오. 
*	결과가 같은가? 같아야 하는가? 차이는 무엇인가?
* 
*****************************************************************************/

import std;
using namespace std;

int main(void)
{
	double val1 = -1, val2 = -1;
	cout << "두 개의 정수 값을 입력하세요." << '\n';
	cin >> val1 >> val2;

	double small = (val1 <= val2) ? val1 : val2;
	double large = (val1 > val2) ? val1 : val2;

	cout << "작은 값(min): " << small << '\n';
	cout << "큰 값(max): " << large << '\n';
	cout << "합(sum): " << small + large << '\n';
	cout << "차: " << large - small << '\n';
	cout << "곱: " << small * large << '\n';

	if (val1 == 0 || val2 == 0) cout << "비율(ratio): reject" << '\n';
	else cout << "비율(ratio): " << large / small << '\n';

	return 0;
}