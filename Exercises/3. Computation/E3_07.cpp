/************************************************************************
*
*	���ڿ� "zero"���� "nine"���� 10���� ���� ���� ���͸� ���弼��.
*	�� ���͸� ����Ͽ� ���ڸ� �ش��ϴ�
*	���� �ܾ�� ��ȯ�ϴ� ���α׷��� �ۼ��ϼ���.
*	��: �Է� 7 �� ��� "seven" ���� �Է� ������ ����Ͽ�
*	���� �ܾ ���ڷ� ��ȯ�ϴ� ��ɵ� �߰��ϼ���.
*	�� : �Է� "seven" �� ��� 7
*
*************************************************************************/
#include<algorithm>;
import std;
using namespace std;
int main(void)
{
	/*���ڿ� "zero"���� "nine"���� 10���� ���� ���� ���͸� �����*/
	vector<string>number = { "zero","one","two","three","four",
		"five","six","seven","eight","nine" };
	int num = -1;
	string eng_num = " ";
	/*���� �ܾ�� ��ȯ�ϴ� ���α׷�*/
	cout << "����, ��� �Է��ϼ���>>(0-9����)" << '\n';
	while (cin >> num>>eng_num)
	{
		cout << num << " | " << number[num] << '\n';
		for (int x = 0; x < number.size(); ++x)
			if (eng_num == number[x])cout << eng_num << " | " << x << '\n';
	}
	
	return 0;
}