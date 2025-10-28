/*
*	��ȿ���� ���� ��¥�� �߰����� �� �츮�� ��� �ؾ� �ұ��? 
*/

import std;
using namespace std;

auto error(const string& msg)
{
	throw runtime_error(msg);
}

class Date {
public:
	class Invalid {};
	Date(int y, int m, int d) 
		:y{y},m{m},d{d}
	{// ��ȿ�� ��¥���� Ȯ�� �� �ʱ�ȭ 
		if (!is_valid())
			throw Invalid{}; 
	}
	auto add_day(int n) -> void { d += n; }
	auto month() -> int { return m; }
	auto day() -> int { return d; }
	auto year() -> int { return y; }
	auto is_valid() -> bool
	{//�ܼ� day�� ���
		return 0 < m && m < 13;
	}
private:
	int y, m, d; // �� �� ��
};

ostream& operator<<(ostream& os, Date& day)
{
	return os << "( " << day.year() << " - " << day.month() << day.day() << " )";
}

auto f(int x, int y) -> void
try{
	Date dxy{ 2025,x,y };
	cout << dxy << '\n';
	dxy.add_day(2);
	cout << dxy << '\n';
}
catch (Date::Invalid){
	error("f(): Invalid Date");
}

auto main() -> int
{
	f(10, 28);
}