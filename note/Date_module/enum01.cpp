
import std;
using namespace std;

int to_int(Month m)
{
	return static_cast<int>(m);
}
void error(string& msg)
{
	throw runtime_error(msg);
}

enum class Month {
	jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};
Month operator++(Month& m)
{
	m = (m == Month::dec) ? Month::jan : Month{ to_int(m) + 1 };
}

enum class Day {
	monday, tuesday, wednesday, thursday, friday, saturday, sunday
};

Month int_to_month(int x)
{
	if (x < to_int(Month::jan) || to_int(Month::dec) < x)
		error("bad month");
	return Month(x);
}

int main()
{
	/***************************************************************
	*				enum class Month ��� ����
	Month m1 = Month::feb;
	Month m2 = feb;				// ����: feb�� ����(scope)�� ����
	Month m3 = 7;				// ����: int�� Month�� ������ �� ����
	Month m4 = Month{ 7 };		// OK: ����� ��ȯ
	Month m5{ 7 };				// OK: ����� �ʱ�ȭ
	int x1 = m1;				// ����: Month�� int�� ������ �� ����
	int x2 = int{ m1 };			// ����: narrowing ��ȯ
	int x3 = to_int(m1);		// Month�� int�� ��ȯ; �Ʒ����� ����
	****************************************************************/

}