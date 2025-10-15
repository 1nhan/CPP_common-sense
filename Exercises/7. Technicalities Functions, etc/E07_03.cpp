/**************************************************************************************
	
	[3] 피보나치 수(Fibonacci number)로 구성된 벡터를 생성하고, 
	연습문제 2에서 작성한 함수를 사용하여 출력하시오. 
	벡터를 생성하기 위해 fibonacci(x, y, v, n) 함수를 작성하시오. 
	여기서 x와 y는 정수이고, v는 비어 있는 vector<int>, n은 v에 넣을 요소의 개수입니다. 
	v[0]은 x, v[1]은 y가 됩니다. 
	피보나치 수는 각 요소가 앞의 두 요소의 합으로 이루어진 수열입니다. 
	예를 들어 1과 2로 시작하면 1, 2, 3, 5, 8, 13, 21, ... 와 같은 수열이 됩니다. 
	fibonacci() 함수는 x와 y를 시작값으로 하여 이러한 수열을 생성해야 합니다.

***************************************************************************************/

import std;
using namespace std;

void error(const string& msg) { 
	throw runtime_error(msg); 
}

void fibonacci(int x, int y, vector<int>& v, int n){
	for (int i = 1; i <= n; ++i) {
		v.push_back(v[i] + v[i - 1]);
	}
	
	for (int i = 2; i < v.size(); ++i) 
		cout << v[i] <<'\n';
}

int main() {
	cout << "갯수>>" << '\n';
	int x = 0, y = 1, n = -1;	// default;
	cin >> n;					// input
	if (n < 2)error("error");	// variant
	vector<int>fibo;			
	fibo.push_back(x);
	fibo.push_back(y);
	
	fibonacci(x, y, fibo, n);

}

