/****************************************************************************
*
*	�̸� ���� ������� �����Ͽ� ��ǥ�� ���е� ���·� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
* 
*	���ڿ�(string) ������ �����Ͻÿ�.
*	��: �Է°��� Steinbeck, Hemingway, Fitzgerald�̸� 
*	����� Fitzgerald, Hemingway, Steinbeck
* 
*****************************************************************************/

import std;
using namespace std;

int main(void)
{
	string val1 = " ", val2 = " ", val3 = " ";

	/*�Է�*/
	cout << "������ ���ڿ� ���� �Է��ϼ���." << '\n';
	cin >> val1 >> val2 >> val3;

	/*�������� ����*/
	if (val1 >= val2 && val1 >= val3)
	{
		if (val2 <= val3) cout << val2 << ", " << val3 << ", " << val1;
		else cout << val3 << ", " << val2 << ", " << val1;
	}
	else if (val2 >= val1 && val2 >= val3)
	{
		if (val1 <= val3) cout << val1 << ", " << val3 << ", " << val2;
		else cout << val3 << ", " << val1 << ", " << val2;
	}
	else
	{
		if (val1 <= val2) cout << val1 << ", " << val2 << ", " << val3;
		else cout << val2 << ", " << val1 << ", " << val3;
	}
	return 0;
}