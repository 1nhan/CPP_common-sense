/************************************************************************
*
*	8
	������ ���� �� �Է¹޾� ������ ��, ó�� N���� ������ ���� ����ϴ� 
	���α׷��� �ۼ��Ͻÿ�. ���� N�� �Է¹ް�, 
	�������� ����(vector)�� ������ ��, ó�� N���� ���� �ջ��Ͻÿ�.
	��:

	```�ڵ�
	Please enter the number of values you want to sum : 3
	Please enter some integers(press �� | �� to stop) : 12 23 13 24 15 |
	The sum of the first 3 numbers(12 23 13) is 48
	```

	��� �Է��� ó���� �� �ֵ��� �Ͻÿ�.���� ���,
	���Ϳ� ����� ������ �� ���� ���� �ջ��Ϸ��� �� ��� 
	���� �޽����� ����Ͻÿ�.

	9
	���� ���������� ���α׷��� �����Ͽ�, ����� int�� ǥ���� �� ���� ��� 
	������ ����ϵ��� �Ͻÿ�.

	10
	���� ���������� ���α׷��� �����Ͽ� int ��� double�� ����Ͻÿ�. 
	����, ������ ���� ���� ���̸� ���� double ���͸� �����ϰ�, 
	�� ���� ���͸� ����Ͻÿ�.
*
*************************************************************************/
#include<algorithm>
import std;
using namespace std;
//2'147'483'647

void bug_outofrange()
{
	cout << "������ ��� �Է��Դϴ�." << '\n';
}

/* E4_09 int�� ǥ���� �� ���� ��� */
int bug_not_int(int n)
{	
	if (n > 2'147'483'647 || n < -2'147'483'648) 
	{ cout << "int�� ������ ����ϴ�." << '\n'; return 0; }
	return n;
}

int main(void)
{
	int N = -1, i = -1, sum = 0;
	//Please enter the number of values you want to sum : 3
	cout << "Please enter the number of values you want to sum : ";
	
	cin >> N;
	bug_not_int(N);


	vector<int>number_group;
	cout<< '\n';

	cout << "Please enter some integers(press �� | �� to stop) : ";
	while (cin >> i){
		bug_not_int(i);
		cout << "Please enter some integers(press �� | �� to stop) : ";
		//Please enter some integers(press �� | �� to stop) : 12 23 13 24 15 |
		number_group.push_back(i);
	}
	cout<< '\n';

	//The sum of the first 3 numbers(12 23 13) is 48
	cout << "The sum of the first " << N << " numbers(";

	for(int x=0; x<N;++x)
	{
		if (x >= N) { bug_outofrange(); break; }
		cout<<bug_not_int(number_group[x])<<' ';
		sum += number_group[x];
	}
	
	cout<<") is "<<bug_not_int(sum)<<'\n';
}