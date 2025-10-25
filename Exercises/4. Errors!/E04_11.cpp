/************************************************************************
*
	피보나치 수열(Fibonacci series)의 처음 N개의 값을 출력하는 프로그램을 작성하시오.
	수열은 1 1 2 3 5 8 13 21 34로 시작하며, 다음 수는 앞의 두 수의 합이다.
	int로 표현 가능한 가장 큰 피보나치 수를 찾으시오.
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
	cout << "int로 표현 가능한 가장 큰 피보나치 수 = " << max_integer << '\n';

	return 0;
}