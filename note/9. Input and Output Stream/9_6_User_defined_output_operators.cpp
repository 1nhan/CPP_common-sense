
import std;
using namespace std;

enum class Month {
    jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};
struct Year {
    int year;
};

class Date {
public:
    int day() const;         // const 멤버: 객체를 변경할 수 없음
    Month month() const;     // const 멤버: 객체를 변경할 수 없음
    Year year() const;       // const 멤버: 객체를 변경할 수 없음
    void add_day(int n);     // non-const 멤버: 객체를 변경할 수 있음
    void add_month(int n);   // non-const 멤버: 객체를 변경할 수 있음
    void add_year(int n);    // non-const 멤버: 객체를 변경할 수 있음
private:
    Year y;
    Month m;
    int d; // 일(day)
};
