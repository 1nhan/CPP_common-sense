/*
	Date�� ���� ��¿����� �����Ѵٴ� ����
*/


import std;
using namespace std;

auto error(const string& msg)
{
	throw runtime_error(msg);
}

struct Date
{
	int y, m, d; // ��, ��, ��
	auto is_valid(int d) -> bool
	{//��ȿ�� ��¥�ΰ���? �ܼ��ϰ� �ϸ� ���
		if (d < 1 || d>31) {
			error("day is out of range");
			return false;
		}
		return true;
	}
};
Date Today;	//Date Ÿ���� ����.

auto init_day(Date& day, int y, int m, int d) -> void
{
	if (!day.is_valid(d))//��ȿ�� ��¥�Դϱ�?
		error("Invalid");
	day.y = y;
	day.m = m;
	day.d = d;
}

ostream& operator << (ostream& os, const Date& d)
{
	return os << d.y << "-" << d.m << d.d;
}
auto f() -> void
{
	init_day(Today, 2025, 10, 27);
	Date Tommorow;
	Tommorow.y = Today.y;
	Tommorow.m = Today.m;
	Tommorow.d = Today.d+1;

	cout << Tommorow << '\n';

}

auto main() -> int
{
	f();
}