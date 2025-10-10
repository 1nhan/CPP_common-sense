
import std;
using namespace std;

struct my_Date
{
	int y;
	int m;
	int d;

};


/**********************************************
*				helping function
***********************************************/
void init_day(my_Date& dd, int y, int m, int d)
{
	dd.y = y;
	dd.m = m;
	dd.d = d;
}
void add_day(my_Date& dd, int d)
{
	dd.d += d;
}
void f()
{
	my_Date Date;
	init_day(Date, 2025, 10, 10);
	add_day(Date, 1);
	cout << Date.y << '.'<<Date.m<<'.'<<Date.d << '\n';
}

int main()
{
	f();
}