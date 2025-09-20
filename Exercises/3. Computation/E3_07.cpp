/************************************************************************
*
*	문자열 "zero"부터 "nine"까지 10개의 값을 담은 벡터를 만드세요.
*	이 벡터를 사용하여 숫자를 해당하는
*	영어 단어로 변환하는 프로그램을 작성하세요.
*	예: 입력 7 → 출력 "seven" 같은 입력 루프를 사용하여
*	영어 단어를 숫자로 변환하는 기능도 추가하세요.
*	예 : 입력 "seven" → 출력 7
*
*************************************************************************/
#include<algorithm>;
import std;
using namespace std;
int main(void)
{
	/*문자열 "zero"부터 "nine"까지 10개의 값을 담은 벡터를 만들기*/
	vector<string>number = { "zero","one","two","three","four",
		"five","six","seven","eight","nine" };
	int num = -1;
	string eng_num = " ";
	/*영어 단어로 변환하는 프로그램*/
	cout << "숫자, 영어를 입력하세요>>(0-9까지)" << '\n';
	while (cin >> num>>eng_num)
	{
		cout << num << " | " << number[num] << '\n';
		for (int x = 0; x < number.size(); ++x)
			if (eng_num == number[x])cout << eng_num << " | " << x << '\n';
	}
	
	return 0;
}