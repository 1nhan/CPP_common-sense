/**************************************************************************************

	[4] int���� �ִ밪������ ������ ������ �� �ֽ��ϴ�. 
	fibonacci()�� ����Ͽ� �� �ִ밪�� �ٻ�ġ�� ���Ͻÿ�.
	46��°���� ��
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
		cout << i<<"�� = " << v[i] << '\n';
	}
}

int main() {
	cout << "����>>" << '\n';
	int x = 0, y = 1, n = -1;	// default;
	cin >> n;					// input
	if (n < 2)error("error");	// variant
	vector<int>fibo;
	fibo.push_back(x);
	fibo.push_back(y);

	fibonacci(x, y, fibo, n);

}

