/*********************************************************************************

	[7] vector<string> name�� �ټ� ���� �̸��� �Է¹ް�, 
	����ڿ��� �ش� �ι����� ���̸� �Է¹޾� vector<double> age�� �����Ͻÿ�.
	�׷� ���� �ټ� ����(name[i], age[i])�� ����Ͻÿ�.
	�̸��� ������ ��(sort(name.begin(), name.end())), 
	�ٽ�(name[i], age[i]) ���� ����Ͻÿ�.
	���⼭ ��ٷο� �κ��� ���ĵ� �̸� ���Ϳ� �°� ���� ������ ������ ���ߴ� ���Դϴ�.
	��Ʈ: �̸��� �����ϱ� ���� ���纻�� �����ΰ�, 
	�̸� ����Ͽ� ���� �� �ùٸ� ������ ���� ���͸� �����Ͻÿ�.

	[8] ���� ���������� �����Ͽ� �̸��� ������ ���Ƿ� �Է¹��� �� �ֵ��� �Ͻÿ�.

*********************************************************************************/

import std;
using namespace std;

void copy_vector(vector<string>& name, vector<double>& age)
{
	for (int i : age) cout << i << '\n';
};
int main(void)
{
	int num = 5;
	int how = num;
	cin >> how;
	string name_val = " ";
	vector<string> name_vec;
	double age_val = 0.0;
	vector<double>age_vec;

	
	for (int i = 0; i < num; ++i) {
		cin >> name_val;
		name_vec.push_back(name_val);
	}
	for (int i = 0; i < how; ++i) {
		cin >> age_val;
		age_vec.push_back(age_val);
	}
	sort(age_vec.begin(), age_vec.end());
	copy_vector(name_vec,age_vec);
	sort(name_vec.begin(), name_vec.end());

	for (int i = 0; i < num; ++i) {
		cout << "�̸�: " << name_vec[i] << '\n' 
			<< "����: " << age_vec[i] << '\n';
	}

}