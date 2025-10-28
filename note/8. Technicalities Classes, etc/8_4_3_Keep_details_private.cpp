/*
*	Date의 내부 표현은 사용자에게 직접 접근할 수 없도록 하고, 
	우리가 제공하는 공개 멤버 함수(public member function)를 통해서만 접근할 수 있도록 해야 한다
*/


import std;
using namespace std;

auto error(const string& msg)
{
	throw runtime_error(msg);
}

class Date {
public:
	Date(int y, int m, int d);	// 유효한 날짜인지 확인 후 초기화
	auto add_day(int n) -> void { d += n; }		// 날짜를 n증가 시킴
	auto month()->int	{ return m; }
	auto day()->int		{ return d; }
	auto year()->int	{ return y; }
	auto is_valid() -> bool 
	{//단순 day만 계산
		if (d < 1 || d>31) {
			error("Invalid");
			return false;
		}
		return true;
	}
private:
	int y, m, d; // 연 월 일
};
Date::Date(int y, int m, int d)
	:y{y},m{m},d{d}
{// 유효한 날짜인지 확인 후 초기화
	if (!is_valid())
		error("Invalid");
}
Date Today{2025,10,27};	//Date 타입의 변수.

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