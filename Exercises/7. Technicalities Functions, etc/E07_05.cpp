
/**************************************************************************************
* 
	[5] vector<int>의 요소 순서를 뒤집는 두 개의 함수를 작성하시오.
	예를 들어 1, 3, 5, 7, 9는 9, 7, 5, 3, 1이 됩니다.
	첫 번째 reverse 함수는 원래 벡터를 변경하지 않고, 
	역순으로 된 새로운 벡터를 생성해야 합니다.
	두 번째 reverse 함수는 다른 벡터를 사용하지 않고 원래 벡터의 요소 순서를 뒤집어야 합니다
	(힌트: swap 사용).

**************************************************************************************/

import std;
using namespace std;


auto first_reverse(const vector<int>&v)->void{
	vector<int>newvec(v.size());
	for (int i = 0; i < v.size(); ++i) {
		newvec[i] = v[v.size() -1 - i];
	}
	for (int i : newvec) cout<<"first_reverse " << i << '\n';
};

auto second_reverse(vector<int>&v) -> void {
	for (int i = 0; i < v.size(); ++i) {
		int temp_00 = v[v.size() - 1 - i];
		v[v.size() - 1 - i] = v[0+i];
		v[0 + i] = temp_00;
	}
	for (int i : v) cout <<"second_reverse " << i << '\n';
};

int main() {

	vector<int>exnum = { 1,3,5,7,9 };
	first_reverse(exnum);
	second_reverse(exnum);
}