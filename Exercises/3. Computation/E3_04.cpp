/************************************************************************
*
*	double ������ ������ ����(vector)�� �Է¹�������.
*	�� ���� ���� �� �Ÿ���� �����մϴ�.
*	��ü �Ÿ�(��� �Ÿ��� ��)�� ����ϰ� ����ϼ���.
*	������ ���� ���� �ּ� �Ÿ��� �ִ� �Ÿ��� ����ϼ���.
*	������ ���� �� ��� �Ÿ��� ����Ͽ� ����ϼ���.
*
*************************************************************************/
#include <algorithm>
import std;
using namespace std;

int main(void)
{
	/*double ������ ������ ����(vector)�� �Է�*/
	vector<double>city_range;
	double range_point;
	while (cin >> range_point)
		city_range.push_back(range_point);
	/*double ������ ������ ����(vector)�� �Է� ��*/
	
	/*��ü �Ÿ�(��� �Ÿ��� ��)�� ����ϰ� ���*/
	/*������ ���� ���� �ּ� �Ÿ��� �ִ� �Ÿ��� ���.*/
	/*������ ���� �� ��� �Ÿ��� ����Ͽ� ���.*/
	double sum = city_range[0];
	double min = city_range[0];
	double max = min;

	for (int x = 1; x < city_range.size(); x++)
	{
		sum += city_range[x];
		if (city_range[x-1] > city_range[x])min = city_range[x];
		else if (city_range[x-1] < city_range[x])max = city_range[x];
	}
	cout << "��ü �Ÿ�: " << sum << '\n';
	cout << "�ּ� �Ÿ�: " << min <<'\n';
	cout << "�ִ� �Ÿ�: " << max <<'\n';
	cout << "��� �Ÿ�: " << sum / city_range.size()<<'\n';
	/*��ü �Ÿ�(��� �Ÿ��� ��)�� ����ϰ� ��� ��*/

	return 0;
}