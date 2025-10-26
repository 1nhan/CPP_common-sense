/*******************************************************************
* 
	숫자를 읽어 정수로 조합하는 프로그램을 작성하라. 
	예: 123은 문자 '1', '2', '3'로 읽히며, 
	출력은 123 is 1 hundred and 2 tens and 3 ones가 되어야 한다. 
	출력은 int 값으로 처리하며, 1~4자리 숫자를 지원하라. 
	힌트: 문자 '5'에서 정수 5를 얻으려면 '5' - '0'을 수행하라. 
	즉, '5' - '0' == 5.
* 
********************************************************************/

/*
*	char 입력> 123
	출력> 123 is 1 hundred and 2 tens and 3 ones 
*/
import std;
using namespace std;

constexpr int rule = 4;
auto error(const string& msg) -> void
{
	throw runtime_error(msg);
}
class Number{
public:
	Number() :kind{ ' ' } {}
	Number(char ch) :kind{ ch } {}
	Number(char ch, int val) :kind{ ch }, value {val} {}
	auto get_kind() -> char { return kind; }
	auto get_value() -> int { return value; }
private:
	char kind;
	int value;
};
class Number_Stream {
public:
	auto get()->Number;
	auto putback(Number) -> void;
private:
	bool full = false;
	Number buffer;
};

auto Number_Stream::get() -> Number
{// 문자 입력.
	char ch = 0;
	//if (str[str.size()-1]=='-'&&ch == '0') quit;
	cin >> ch;
	switch (ch) {
	case'0':case'1':case'2':case'3':case'4':
	case'5':case'6':case'7':case'8':case'9': 
	{
		cin.putback(ch);
		int val = 0;
		cin >> val;
		return Number{ '8',val };
	}
	case';'://print.
	case'q':// quit.
		return Number{ch};
	default:
		error("wrong number");
	}
}
Number_Stream ns;

auto generate_int() -> void 
{// 생성 및 프린트 
	
	Number num = ns.get();
	while (true) {
		if (num.get_kind() == 'q')
			if (num.get_kind() == ';')
				cout << num.get_value() << '\n';

	}
}
auto print_int() -> void {
	
}

auto main() -> int 
{
	generate_int();
}