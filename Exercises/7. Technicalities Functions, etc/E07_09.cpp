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

vector<double> Mul_Price_And_Weight
(const vector<double>& price, const vector<double>& weight) {
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

int main() {

	int how_size = -1;
	cin >> how_size;
	if (how_size < 1)error("none size");
	vector<double>price(how_size);
	vector<double>weight(how_size);

	for (int i = 0; i < how_size; ++i) {
		cin >> price[i] >> weight[i];
	}

	Mul_Price_And_Weight(price, weight);
	for (int i = 0; i < how_size; ++i) {

	}
}
