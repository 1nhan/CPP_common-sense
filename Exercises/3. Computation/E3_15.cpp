/************************************************************************
*
*	수열에서 가장 많이 등장하는 값은 최빈값(mode)이라고 합니다. 
*	양의 정수 집합에서 최빈값을 찾는 프로그램을 작성하세요.
*	
*************************************************************************/
#include <algorithm>
import std;
using namespace std;

int main(void)
{
	int number = -1;

	/*양의 정수 벡터 생성*/
	vector<int>posit_int;
	while (cin >> number)
	{
		if (number < 0) cout << "오직 양의 정수만 입력가능합니다." << '\n';
		posit_int.push_back(number);
	}
	/*양의 정수 벡터 생성 끝*/

	/*최빈도(count)와 최빈값(mode) 변수 생성후 초기화*/
	int count = 0; 
	int max_count = count;
	int number = posit_int[0];
	int mode = number;


	/*최빈도, 최빈값 축출*/
	for (int x = 1; x < posit_int.size(); ++x)
	{
		if(posit_int[x-1] == posit_int[x]) ++count;
		if (posit_int[x - 1] != posit_int[x])
		{
			max_count = count;
			number = posit_int[x];
		}
		mode = number;
	}
	
	
	return 0;
}