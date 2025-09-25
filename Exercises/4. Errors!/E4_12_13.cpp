/************************************************************************
*
*	12
	��Bulls and Cows����� ������ ���� ������ �����Ͻÿ�.
	���α׷��� 0~9 ������ ���� �ٸ� �� ���� ������ ���Ϳ� �����ϰ�, 
	����ڴ� �ݺ������� �����Ͽ� �� ���ڸ� ����� �Ѵ�.���� ���, 
	������ 1234�̰� ����ڰ� 1359�� �Է��ϸ�, ����� ��1 bull and 1 cow���� �Ǿ�� �Ѵ�.
	������ �� ���� ���ڸ� ��Ȯ�� ������ ���� ������ ��ӵȴ�.

	13
	�� ������ ������ �ϵ��ڵ��Ǿ� �־� �ݺ� �÷��̰� ��ƴ�. 
	���α׷��� �����Ͽ� ����ڰ� �ݺ������� �÷����� �� �ֵ��� �ϰ�, 
	�� ���Ӹ��� ���ο� �� ���� ���ڰ� �����ǵ��� �Ͻÿ�. 
	PPP_support ����� random_int(0,9)�� �� �� ȣ���Ͽ� ������ �����Ͻÿ�. 
	���α׷��� �ݺ� ������ ������ ���� ���� �������� �����Ǵ� ���� ���Ϸ���, 
	����ڿ��� �ƹ� ���ڳ� �Է¹ް� �̸� seed(n) �Լ��� �����Ͽ� �õ带 �����Ͻÿ�. 
	�� n�� �õ�(seed)�� �Ҹ���, ���� �ٸ� �õ�� ���� �ٸ� ���� �������� �����Ѵ�.
* 
*************************************************************************/

#include<algorithm>
import std;
using namespace std;

/* ������ �� 4���� ���ڸ��� rule_is_four�� ���� */
constexpr int rule_is_four = 4;	

/*���� size�� ���� ��ȿ�� �˻�*/
bool Is_Size_Four(vector<int> computer_para_input, vector<int> user_para_input)
{
	if (computer_para_input.size() > 4 || user_para_input.size() > 4)
	{
		cout << "�ε��� ������ �ʰ��߽��ϴ�. ���α׷��� ��������ּ���." << '\n';
		return false;
	}
	return true;
}

/*Bulls �Լ�*/
int Bulls(vector<int> computer_para_input, vector<int> user_para_input)
{
	int bull = 0;
	Is_Size_Four(computer_para_input, user_para_input);
	for (int x = 0; x < rule_is_four; ++x)
		if (computer_para_input[x] == user_para_input[x]) ++bull;
	return bull;
}
/*Cows �Լ�*/
int Cows(vector<int> computer_para_input, vector<int> user_para_input)
{
	int cow = 0;
	Is_Size_Four(computer_para_input, user_para_input);
	if (computer_para_input.size() > 4 || user_para_input.size() > 4) return 0;
	for (int x = 0; x < rule_is_four; ++x)
		for (int y = 0; y < rule_is_four; ++y)
			if (computer_para_input[x] != user_para_input[x] &&
				computer_para_input[x] == user_para_input[y]) ++cow;
	return cow;
}
/*Bulls and Cows �Լ� ��*/

int main(void)
{
	cout << "��Bulls and Cows��" << '\n';

	/*�յ������ �̿��� ��ǻ�ͺ��� vector ���� */
	default_random_engine engine;				//�⺻ ���� ������ engine��ü
	uniform_int_distribution<int> dist(0, 9);	//0-9���� �յ��ϰ� �����ǰ� ��ȯ
	vector<int>computer_vector;					//���� computer_input ����

	/* �������� vector ���� */
	int user_input = -1;
	vector<int>user_vector;
	
	while(computer_vector.size()<=4)				//���Ϳ� �⺻���������⸦ �̿��� (0-9����)�յ��ϰ� ���.
	{	
		computer_vector.push_back(dist(engine));
	}

	for (int x = 0; x < rule_is_four; ++x)
	{
		cout << computer_vector[x];
	}
	cout << '\n';
	/* user_input�Է��� ���� user_vector�� ����*/
	cout << "�װ��� ���� �Է��ϼ���" << '\n';
	while(cin>> user_input)
	{
		user_vector.push_back(user_input);
		/*user_vector�� ũ�Ⱑ 4�϶����� ��*/
		if (user_vector.size() == 4)
		{
			if (Bulls(computer_vector, user_vector) != 4)
			{
				cout << "��"		<< Bulls(computer_vector, user_vector)
				<< "bull and "	<< Cows(computer_vector, user_vector)
				<< "cow��" << '\n';
				user_vector.clear();
			}
			else { cout <<"4Bulls. GAME OVER" << '\n'; return 0; }
		}
	}
}

/* 1���õ� ����.

1. ��ø �ݺ��� �� y�� �������� �ʰ� x�� �����ϰԲ� �̻��� �ݺ����� ����.(�� ����) 
2. user_input�� push_back�ϴ� �ѹ��� �ݺ��ǰ� �ι�°���ʹ� �Ƹ��� user_input 5,6,7,8�� 
�����Ǿ� �ݺ����� �� ����ó�� �ݺ��� �ȵ�. (�� ����)

*/
