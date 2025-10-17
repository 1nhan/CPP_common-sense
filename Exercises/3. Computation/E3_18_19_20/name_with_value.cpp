/************************************************************************
*
* 	�̸��� �� ��(name - value pair)�� �Է¹޴� ���α׷��� �ۼ��ϼ���.
*	��: Joe 17, Barbara 22 �� �̸��� names ���Ϳ�, 
*	�� ���� scores ���Ϳ� ���� ��ġ�� �����ϼ���.
*	�� : names[7] == "Joe"�̸� scores[7] == 17 
*	�Է� ���� ���� : NoName 0 �̸��� �ߺ��Ǹ� ���� �޽����� ����ϰ� �����ϼ���.
*	���(�̸�, ����) ���� �� �پ� ����ϼ���.
*
*	�� ���α׷��� �����Ͽ�, 
*	�̸��� �� ���� �Է��� �� ������ ���� �̸��� �Է��ϸ� �ش� ������ ����ϰų� 
*	"name not found"�� ����ϼ���.
*
*	�� ���α׷��� �����Ͽ�, 
*	�̸��� �� ���� �Է��� �� ������ ���� ������ �Է��ϸ� �ش� ������ ���� ��� �̸��� 
*	����ϰų� "score not found"�� ����ϼ���.
*
*************************************************************************/

import std;
using namespace std;

void error(const string& msg) {
	throw runtime_error(msg);
}

int main(void) {
	vector<string>name_vec;
	vector<double>value_vec;
	int value = -1;
	string name = " ";
	while (cin >> name >> value) {
		if (name == " ") error("no name");
		name_vec.push_back(name);
		value_vec.push_back(value);
		if (name == "NoName" && value == 0) {
			error("error massage");
			if (name_vec.size() != value_vec.size()) 
				error("Different size");
			
			for (int i = 0; i < name_vec.size(); ++i) 
				cout << name_vec[i] << ' ' << value_vec[i] << '\n';
			return 0;
		}
	}
}