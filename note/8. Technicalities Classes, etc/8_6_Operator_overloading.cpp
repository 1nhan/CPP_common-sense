

import std;
using namespace std;

enum class Month {
	jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

vector<string> month_tbl = {
    "not a month",  // index 0
    "january",      // 1��
    "february",     // 2��
    "march",        // 3��
    "april",        // 4��
    "may",          // 5��
    "june",         // 6��
    "july",         // 7��
    "august",       // 8��
    "september",    // 9��
    "october",      // 10��
    "november",     // 11��
    "december"      // 12��
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