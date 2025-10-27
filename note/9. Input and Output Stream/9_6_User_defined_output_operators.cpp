
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
    int day() const;         // const ���: ��ü�� ������ �� ����
    Month month() const;     // const ���: ��ü�� ������ �� ����
    Year year() const;       // const ���: ��ü�� ������ �� ����
    void add_day(int n);     // non-const ���: ��ü�� ������ �� ����
    void add_month(int n);   // non-const ���: ��ü�� ������ �� ����
    void add_year(int n);    // non-const ���: ��ü�� ������ �� ����
private:
    Year y;
    Month m;
    int d; // ��(day)
};
