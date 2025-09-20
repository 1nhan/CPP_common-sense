/************************************************************************
*
*	������, ����, ���� ������ �����ϼ���. ������ �𸥴ٸ� ������ �˻��غ�����. 
*	���α׷��ӿ��Դ� ����(research)�� �߿��� �۾��Դϴ�. 
*	�� ������ switch ���� ����Ͽ� �ذ��ϼ���. 
*	��ǻ�ʹ� �������� ����, ����, �� �� �ϳ��� �����ؾ� �մϴ�. 
*	��¥ ������ ��Ʊ� ������, �̸� ������ ���� ���͸� ����� ����ϼ���. 
*	���͸� ���α׷��� �����ϸ� �׻� ���� ������ �ǹǷ�, 
*	����ڿ��� ���� �Է¹޴� ��ĵ� ����ϼ���. 
*	����ڰ� ��ǻ���� ���� ������ �����ϱ� ��Ƶ��� �پ��� ������ �õ��غ�����.
*
*************************************************************************/
#include <algorithm>
import std;
using namespace std;

int main(void)
{
	vector<string>card = { "����!","����!","��!" };
	int user_input = -1;
	int computer_input = -1;

	for (int round = 0;; ++round)
	{
		/*����ڿ��� �Է�*/
		cout << "1(����!), 2(����!), 3(��!)\n";
		cin >> user_input;

		/*��ȿ�� �˻�*/
		if (user_input < 1 || user_input>3)
		{
			cout << "reject the game\n";
			continue;
		}

		/*��ǻ���� ���� ����*/
		if (round % 2 == 0) computer_input = (round + user_input )% 3;
		else computer_input = round % 3;

		/*����ġ���� ���*/
		switch (user_input)
		{
				/*������ ������ ����*/
			case 1:cout << "������ " << card[user_input - 1] << "�� �´�.\n"; 
				if (card[computer_input] == card[2])
				{
					cout <<"��ǻ�ʹ� "<<card[computer_input]<<"�� �´�." << '\n';
					cout << "�̰��.\n";
				}
				else if (card[computer_input] == card[1])
				{
					cout <<"��ǻ�ʹ� "<<card[computer_input]<<"�� �´�." << '\n';
					cout << "����.\n";
				}
				else
				{
					cout << "��ǻ�ʹ� " << card[computer_input] << "�� �´�." << '\n';
					cout << "����.\n";
				}
				break;

				/*������ ������ ����*/
			case 2:cout << "������ " << card[user_input - 1] << "�� �´�.\n"; 
				if (card[computer_input] == card[0])
				{
					cout << "��ǻ�ʹ� " << card[computer_input] << "�� �´�." << '\n';
					cout << "�̰��.\n";
				}
				else if (card[computer_input] == card[2])
				{
					cout << "��ǻ�ʹ� " << card[computer_input] << "�� �´�." << '\n';
					cout << "����.\n";
				}
				else
				{
					cout << "��ǻ�ʹ� " << card[computer_input] << "�� �´�." << '\n';
					cout << "����.\n";
				}
				break;
			
				/*������ ���� ����*/
			case 3:cout << "������ " << card[user_input - 1] << "�� �´�.\n"; 
				if (card[computer_input] == card[1])
				{
					cout << "��ǻ�ʹ� " << card[computer_input] << "�� �´�." << '\n';
					cout << "�̰��.\n";
				}
				else if (card[computer_input] == card[0])
				{
					cout << "��ǻ�ʹ� " << card[computer_input] << "�� �´�." << '\n';
					cout << "����.\n";
				}
				else
				{
					cout << "��ǻ�ʹ� " << card[computer_input] << "�� �´�." << '\n';
					cout << "����.\n";
				}
				break;
		}
	}
	return 0;
}