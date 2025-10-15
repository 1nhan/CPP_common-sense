/*****************************************************************
* 
	[9] 두 개의 vector<double> price와 weight가 주어졌을 때, 
	모든 price[i] * weight[i]의 합을 계산하는 값을(“지수” 또는 “인덱스”) 
	반환하는 함수를 작성하시오.
	단, weight.size() == price.size() 조건을 만족해야 합니다.

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