/************************************************************************
*	
*	E4_02
*	���� ���α׷��� ����(Celsius) �µ��� �Է¹޾� �̺�(Kelvin)���� ��ȯ�Ѵ�. 
*	�� �ڵ忡�� ���� ������ �ִ�. ������ ã�� �����ϰ�, �ڵ带 �����Ͻÿ�.
*
*	```cpp
	double ctok(double c) // ������ �̺����� ��ȯ
	{
	int k = c + 273.25;
	return int
	}
	int main()
	{
	double c = 0; // �Է� ���� ����
	cin >> d; // �µ� �Է�
	double k = ctok("c"); // �µ� ��ȯ
	Cout << k << '/n' ; // �µ� ���
	}
*	```
*	
*	E4_03
	���� ����(absolute zero)�� ���� ������ ���� ���� �µ���, 
	-273.15��C �Ǵ� 0K�̴�. 
	�� ���α׷��� �����ϴ��� �̺��� ���� �µ��� �Է¹����� 
	�߸��� ����� ����Ѵ�. 
	main() �Լ��� �µ��� -273.15��C���� ���� ��� ������ �߻���Ű�� 
	�˻縦 �߰��Ͻÿ�.
*
*	E4_04
	�������� 3�� �ٽ� �����ϵ�, 
	�̹����� ���� ó���� ctok() �Լ� ���ο��� �����Ͻÿ�.
*
*	E4_05
	�̺�(Kelvin)�� ����(Celsius)�ε� ��ȯ�� �� �ֵ��� �Ͻÿ�.
*
*	E4_06
	������ ȭ��(Fahrenheit) ���� ��ȯ ���α׷��� �ۼ��Ͻÿ�. 
	����� Ÿ������ ����(estimation)�� Ȱ���Ͽ� Ȯ���Ͻÿ�.
*
*************************************************************************/
import std;
using namespace std;

void error(double n)
{
	cout << "error!" << '\n';
}

double ctok(double c) // ������ �̺����� ��ȯ
{
	/* E4_04*/
	if (c < -273.15) {error(c); return 0;}
	double k = c + 273.15;
	return k;
}
/*E4_05 �̺��� ������ ��ȯ ���α׷�*/
double ktoc(double k)
{
	double c = k - 273.15;
	if (c < -273.15) {error(c); return 0;}
	return c;
}

/*E4_06 ���� -> ȭ��(Fahrenheit) ���� ��ȯ ���α׷�*/
double ctof(double c)
{
	if (c < -273.15) {error(c); return 0;}
	double f = (c * 1.8) + 32;
	return f;
}

/*E4_06 ȭ��(Fahrenheit)->���� ���� ��ȯ ���α׷�*/
double ftoc(double f)
{
	double c = (f - 32) / 1.8;
	if (c < -273.15) {error(c); return 0;}
	return c;
}
int main()
{
	double c = -1; // �Է� ���� ����

	cout << "�����µ� �Է�" << '\n';
	cin >> c; // ���� �µ� �Է� 

	/* E4_03
	if (c < -275.15) {error(c); return 0;}
	*/
	double k = ctok(c); // �µ� ��ȯ
	double c2 = ktoc(k); //E4_05
	cout << c << '\n'; // �µ� ���
	cout << k << '\n'; // �µ� ���
	cout << c2 << '\n'; // �µ� ���
}


/*	E4_02 ������ ã�� �����ϰ�, �ڵ带 ����
return int				// int�� �ڷ���, k�� ������. 
cin >> d;				// d�� ������� �ʴ� ���� c�� �ٲ�ߵ�
double k = ctok("c");	// �Լ� ctok()�� �Ű����� double���� ����.
Cout << k << '/n';		// Cout ��Ÿ cout���� 
*/

