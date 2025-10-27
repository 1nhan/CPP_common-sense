
import std;
using namespace std;

struct my_Date
{
	int y;
	int m;
	int d;

	my_Date(int y, int m, int d);
	void add_day(int d);
};

/*********************************************
*				Date ������
**********************************************/
my_Date::my_Date(int y, int m, int d)
	:y{y},m{m},d{d}{ }

void add_day(int d)
{
	d += d;
}

/**********************************************
*				helping function

void init_day(my_Date& dd, int y, int m, int d)
{
	dd.y = y;
	dd.m = m;
	dd.d = d;
}
void add_day(my_Date& dd, int d)
{
	dd.d += d;
}

***********************************************/


/********************************************
*				BAD FUNCTION
void f()
{
	my_Date today;
	cout << today << '\n';
	init_day(today, 2025, 10, 10);
	my_Date tommorow;
	tommorow.y = today.y;
	tommorow.m = today.m;
	tommorow.d = today.d + 1;
	cout << tommorow<< '\n';

}
* 1. today ���� ���� �� ��� �ʱ�ȭ x
* 2. ��� d�� 1�� ���ϴ� ����� ���� ����.
*********************************************/


int main()
{
	my_Date date{ 2025,10,10 };
	cout << date.y<<'.'<<date.m<<'.'<<date.d << '\n';
	date.add_day(1);
	cout << date.y<<'.'<<date.m<<'.'<<date.d << '\n';
}