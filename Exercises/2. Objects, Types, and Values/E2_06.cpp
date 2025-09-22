/****************************************************************************
*
*	사용자에게 세 개의 정수 값을 입력받아, 
*	이를 숫자 순서대로 정렬하여 쉼표로 구분된 형태로 출력하는 프로그램을 작성하시오.
*	예: 입력값이 10 4 6이면 출력은 4, 6, 10 동일한 값이 있을 경우 함께 정렬하시오.
*	예 : 4 5 4 → 4, 4, 5
*
*****************************************************************************/

import std;
using namespace std;

int main(void)
{
	int val1 = -1, val2 = -1, val3 = -1;
	
	/*입력*/
	cout << "세개의 정수 값을 입력하세요." << '\n';
	cin >> val1 >> val2 >> val3;	

	/*오름차순 정렬*/
	if (val1 >= val2 && val1 >= val3)
	{
		if (val2 <= val3) cout<< val2<<", " << val3 << ", " << val1;
		else cout<<val3 << ", " <<val2 << ", " <<val1;
	}
	else if (val2 >= val1 && val2 >= val3)
	{
		if (val1 <= val3) cout << val1 << ", " << val3 << ", " << val2;
		else cout << val3 << ", " << val1 << ", " << val2;
	}
	else
	{
		if (val1 <= val2) cout << val1 << ", " << val2 << ", " << val3;
		else cout << val2 << ", " << val1 << ", " << val3;
	}
	return 0;
}