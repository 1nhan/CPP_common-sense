/************************************************************************
*
*	���� ������ ���� ���α׷��� �ۼ��ϼ���.
*	����, ����, ����, �������� �� ���� �⺻ ������ 
*	�� ���� �Է°��� ���� ������ �� �־�� �մϴ�.
*	����ڿ��� �� ���� double ���� ������ ��Ÿ���� 
*	���� �ϳ��� �Է¹޵��� �ϼ���.
*	��: �Է°��� 35.6, 24.1, '+'�̸� ����� ��The sum of 35.6 and 24.1 is 59.7�� 	
*
*************************************************************************/
import std;
using namespace std;

int main(void)
{
	double val1 = -1, val2 = -1;
	char operation = ' ';
	/*�Է�*/
	cin >> val1 >> val2 >> operation;
	/*�Է� ��*/

	/*���*/
	if (operation == '+')
		cout << "The sum of " << val1 << " and " <<
		val2 << " is " << val1+val2 << '\n';
	else if (operation == '-')
		cout << "The difference of " << val1 << " and " <<
		val2 << " is " << val1-val2<< '\n';
	else if (operation == '*')
		cout << "The product of " << val1 << " and " <<
		val2 << " is " << val1*val2 << '\n';
	else if (operation == '/')
		cout << "The quotient of " << val1 << " and " <<
		val2 << " is " << val1/val2 << '\n';
	else cout << "reject" << '\n';
	/*��� ��*/

	return 0;
}