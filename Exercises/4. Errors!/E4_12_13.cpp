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

// ������ 1234�̰� ����ڰ� 1359�� �Է��ϸ�, ����� ��1 bull and 1 cow���� �Ǿ�� �Ѵ�.
int Bulls(vector<int>cinput,vector<int>uinput)
{
	int bull = 0;
	for (int x = 0; x < rule_is_four; ++x)
		if (cinput[x] == uinput[x]) ++bull;
	return bull;
}
int cows(vector<int>cinput,vector<int>uinput)
{
	int cow = 0;
	for (int x = 0; x < rule_is_four; ++x)
		for (int y = 0; y < rule_is_four; ++y)
			if (cinput[x]!=uinput[x]&&cinput[x] == uinput[y]) ++cow;
	return cow;
}


int main(void)
{
	cout << "��Bulls and Cows��" << '\n';
	/*�յ������ �̿��� ��ǻ����ǲ vector ���� */
	default_random_engine engine;				//�⺻ ���� ������ engine��ü
	uniform_int_distribution<int> dist(0, 9);	//0-9���� �յ��ϰ� �����ǰ� ��ȯ
	vector<int>computer_input;					//���� computer_input ����
	int u_input = -1;
	vector<int>user_input;
	
	for (int x = 0; x < rule_is_four; ++x)		//���Ϳ� �⺻���������⸦ �̿��� (0-9����)�յ��ϰ� ���.
	{	
		computer_input.push_back(dist(engine));
	}

	/* u_input�Է��� ���� user_input�� ����*/
	cout << "�װ��� ���� �Է��ϼ���" << '\n';
	while (cin >> u_input)
	{
		user_input.push_back(u_input);
		
		/*user_input�� ũ�Ⱑ 4�϶����� ��*/
		if(user_input.size()==4)
			if (Bulls(computer_input, user_input) != 4)
				cout << "��"		<< Bulls(computer_input, user_input) 
				<< "bull and "	<< cows(computer_input, user_input) 
				<< "cow��" << '\n';
			else { cout <<"����!!!!!" << '\n'; return 0; }
	}
}

/* 1���õ� ����.

1. ��ø �ݺ��� �� y�� �������� �ʰ� x�� �����ϰԲ� �̻��� �ݺ����� ����.(�� ����) 
2. user_input�� push_back�ϴ� �ѹ��� �ݺ��ǰ� �ι�°���ʹ� �Ƹ��� user_input 5,6,7,8�� 
�����Ǿ� �ݺ����� �� ����ó�� �ݺ��� �ȵ�. (�� ����)

*/