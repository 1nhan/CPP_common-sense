/************************************************************************
*
*	표준 입력으로부터(요일, 값) 쌍을 읽어들이는 프로그램을 작성하시오.예:

	```코드
	Tuesday 23 Friday 56 Tuesday −3 Thursday 99
	```

	각 요일에 해당하는 값을 vector<int>에 저장하시오.
	일주일 7일에 해당하는 벡터들의 값을 출력하고, 
	각 벡터의 합계를 출력하시오.
	Funday와 같은 잘못된 요일은 무시하되, 
	Mon, monday와 같은 일반적인 동의어는 허용하시오.
	거부된 값의 개수도 출력하시오.	
*
*************************************************************************/
import std;
using namespace std;
int reject_count = 0;

void error(const string& msg) {
	++reject_count;
	throw runtime_error(msg);
}
/*
	각 요일에 해당하는 값을 vector<int>에 저장하시오.
*/
const int day_of_week = 7;
vector<int>day_value(day_of_week);
/*
	일주일 7일에 해당하는 벡터들의 값을 출력하고,
*/
vector<string>week_tbl = 
{ "Mon","Tue","Wen","Tur","Fri","Sat","Sun", 
"Monday", "Tuesday", "Wendsday", "Tursday", "Friday", "Saturday", "Sunday" };

auto input_day_value(vector<string>& day, vector<int>& val) -> void {
	int value = -1;
	for (int i = 0; i < day.size(); ++i) {
		cout << day[i] << "의 값 : ";
		cin >> value;
		val[i] = value;
	}
}
auto print_day_with_value(vector<string>& day, vector<int>& val) -> void {
	if (day.size() != val.size()) return;
	string input = " ";
	cin >> input;
	for (int i = 0; i < day.size(); ++i) {
		if(input==day[i])
			cout << day[i] << "의 값 : " << val[i] << '\n';
	}
}


/*
	각 벡터의 합계를 출력하시오.
	Funday와 같은 잘못된 요일은 무시하되,
	Mon, monday와 같은 일반적인 동의어는 허용하시오.
	거부된 값의 개수도 출력하시오.
*/

