
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
	*				enum class Month 사용 예제
	Month m1 = Month::feb;
	Month m2 = feb;				// 오류: feb는 범위(scope)에 없음
	Month m3 = 7;				// 오류: int를 Month에 대입할 수 없음
	Month m4 = Month{ 7 };		// OK: 명시적 변환
	Month m5{ 7 };				// OK: 명시적 초기화
	int x1 = m1;				// 오류: Month를 int에 대입할 수 없음
	int x2 = int{ m1 };			// 오류: narrowing 변환
	int x3 = to_int(m1);		// Month를 int로 변환; 아래에서 정의
	****************************************************************/

}