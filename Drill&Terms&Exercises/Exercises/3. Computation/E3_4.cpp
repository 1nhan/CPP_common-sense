/************************************************************************
*
*	double 값들의 수열을 벡터(vector)로 입력받으세요.
*	각 값은 도시 간 거리라고 생각합니다.
*	전체 거리(모든 거리의 합)를 계산하고 출력하세요.
*	인접한 도시 간의 최소 거리와 최대 거리도 출력하세요.
*	인접한 도시 간 평균 거리도 계산하여 출력하세요.
*
*************************************************************************/
#include <algorithm>
import std;
using namespace std;

int main(void)
{
	/*double 값들의 수열을 벡터(vector)로 입력*/
	vector<double>city_range;
	double range_point;
	while (cin >> range_point)
		city_range.push_back(range_point);
	/*double 값들의 수열을 벡터(vector)로 입력 끝*/
	
	/*전체 거리(모든 거리의 합)를 계산하고 출력*/
	/*인접한 도시 간의 최소 거리와 최대 거리도 출력.*/
	/*인접한 도시 간 평균 거리도 계산하여 출력.*/
	double sum = city_range[0];
	double min = city_range[0];
	double max = min;

	for (int x = 1; x < city_range.size(); x++)
	{
		sum += city_range[x];
		if (city_range[x-1] > city_range[x])min = city_range[x];
		else if (city_range[x-1] < city_range[x])max = city_range[x];
	}
	cout << "전체 거리: " << sum << '\n';
	cout << "최소 거리: " << min <<'\n';
	cout << "최대 거리: " << max <<'\n';
	cout << "평균 거리: " << sum / city_range.size()<<'\n';
	/*전체 거리(모든 거리의 합)를 계산하고 출력 끝*/

	return 0;
}