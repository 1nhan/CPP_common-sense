
import std;
using namespace std;

/*********************************************
*				my_Date 클래스
**********************************************/
class my_Date
{
private:
	int y, m, d;
public:
	my_Date(int y, int m, int d);
	void add_day(int d);
	int month()	{return m;};
	int day()	{return d;};
	int year()	{return y;};
};

/*********************************************
*				Date 생성자
**********************************************/
my_Date::my_Date(int yy, int mm, int dd)
	:y{ yy }, m{ mm }, d{ dd } {}

void my_Date::add_day(int d)
{
	d += d;
}


int main()
{
	my_Date date{ 2025,10,10 };
	cout << date.y << '.' << date.m << '.' << date.d << '\n';
	date.add_day(1);
	cout << date.y << '.' << date.m << '.' << date.d << '\n';
}