
/********************************************************************************

	[11] 벡터 인수에서 가장 작은 요소와 가장 큰 요소를 찾고, 
	평균(mean)과 중앙값(median)을 계산하는 함수를 작성하시오.
	전역 변수는 사용하지 마시오.
	결과를 담은 구조체(struct)를 반환하거나 참조 매개변수를 통해 값을 전달하시오.
	여러 개의 결과 값을 반환하는 두 가지 방식 중 어떤 방식을 선호하는지, 
	그리고 그 이유를 설명하시오.

********************************************************************************/

import std;
using namespace std;
namespace E07_11 {

	struct Result {
		double maxi=0;
		double mini=0;
		double mean=0;
		double median=0;

		auto maxif(const vector<double>&v) -> double { 
			maxi = v[0];
			for (int i = 0; i < v.size(); ++i)
				if (maxi < v[i]) maxi = v[i];
			cout << maxi<<'\n';
			return maxi; 
		}

		auto minif(const vector<double>& v) -> double {
			mini = v[0];
			for (int i = 0; i < v.size(); ++i)
				if (mini > v[i]) mini = v[i];
			cout << mini<<'\n';
			return mini;
		}

		auto meanf(const vector<double>&v)->double{
			for (int i = 0; i < v.size(); ++i)
				mean += v[i];
			mean = mean / v.size();
			cout << mean<<'\n';
			return mean;
		}

		auto medianf(const vector<double>&v)->double{
			if (v.size() % 2 == 1)
				median = v[v.size() / 2];
			else if (v.size()%2 ==0)
				median = (v[v.size() / 2]+v[v.size()-1/2])
													/2;
			cout << median<<'\n';
			return median;}
	};

}

int main(){
	E07_11::Result res;
	vector<double>test = { 1.1,2.2,3.3,4.4,5.5 };
	res.maxif(test);
	res.minif(test);
	res.meanf(test);
	res.medianf(test);

}
