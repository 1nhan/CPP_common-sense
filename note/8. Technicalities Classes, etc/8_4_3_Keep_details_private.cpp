/*
*	Date�� ���� ǥ���� ����ڿ��� ���� ������ �� ������ �ϰ�, 
	�츮�� �����ϴ� ���� ��� �Լ�(public member function)�� ���ؼ��� ������ �� �ֵ��� �ؾ� �Ѵ�
*/


import std;
using namespace std;

auto error(const string& msg)
{
	throw runtime_error(msg);
}

class Date {
public:
	Date(int y, int m, int d);	// ��ȿ�� ��¥���� Ȯ�� �� �ʱ�ȭ
	auto add_day(int n) -> void { d += n; }		// ��¥�� n���� ��Ŵ
	auto month()->int	{ return m; }
	auto day()->int		{ return d; }
	auto year()->int	{ return y; }
	auto is_valid() -> bool 
	{//�ܼ� day�� ���
		if (d < 1 || d>31) {
			error("Invalid");
			return false;
		}
		return true;
	}
private:
	int y, m, d; // �� �� ��
};
Date::Date(int y, int m, int d)
	:y{y},m{m},d{d}
{// ��ȿ�� ��¥���� Ȯ�� �� �ʱ�ȭ
	if (!is_valid())
		error("Invalid");
}
Date Today{2025,10,27};	//Date Ÿ���� ����.

ostream& operator<<(ostream& os, Date& day)
{
	return os << "( " << day.year() << " - " << day.month() << day.day()<<" )";
}

auto print_today() -> void
{
	cout << Today << '\n';
}

auto main() -> int
{
	print_today();

}