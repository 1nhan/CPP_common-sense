/*
*	유효하지 않은 날짜를 발견했을 때 우리는 어떻게 해야 할까요? 
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
	{// 유효한 날짜인지 확인 후 초기화 
		if (!is_valid())
			throw Invalid{}; 
	}
	auto add_day(int n) -> void { d += n; }
	auto month() -> int { return m; }
	auto day() -> int { return d; }
	auto year() -> int { return y; }
	auto is_valid() -> bool
	{//단순 day만 계산
		return 0 < m && m < 13;
	}
private:
	int y, m, d; // 연 월 일
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