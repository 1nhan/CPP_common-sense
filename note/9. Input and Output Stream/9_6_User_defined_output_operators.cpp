
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

auto to_int(Month m ) -> int
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
    auto get_Year() const-> const Year { return yy; }
    auto get_Month() const->const Month { return mm; }
    auto get_Day() const-> const int{ return dd; }
private:
    Year yy{2000};
    Month mm{Month::jan};
    int dd{1};
};

auto operator<<(ostream& os, const Date& d)->ostream&
{
    return os << "( " 
        << d.get_Year().y<<", "
        << month_tbl[to_int(d.get_Month())]<<", "
        << d.get_Day() 
        << " )";
}
auto operator<<(ostream& os, const Date& d) -> ostream&
{
    return os << "( "
        << d.get_Year().y << ", "
        << month_tbl[to_int(d.get_Month())] << ", "
        << d.get_Day()
        << " )";
}
auto f() -> void
{
    Date tttt;
    cout <<tttt;
}

auto main() -> int
{
    f();
}