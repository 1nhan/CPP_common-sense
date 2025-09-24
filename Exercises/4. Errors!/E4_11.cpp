/************************************************************************
*
	�Ǻ���ġ ����(Fibonacci series)�� ó�� N���� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	������ 1 1 2 3 5 8 13 21 34�� �����ϸ�, ���� ���� ���� �� ���� ���̴�.
	int�� ǥ�� ������ ���� ū �Ǻ���ġ ���� ã���ÿ�.
*
*************************************************************************/

#include <algorithm>
import std;
using namespace std;
//(int > 2'147'483'647 || int < -2'147'483'648)
bool find_maxint(double maxi)
{
	return maxi >= INT32_MIN && maxi <= INT32_MAX;
}

int main(void)
{
	vector<double>Fibonacci_series = { 1,1 };
	int N = -1;
	double max_integer = -1;
	cin >> N;
	
	for (int x = 1; x <= N; ++x)
		Fibonacci_series.push_back((Fibonacci_series[x] + Fibonacci_series[x - 1]));

	for (int x = 0; x < N; ++x)
		if (find_maxint(Fibonacci_series[x]))
		{
			cout << Fibonacci_series[x] << '\n';
			if (max_integer < Fibonacci_series[x])max_integer = Fibonacci_series[x];
		}
	cout << "int�� ǥ�� ������ ���� ū �Ǻ���ġ �� = " << max_integer << '\n';

	return 0;
}