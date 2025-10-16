
/********************************************************************************

	[13] vector<string> 인수를 받아 각 문자열의 문자 수를 담은 
	vector<int>를 반환하는 함수를 작성하시오. 또한 
	가장 긴 문자열, 
	가장 짧은 문자열, 
	사전순으로 가장 앞선 문자열과 
	가장 뒤에 있는 문자열을 찾으시오.
	이러한 작업을 위해 몇 개의 별도 함수를 사용하는 것이 적절한지, 
	그 이유를 설명하시오.

********************************************************************************/

import std;
using namespace std;

/*
	이러한 작업을 위해 몇 개의 별도 함수를 사용하는 것이 적절한지,
	그 이유를 설명하시오.
	
	0. error처리할 함수.
	1. size() 인수를 받아 vector<string>으로 받는 함수 
	2. vector<string> 인수를 받아 각 문자열의 문자 수를 담은 vector<int>를 반환하는 함수
	3. 가장 긴 문자열,
	4. 가장 짧은 문자열, 
	5. 사전순으로 가장 앞선 문자열과 
	6. 가장 뒤에 있는 문자열
	
	기능은 1개만 갖고 있는 함수들로 구성
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
* sort를 좀 알고 다음기회에 
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
	cout <<"가장 긴 문자열 : " << max << ' ' <<"가장 짧은 문자열 : " << min << '\n';
	/*
	*/

}