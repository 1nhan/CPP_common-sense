
/********************************************************************************

	[13] vector<string> �μ��� �޾� �� ���ڿ��� ���� ���� ���� 
	vector<int>�� ��ȯ�ϴ� �Լ��� �ۼ��Ͻÿ�. ���� 
	���� �� ���ڿ�, 
	���� ª�� ���ڿ�, 
	���������� ���� �ռ� ���ڿ��� 
	���� �ڿ� �ִ� ���ڿ��� ã���ÿ�.
	�̷��� �۾��� ���� �� ���� ���� �Լ��� ����ϴ� ���� ��������, 
	�� ������ �����Ͻÿ�.

********************************************************************************/

import std;
using namespace std;

/*
	�̷��� �۾��� ���� �� ���� ���� �Լ��� ����ϴ� ���� ��������,
	�� ������ �����Ͻÿ�.
	
	0. erroró���� �Լ�.
	1. size() �μ��� �޾� vector<string>���� �޴� �Լ� 
	2. vector<string> �μ��� �޾� �� ���ڿ��� ���� ���� ���� vector<int>�� ��ȯ�ϴ� �Լ�
	3. ���� �� ���ڿ�,
	4. ���� ª�� ���ڿ�, 
	5. ���������� ���� �ռ� ���ڿ��� 
	6. ���� �ڿ� �ִ� ���ڿ�
	
	����� 1���� ���� �ִ� �Լ���� ����
*/

auto error(const string& msg) -> void {
	throw runtime_error(msg);
}

auto make_vector_string(const int count) -> vector<string> { 
	vector<string>make_vector;
	
	string str = " ";
	for (int i = 0; i < count; ++i) {
		cin >> str;
		if (str == " ") error("0");
		else if (str == "quit") return make_vector;
		make_vector.push_back(str);
	}
	return make_vector; 
}
auto compute_string(const vector<string>&v) -> vector<int> { 
	vector<int>gen_int;

	for (int i = 0; i < v.size(); ++i) {
		gen_int.push_back(v[i].size());
	}

	return gen_int; 
}

auto compute_longest_string	(const vector<int>&v) -> int { 

	int maxi = v[0];
	for(int i = 0 ; i<v.size(); ++i)
		if (maxi < v[i]) maxi = v[i];
	return maxi; 
}

auto compute_shortest_string(const vector<int>& v) -> int {

	int mini = v[0];
	for (int i = 0; i < v.size(); ++i)
		if (mini > v[i]) mini = v[i];
	return mini;
}

/*
* sort�� �� �˰� ������ȸ�� 
auto compute_sort_ascending	(const vector<string>&v) -> vector<string>{
	
	return;
}

auto compute_sort_descending(const vector<string>&v) -> vector<string>{


	return;
}
*/

int main() {
	int count = -1;
	cin >> count;
	vector<string>maked_vec = make_vector_string(count);
	vector<int>computed_int = compute_string(maked_vec);
	int max = compute_longest_string(computed_int);
	int min = compute_shortest_string(computed_int);

	for (string s : maked_vec)cout << s << '\n';
	for (int i:computed_int)cout<<i<<'\n';
	cout <<"���� �� ���ڿ� : " << max << ' ' <<"���� ª�� ���ڿ� : " << min << '\n';
	/*
	*/

}