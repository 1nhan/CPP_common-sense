/*
*	테스팅해볼것
	1@z; 1+3; 실행
*/


import std;
using namespace std;




// Symbolic constants
constexpr char Number = '8';
constexpr char prompt = '>';
constexpr char Print = ';';
constexpr char Quit = 'q';
constexpr char result = '=';

auto error(const string& msg) -> void {
	throw runtime_error(msg);
}
class Token {
public:
	Token() :kind{ ' ' }, value{ 0.0 } {};
	Token(char k) :kind{ k }, value{ 0.0 } {};
	Token(char k, double d) :kind{ k }, value{ d } {};
	auto get_value() -> double { return value; };
	auto get_kind() -> char { return kind; };

private:
	double value;
	char kind;
};

class Token_stream {
public:
	auto putback(Token) -> void;		// 
	auto get() -> Token;				// 
	auto ignore(char c) -> void;		// c까지의 문자를 모두 제거
private:

	bool full = false;
	Token buffer;
};
auto Token_stream::ignore(char c) -> void
{
	if (full && c == buffer.get_kind()) {
		full = false;
		return;
	}
	full = false;

	// ..입력 스트림에서 문자 검색..
	char ch = 0;
	while (cin >> ch)
		if (ch == c)
			return;
}

auto Token_stream::putback(Token t) -> void 
{
	if (full) {
		error("putback()into a full buffer");
	}
	buffer = t;
	full = true;
}

auto Token_stream::get()->Token {
	if (full) {
		full = false;
		return buffer;
	}

	char ch = 0;
	if (!(cin >> ch))
		error("no input");
	switch (ch) {
	case Print:case Quit:
	case '(':case ')':
	case '+':case '-':
	case '*':case '/':
		return Token{ ch };
	case'.':
	case'0':case'1':
	case'2':case'3':
	case'4':case'5':
	case'6':case'7':
	case'8':case'9': {
		cin.putback(ch);
		double val = 0;
		cin >> val;
		return Token{ Number,val };
	}
	default:
		error("Bad Token");
	}
}

Token_stream ts;
auto expression() -> double;

auto primary() -> double {
	Token t = ts.get();

	switch (t.get_kind()) {
	case '(': {
		double d = expression();
		if (t.get_kind() != ')')
			error("'('expected");
		return d;
	}
	case  Number:
		return t.get_value();
	case '+':						//
		return primary();
	case '-':
		return -primary();
	default:
		error("Bad Token");
	}
}

auto term() -> double {
	double left = primary();
	Token t = ts.get();
	while (true) {
		switch (t.get_kind()) {
		case'%': {
			double d = primary();
			if (d == 0)
				error("divide by zero");
			left = fmod(left, d);
			t = ts.get();
			break;
		}
		case'*':
			left *= primary();
			t = ts.get();
			break;
		case'/': {
			double d = primary();
			if (d == 0)
				error("divide by zero");
			left /= d;
			t = ts.get();
			break;
		}
		default:
			ts.putback(t);
			return left;
		}
	}
}

auto expression() -> double {
	double left = term();
	Token t = ts.get();
	while (true) {
		switch (t.get_kind()) {
		case '+':
			left += term();
			t = ts.get();
			break;
		case '-':
			left -= term();
			t = ts.get();
			break;
		default:
			ts.putback(t);
			return left;
		}
	}
}

auto clean_up_mass() -> void
{// 단순 구현.
	ts.ignore(Print);
}
auto calculator() -> void
{
	while (cin) 
		try{
		cout << prompt;
		Token t = ts.get();
		while (t.get_kind() == Print)
			t = ts.get(); // 세미콜론 무시
		if (t.get_kind() == Quit)
			return;
		ts.putback(t);
		cout << result << expression() << '\n';
	}
	catch (exception& e) {
		cerr << e.what() << '\n';
		clean_up_mass();
	}

}



auto main(void) -> int
try
{
	calculator();
	return 0;
}
catch (exception& e) {
	cerr << e.what() << '\n';
	return 1;
}
catch (...) {
	cerr << "exception" << '\n';
	return 2;
}