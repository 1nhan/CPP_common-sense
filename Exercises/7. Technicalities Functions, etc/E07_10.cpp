/******************************************************************************
	
	[10] 벡터 인수에서 가장 큰 요소를 반환하는 함수 maxv()를 작성하시오.

******************************************************************************/

import std;
using namespace std;

double maxv(vector<double>& v)
{
	double maxi = v[0];
	for(int i =0; i<v.size(); ++i)
		if (maxi < v[i]) 
			maxi = v[i];
	return maxi;
};

