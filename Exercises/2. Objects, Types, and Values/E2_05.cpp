/****************************************************************************
*
*	����ڿ��� �� ���� ���� ���� �Է��ϵ��� ��û(prompt)�ϴ� ���α׷��� �ۼ��Ͻÿ�.
*	�Էµ� ���� int Ÿ�� ���� val1�� val2�� �����ϰ�, �� ���� ���� ��, ū ��,
*	��(sum), ��(difference), ��(product), ����(ratio)�� ����Ͽ� ����Ͻÿ�.
*
*	�� ���α׷��� �����Ͽ�, ����ڿ��� �ε��Ҽ��� ��(floating-point value)�� �Է¹ް� 
*	�̸� double Ÿ�� ������ �����ϵ��� �Ͻÿ�. 
*	������ �Է°��� ���� �� ���α׷��� ����� ���غ��ʽÿ�. 
*	����� ������? ���ƾ� �ϴ°�? ���̴� �����ΰ�?
* 
*****************************************************************************/

import std;
using namespace std;

int main(void)
{
	double val1 = -1, val2 = -1;
	cout << "�� ���� ���� ���� �Է��ϼ���." << '\n';
	cin >> val1 >> val2;

	double small = (val1 <= val2) ? val1 : val2;
	double large = (val1 > val2) ? val1 : val2;

	cout << "���� ��(min): " << small << '\n';
	cout << "ū ��(max): " << large << '\n';
	cout << "��(sum): " << small + large << '\n';
	cout << "��: " << large - small << '\n';
	cout << "��: " << small * large << '\n';

	if (val1 == 0 || val2 == 0) cout << "����(ratio): reject" << '\n';
	else cout << "����(ratio): " << large / small << '\n';

	return 0;
}