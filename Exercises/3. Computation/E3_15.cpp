/************************************************************************
*
*	�������� ���� ���� �����ϴ� ���� �ֺ�(mode)�̶�� �մϴ�. 
*	���� ���� ���տ��� �ֺ��� ã�� ���α׷��� �ۼ��ϼ���.
*	
*************************************************************************/
#include <algorithm>
import std;
using namespace std;

int main(void)
{
	int number = -1;

	/*���� ���� ���� ����*/
	vector<int>posit_int;
	while (cin >> number)
	{
		if (number < 0) cout << "���� ���� ������ �Է°����մϴ�." << '\n';
		posit_int.push_back(number);
	}
	/*���� ���� ���� ���� ��*/

	/*�ֺ�(count)�� �ֺ�(mode) ���� ������ �ʱ�ȭ*/
	int count = 0; 
	int max_count = count;
	int number = posit_int[0];
	int mode = number;


	/*�ֺ�, �ֺ� ����*/
	for (int x = 1; x < posit_int.size(); ++x)
	{
		if(posit_int[x-1] == posit_int[x]) ++count;
		if (posit_int[x - 1] != posit_int[x])
		{
			max_count = count;
			number = posit_int[x];
		}
		mode = number;
	}
	
	
	return 0;
}