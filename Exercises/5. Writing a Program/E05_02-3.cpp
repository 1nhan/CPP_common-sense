/*********************************************************************************
* 
*	E5_02
	프로그램에서()뿐만 아니라 {}도 사용할 수 있도록 기능을 추가하라.
	예: {(4 + 5) * 6} / (3 + 4)가 유효한 표현식이 되도록 구현하라.

	E5_03
	팩토리얼 연산자를 추가하라.접미사 !연산자를 사용하여 팩토리얼을 표현한다.
	예 : 7!은 7 * 6 * 5 * 4 * 3 * 2 * 1을 의미한다. 
	!연산자는*, / 보다 우선순위가 높아야 하며, 7 * 8!은(7 * (8!))로 해석되어야 한다.
	먼저 문법을 수정하여 상위 연산자를 반영하라.표준 수학 정의에 따라 
	0!은 1로 평가되어야 한다.
	힌트 : 계산기 함수는 double을 사용하지만, 
	팩토리얼은 정수에만 정의되므로 x!에 대해서는 x를 int로 변환하여 팩토리얼을 계산하라.
*
***********************************************************************************/
import std;
using namespace std;
/*
	auto error()->void
	clss Token
	class Token_stream
	auto expression()->double
	auto term()->double
	auto primary()->double
	main(){}실행
*/

auto error(const string& msg) -> void {
	throw runtime_error(msg);
}

class Token {
public:
	Token(char k) :kind{ k } {};
	Token(char k,double d) :kind{ k }, value{ d } {};
	char get_kind() { return kind; };
	double get_value() { return value; };
private:
	char kind;
	double value;
};

class Token_stream {
public:
	Token_stream();
	auto putback(Token)->void;
	auto get()->Token;
private:
	Token buffer;
	bool full = false;
};

auto Token_stream::putback(Token t)->void {
	if (!full) error("no buffer");
	full = true;
	buffer = t;
}

auto Token_stream::get()->Token {
	if (full) {
		return buffer;
	}
	char ch = 0;
	if (!(cin >> ch)) error("no input");

	switch (ch) {
	case';':
	case'q':
	case'(':case')':
	case'+':case'-':case'*':case'/':
		return Token{ ch };
	case'.':
	case'0':case'1':case'2':case'3':case'4':
	case'5':case'6':case'7':case'8':case'9':
	{
		cin.putback(ch);
		double val=0;
		cin >> val;
		return Token{ '8',val };
	}
	default:
		error("bad token");
	}
}

/*
	auto expression()->double
	auto term()->double
	auto primary()->double
*/
auto term() -> double;
auto expression() -> double {
	double left = term();
	Token_stream ts;
	Token t = ts.get();
	while (true) {
		switch (t.get_kind()) {
		case'+':
			left += term();
			t = ts.get();
			return left;
		case'-':
			left -= term();
			t = ts.get();
			return left;
		default:
			return left;
		}
	}
	error("bad token");
}

/*
	term()->double
	*, / 0으로 나누게 하면 안됨.
*/
auto primary() -> double;
auto term() -> double {
	double left = primary();
	Token_stream ts;
	Token t = ts.get();

	while (true) {
		switch (t.get_kind()) {
		case'*':
			left *= primary();
			t = ts.get();
			return left;
		case'/': {
			double d = primary();
			if (d == 0)error("zero divide");
			left /= d;
			return left;
		}
		default:
			return left;
		}
	}
}

auto primary() -> double {
	Token_stream ts;
	Token t = ts.get();

	switch (t.get_kind()) {
	case'(': {

	}
	case'8':

	default:

	}
}