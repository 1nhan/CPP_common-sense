/************************************************************************
*
	����������(quadratic equation)�� a* x�� + b * x + c = 0�� ���¸� ���´�.
	�̸� Ǯ�� ���ؼ��� ���� ����(quadratic formula)�� ����Ѵ�:
	x = (-b �� ��(b�� - 4ac)) / 2a 
	��, b�� - 4ac�� 0���� ������ �Ǳ�(real root)�� �������� �����Ƿ� 
	��꿡 �����Ѵ�.������������ �ظ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	a, b, c�� �Է¹޾� ���� ����ϴ� �Լ��� �ۼ��ϰ�, 
	�Ǳ��� ���� ��� �޽����� ����Ͻÿ�.
	����� Ÿ������ ��� Ȯ���� �� �ִ°� ? ��Ȯ���� ������ �� �ִ°� ?
*
*************************************************************************/

#include <cmath>
#include<iostream>
using namespace std;

void no_real_root()
{
	cout <<"b�� - 4ac�� 0���� ������ �Ǳ�(real root)�� �������� �ʽ��ϴ�." << '\n';
}
double quadratic(double a, double b, double c)
{
	double d = b * b - (4 * a * c);
	if (d < 0) { no_real_root(); return 0; }
	else if (d == 0) {
		double x = -((b) / (2 * a));
		cout << "x = " << x << '\n';

		/*��Ȯ�� ����*/
		double check = a * x * x + b * x + c;
		if (check == 0) cout << "��Ȯ�� ������ �Ϸ�Ǿ����ϴ�." << '\n';
	}
	else {
		double x1 = ((-b + sqrt(d)) / (2 * a));
		double x2 = ((-b - sqrt(d)) / (2 * a));
		cout << "x1 = " << x1 << '\n' << "x2 = " << x2 << '\n';
		
		/*��Ȯ�� ����*/
		double check1 = a * x1 * x1 + b * x1 + c;
		if (check1 == 0) cout << "x1�� ���� ��Ȯ�� ������ �Ϸ�Ǿ����ϴ�." << '\n';
		double check2 = a * x2 * x2 + b * x2 + c;
		if (check2 == 0) cout << "x2�� ���� ��Ȯ�� ������ �Ϸ�Ǿ����ϴ�." << '\n';
	}
}

int main(void)
{
	double vala = -1, valb = -1, valc = -1;
	cout << "a, b, c�� �Է����ּ���." << '\n';
	cin >> vala >> valb >> valc;
	if (vala == 0) { cout << "2���������� �ƴմϴ�." << '\n'; return 0; }
	quadratic(vala, valb, valc);
	
return 0;
}