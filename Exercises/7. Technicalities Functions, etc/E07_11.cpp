
/********************************************************************************

	[11] ���� �μ����� ���� ���� ��ҿ� ���� ū ��Ҹ� ã��, 
	���(mean)�� �߾Ӱ�(median)�� ����ϴ� �Լ��� �ۼ��Ͻÿ�.
	���� ������ ������� ���ÿ�.
	����� ���� ����ü(struct)�� ��ȯ�ϰų� ���� �Ű������� ���� ���� �����Ͻÿ�.
	���� ���� ��� ���� ��ȯ�ϴ� �� ���� ��� �� � ����� ��ȣ�ϴ���, 
	�׸��� �� ������ �����Ͻÿ�.

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
