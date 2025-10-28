/*
    ?
*/


import std;
using namespace std;


enum class Month {
    jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};
vector<string>month_tbl{
    "none",
    "jan",
    "feb",
    "mar",
    "apr",
    "may",
    "jun",
    "jul",
    "aug",
    "sep",
    "oct",
    "nov",
    "dec" };

auto to_int(Month m) -> int
{
    return static_cast<int>(m);
}

auto operator++(Month m)->Month
{
    return m = (m == Month::dec) ?
        Month::jan : Month{ to_int(m) + 1 };
}

struct Year {
    int y;
};

class Date {
public:
    Date();
    Date(Year y, Month m, int d) :yy{ y }, mm{ m }, dd{ d } {};
    auto get_Year() const -> const Year { return yy; }
    auto get_Month() const -> const Month { return mm; }
    auto get_Day() const -> const int { return dd; }
private:
    Year yy{ 2000 };
    Month mm{ Month::jan };
    int dd{ 1 };
};


auto operator>>(istream& is, Date& dd) ->istream&
{
    int y, m, d;
    char ch1, ch2, ch3, ch4;

    is >> ch1 >> y >> ch2 >> m >> ch3 >> d >> ch4;
    if (!is)
        return is;
    if (ch1 != '(' || ch2 != ',' || ch3 != ',' || ch4 != ')') {
        is.clear(ios::failbit);
        return is;
    }
    dd = Date{Year{y}, Month{m}, d};
    return is;
}
auto operator<<(ostream& os, Date& dd)->ostream&
{
    return os << dd.get_Year().y<<" - "
        << month_tbl[to_int(dd.get_Month())]
        << dd.get_Day();
}

auto f() -> void
{
    Date day;
    cin >> day;
    cout << day;
}

auto main() -> int
{
    f();
}