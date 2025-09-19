/************************************************************************
*
*	���� ������ ���� ���α׷��� �ۼ��ϼ���.
*	����, ����, ����, �������� �� ���� �⺻ ������
*	�� ���� �Է°��� ���� ������ �� �־�� �մϴ�.
*	����ڿ��� �� ���� double ���� ������ ��Ÿ����
*	���� �ϳ��� �Է¹޵��� �ϼ���.
*	��: �Է°��� 35.6, 24.1, '+'�̸� ����� ��The sum of 35.6 and 24.1 is 59.7��
*
*	�����Ͽ�, �� �ڸ� ���ڸ� ���� ���� �Ǵ� ���� �ܾ� ���·� �Է¹��� �� �ֵ��� �ϼ���.
*
*************************************************************************/
import std;
using namespace std;

int main(void)
{
	string eng_val1 = " ", eng_val2 = " ";
	char operation = ' ';
	int val1 = -1, val2 = -1;
	
	/*�� �ڸ� ������ ���� ���� ����*/
	vector<string>eng_number = 
	{ "zero","one","two","three","four",
	"five","six","seven","eight","nine" };

	/*�� �ڸ� ���ڸ� ���� ���� �Ǵ� ���� �ܾ� ���·� �Է�*/
	while (cin >> eng_val1 >> eng_val2 >> operation)
	{
		/*eng_val1, eng_val2�� int��*/
		for (int x = 0; x < eng_number.size(); ++x)
		{
			if (eng_val1 == eng_number[x]) val1 = x;
			else if (eng_val2 == eng_number[x]) val2 = x;
		}
		if (operation == '+')
			cout << "The sum of " << eng_number[val1] << " and " <<
			eng_number[val2] << " is " << val1 + val2 << '\n';
		else if (operation == '-')
			cout << "The difference of " << eng_number[val1] << " and " <<
			eng_number[val2] << " is " << val1 - val2 << '\n';
		else if (operation == '*')
			cout << "The product of " << eng_number[val1] << " and " <<
			eng_number[val2] << " is " << val1 * val2 << '\n';
		else if (operation == '/')
			cout << "The quotient of " << eng_number[val1] << " and " <<
			eng_number[val2] << " is " << val1 / val2 << '\n';
		else cout << "reject" << '\n';
	}
	/*�Է� ��*/

	return 0;
}