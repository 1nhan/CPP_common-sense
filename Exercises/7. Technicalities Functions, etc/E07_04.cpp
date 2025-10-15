/**************************************************************************************

	[4] int형은 최대값까지만 정수를 저장할 수 있습니다. 
	fibonacci()를 사용하여 그 최대값의 근사치를 구하시오.
	46번째까지 됨
***************************************************************************************/

import std;
using namespace std;

void error(const string& msg) {
	throw runtime_error(msg);
}

void fibonacci(int x, int y, vector<int>& v, int n) {
	for (int i = 1; i <= n; ++i) {
		v.push_back(v[i] + v[i - 1]);
	}

	for (int i = 2; i < v.size(); ++i) {
		if (v[i] < 0) error("Overflow Detected");
		cout << i<<"행 = " << v[i] << '\n';
	}
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

