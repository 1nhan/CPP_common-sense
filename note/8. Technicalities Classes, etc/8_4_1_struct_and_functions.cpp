import std;
using namespace std;

auto error(const string& msg)
{
	throw runtime_error(msg);
}

struct Date 
{
	int y, m, d; // 연, 월, 일
	auto is_valid(int d) -> bool 
	{//유효한 날짜인가요? 단순하게 일만 계산
		if (d < 1 || d>31) {
			error("day is out of range");
			return false;
		}
		return true;
	} 
};
Date Today;	//Date 타입의 변수.

auto init_day(Date& day, int y, int m, int d)->void
{
	if (!day.is_valid(d))//유효한 날짜입니까?
		error("Invalid");
	day.y = y;
	day.m = m;
	day.d = d;
}