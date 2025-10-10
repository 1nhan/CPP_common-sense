// date04_main.cpp
import date04;
import std;
using namespace std;

int main(void)
{
	date04 Date{ 2025,10,10 };
	cout << Date.year() << '.' << Date.month() << '.' << Date.day()<< '\n';
	Date.add_day(5);
	cout << Date.year() << '.' << Date.month() << '.' << Date.day()<< '\n';
	return 0;
}