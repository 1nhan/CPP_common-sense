

import std;
using namespace std;

enum class Month {
	jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

vector<string> month_tbl = {
    "not a month",  // index 0
    "january",      // 1월
    "february",     // 2월
    "march",        // 3월
    "april",        // 4월
    "may",          // 5월
    "june",         // 6월
    "july",         // 7월
    "august",       // 8월
    "september",    // 9월
    "october",      // 10월
    "november",     // 11월
    "december"      // 12월
};

auto to_int(Month&m)->int
{
	return static_cast<int>(m);
}

auto operator++(Month m)->Month
{
	return (m == Month::dec) ?
		Month::jan : Month{ to_int(m) + 1 };
}
auto operator<< (ostream & os, Month m)->ostream&
{
	return os << month_tbl[to_int(m)];
}

auto f() -> void
{
    Month m = Month::dec;
    cout << ++m<< '\n';
    cout << m << '\n';

}
auto main() -> int
{
	f();
}