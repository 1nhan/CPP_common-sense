/******************************************************************************
* 
	[2] ���� ����(vector<int>)�� cout���� ����ϴ� �Լ� print()�� �ۼ��Ͻÿ�.
	�� �Լ��� ��¿� ���� ���̱� ���� ���ڿ��� ���� �� ���� �μ��� �޾ƾ� �մϴ�.

*******************************************************************************/

import std;
using namespace std;
void my_print(const string tag, const vector<int>&n1, const vector<int>&n2) {

	cout << tag << '\n';
	for (int x : n1) cout<<x<<' ';
	for (int x : n2) cout<<x<<' ';
	
}
