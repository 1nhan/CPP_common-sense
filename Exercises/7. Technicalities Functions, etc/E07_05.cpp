
/**************************************************************************************
* 
	[5] vector<int>�� ��� ������ ������ �� ���� �Լ��� �ۼ��Ͻÿ�.
	���� ��� 1, 3, 5, 7, 9�� 9, 7, 5, 3, 1�� �˴ϴ�.
	ù ��° reverse �Լ��� ���� ���͸� �������� �ʰ�, 
	�������� �� ���ο� ���͸� �����ؾ� �մϴ�.
	�� ��° reverse �Լ��� �ٸ� ���͸� ������� �ʰ� ���� ������ ��� ������ ������� �մϴ�
	(��Ʈ: swap ���).

**************************************************************************************/

import std;
using namespace std;


auto first_reverse(const vector<int>&v)->void{
	vector<int>newvec(v.size());
	for (int i = 0; i < v.size(); ++i) {
		newvec[i] = v[v.size() -1 - i];
	}
	for (int i : newvec) cout<<"first_reverse " << i << '\n';
};

auto second_reverse(vector<int>&v) -> void {
	for (int i = 0; i < v.size(); ++i) {
		int temp_00 = v[v.size() - 1 - i];
		v[v.size() - 1 - i] = v[0+i];
		v[0 + i] = temp_00;
	}
	for (int i : v) cout <<"second_reverse " << i << '\n';
};

int main() {

	vector<int>exnum = { 1,3,5,7,9 };
	first_reverse(exnum);
	second_reverse(exnum);
}