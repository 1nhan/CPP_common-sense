/*
*	enum과 enum class
*/

import std;
using namespace std;

auto error(const string& msg)
{
	throw runtime_error(msg);
}

enum class Month {
	jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};


class Date {
public:
	class Invalid {};
	Date(int y, int m, int d)
		:y{ y }, m{ m }, d{ d }
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
ostream& operator<<(ostream& os, Month& mon)
{
	return os << mon;
}

auto to_int(Month&mon) -> int
{
	return static_cast<int>(mon);
}
auto calling_month() -> void
{
	Month m0 = jan;
	Month m1 = Month::jan;
	Month m2 = Month{ 0 };
	Month m3{ 0 };
	int x1 = to_int(m1);


}
auto main() -> int
{
	calling_month();
}