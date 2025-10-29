/******************************************************************************
* 
	[2] 정수 벡터(vector<int>)를 cout으로 출력하는 함수 print()를 작성하시오.
	이 함수는 출력에 라벨을 붙이기 위한 문자열과 벡터 두 개의 인수를 받아야 합니다.

*******************************************************************************/

import std;
using namespace std;

ostream& operator<<(ostream& os, const vector<int>& v) {
	for (int i = 0; i < v.size(); ++i) {
		os << v[i];
		if (i < v.size() - 1) 
			os << ' ';
	}

	return os;
}
auto input_string() -> const string
{
	string label = "";
	cin >> label;
	return label;
}
auto make_vector_int() -> const vector<int>
{
	vector<int>new_vec;
	for (int i = 0; i < 7; ++i)
		new_vec.push_back(i);
	return new_vec;
}
auto print_vector(const string&str, vector<int>&v) -> void
{
	cout << v;
}

auto main() -> int
{
	string str = input_string();
	vector<int>vec_int = make_vector_int();
	print_vector(str, vec_int);
}