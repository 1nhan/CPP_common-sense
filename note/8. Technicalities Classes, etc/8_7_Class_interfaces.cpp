
import std;
using namespace std;

enum class Month {
	jan=1,feb,mar,apr,may, jun, jul, aug, sep, oct, nov, dec
};
struct Year {
	int y;
};
class Date
{
public:
	Date(Year y, Month m, int d)
		:y{ y }, m{ m }, d{ d } {}
	auto day() -> const int;
	Month month() const;
	Year year() const;

private:
	Year y{ 2000 };
	Month m{Month::jan};
	int d{1};
};

auto f() -> void
{
	Date dx1{ Year{1998},Month::apr,20 };
}