/*****************************************************************
* 
	[9] �� ���� vector<double> price�� weight�� �־����� ��, 
	��� price[i] * weight[i]�� ���� ����ϴ� ����(�������� �Ǵ� ���ε�����) 
	��ȯ�ϴ� �Լ��� �ۼ��Ͻÿ�.
	��, weight.size() == price.size() ������ �����ؾ� �մϴ�.

*****************************************************************/

import std;
using namespace std;

void error(const string& msg) {
	throw runtime_error(msg);
}

vector<double>& PriceandWeight(const vector<double>& price, const vector<double>& weight) {
	if (price.size() != weight.size()) { 
		error("different size"); return ; 
	}
	else {
		vector<double>index;
		for (int i = 0; i < price.size(); ++i) {
			index.push_back(price[i] * weight[i]);
		}
		return index;
	}
}