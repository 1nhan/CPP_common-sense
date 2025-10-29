import std;
using namespace std;

/* magic constant -> symbolic constant
*/
constexpr int not_a_reading = -7777;
constexpr int not_a_month = -1;
constexpr int day_of_time = 24;
constexpr int day_vector_size = 32;
constexpr int month_vector_size = 12;
constexpr int implausible_max= 200;
constexpr int implausible_min= -200;


/* 메세지 호출용 error함수.
*/
auto error(const string& msg) {
	throw runtime_error(msg);
}
auto error(const string& msg, int invalids) {
	throw runtime_error(msg);
}


struct Day {
	vector<double> temp = vector<double>(day_of_time, not_a_reading);
};

struct Month {
	int month = not_a_month;
	vector<Day>day = vector<Day>(day_vector_size);
};

/*
vector<string>month_tbl = {
	"not a month", // 0 index
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
	"dec"	// 12 index
};
*/

vector<string> month_tbl = {
	"−not a month−",
	"January", 
	"February", 
	"March", 
	"April", 
	"May", 
	"June",
	"July", 
	"August", 
	"September", 
	"October", 
	"November", 
	"December"
};

/* string -> int, int-> string으로 만드는 함수. 
*/
auto month_to_int(const string mon) -> int
{
	for (int i = 0; i < month_tbl.size(); ++i)
		if (month_tbl[i] == mon)
			return i;
	return 0;
}
auto int_to_month(int i) -> string
{
	if (i<1 || 12>i)
		error("bad month input");
	return month_tbl[i];
}


struct Year {
	int year;
	vector<Month> month = vector<Month>(month_vector_size);
};

struct Reading {
	int day;
	int hour;
	double temperature;
};


/*******************************************************************************
* 
				istream 재정의 부분, 재정의를 돕는 Helping Function

*******************************************************************************/

/* 문자 끝 종료문자 terminator시 종료시키고 에러 메시지를 출력시키는 함수.
*/
auto end_of_loops(istream& ist, char terminator, const string&msg)->void
{
	if (ist.fail()) {
		ist.clear();
		char ch = 0;
		if (ist >> ch && ch == terminator)
			return;
		error(msg);
	}
}

/* Reading 타입에 대한 유효성 검사.
*/
auto is_valid(Reading& r)->bool
{
	if (r.hour < 0 || 23 < r.hour)return false;
	if (r.day < 1 || 31 < r.day)return false;
	if (r.temperature<implausible_min || r.temperature>implausible_max)return false;
}

/* robust한 입력처리를 위해 Reading 타입의 입력스트림 >>를 재정의.
( day hour temperatur ) 입력을 기대하며, fail()시 failbit으로, 또 error로 문구 처리
*/
istream& operator>>(istream& ist, Reading& r)
{
	char ch1;
	if (ist >> ch1 && ch1 != '(') {
		cin.unget();
		cin.clear(ios::failbit);
		return ist;
	}
	char ch2;
	if ((ist >> r.day >> r.hour >> r.temperature) && ch2 != ')')
		error("bad reading");
	return ist;
}
/* robust한 입력처리를 위해 Month타입의 입력스트림 >>을 재정의.
*/
istream& operator>>(istream& ist, Month& m)
{
	char ch;
	if (ist >> ch && ch != '(') {
		cin.unget();
		cin.clear(ios::failbit);
		return ist;
	}

	string month_marker;
	string mm;

	ist >> month_marker >> mm;
	if (!ist || month_marker != "month")
		error("bad start of month");
	m.month = month_to_int(mm);	//스트링 타입의 mm을 int로 캐스팅하는 함수 구현해야 할 듯...
	int duplicates = 0;
	int invalids = 0;

	for (Reading r; ist >> r;) {//Reading 타입 입력
		if (is_valid(r)) {//Reading 타입에대한 유효성 검사를 수행하는 함수 구현해야 할 듯...
			if (m.day[r.day].temp[r.hour] != not_a_reading)//채이닝이 안되있는걸 보니.. 상하구조가 엉성하게 되있는듯..
				++duplicates;
			m.day[r.day].temp[r.hour] = r.temperature;
		}
		else {
			++invalids;
		}
	}
	if (invalids)
		error("invalid readings in month", invalids);
	if (duplicates)
		error("duplicates readings in month", duplicates);

	end_of_loops(ist, '}', "bad end of month");//정의된 ist에 종료 문자시 메세지출력하는 함수 구현.. 
	return ist;
}

/* robust한 입력처리를 위해 Month타입의 입력스트림 >>을 재정의.
*/
istream& operator>>(istream& ist, Year& y)
{
	char ch;
	if (ist >> ch && ch != '(') {
		cin.unget();
		cin.clear(ios::failbit);
		return ist;
	}

	string Year_marker;
	int yy = -1;

	ist >> Year_marker >> yy;
	if (!ist || Year_marker != "month")
		error("bad start of month");
	y.year= yy;

	while (true) {
		Month m; 
		if (!(ist >> m))
			break;
		y.month[m.month] = m;
	}
	end_of_loops(ist, '}', "bad end of month");//정의된 ist에 종료 문자시 메세지출력하는 함수 구현.. 
	return ist;
}