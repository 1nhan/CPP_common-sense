/***************************************************************
	
	[6] 연습문제 5의 함수를 vector<string>을 대상으로 작성하시오.

****************************************************************/

import std;
using namespace std;

auto first_reverse(vector<string>& v) -> void {
	vector<string>helpvec(v.size());
	for (int i = 0; i < helpvec.size(); ++i) {
		helpvec[i] = v[v.size() - 1 - i];
	}
	for (string i : helpvec) 
		cout <<"first_reverse " << i << '\n';
};

auto second_reverse(vector<string>& v) -> void {
	
	for (int i = 0; i < v.size(); ++i) {
		string helpv = v[v.size()-1-i];
		v[v.size() - 1 - i] = v[0 + i];
		v[0 + i] = helpv;
	}
	for (string i : v) 
		cout <<"second_reverse " << i << '\n';
};

int main() {

	vector<string>exnum = 
	{"cat", "dog","horse","monkey","crow"};
	first_reverse(exnum);
	second_reverse(exnum);
}