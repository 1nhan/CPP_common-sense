/******************************************************************************
* 
	[2] ���� ����(vector<int>)�� cout���� ����ϴ� �Լ� print()�� �ۼ��Ͻÿ�.
	�� �Լ��� ��¿� ���� ���̱� ���� ���ڿ��� ���� �� ���� �μ��� �޾ƾ� �մϴ�.

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