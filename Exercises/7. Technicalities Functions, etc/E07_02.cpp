/******************************************************************************
* 
	[2] 정수 벡터(vector<int>)를 cout으로 출력하는 함수 print()를 작성하시오.
	이 함수는 출력에 라벨을 붙이기 위한 문자열과 벡터 두 개의 인수를 받아야 합니다.

*******************************************************************************/

import std;
using namespace std;
void my_print(const string tag, const vector<int>&n1, const vector<int>&n2) {

	cout << tag << '\n';
	for (int x : n1) cout<<x<<' ';
	for (int x : n2) cout<<x<<' ';
	
}
