/**************************************************************************************
	
	[3] �Ǻ���ġ ��(Fibonacci number)�� ������ ���͸� �����ϰ�, 
	�������� 2���� �ۼ��� �Լ��� ����Ͽ� ����Ͻÿ�. 
	���͸� �����ϱ� ���� fibonacci(x, y, v, n) �Լ��� �ۼ��Ͻÿ�. 
	���⼭ x�� y�� �����̰�, v�� ��� �ִ� vector<int>, n�� v�� ���� ����� �����Դϴ�. 
	v[0]�� x, v[1]�� y�� �˴ϴ�. 
	�Ǻ���ġ ���� �� ��Ұ� ���� �� ����� ������ �̷���� �����Դϴ�. 
	���� ��� 1�� 2�� �����ϸ� 1, 2, 3, 5, 8, 13, 21, ... �� ���� ������ �˴ϴ�. 
	fibonacci() �Լ��� x�� y�� ���۰����� �Ͽ� �̷��� ������ �����ؾ� �մϴ�.

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
	cout << "����>>" << '\n';
	int x = 0, y = 1, n = -1;	// default;
	cin >> n;					// input
	if (n < 2)error("error");	// variant
	vector<int>fibo;			
	fibo.push_back(x);
	fibo.push_back(y);
	
	fibonacci(x, y, fibo, n);

}

