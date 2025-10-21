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

/****************************************/
/*				error()->void			*/		
/****************************************/
auto error(const string& msg) -> void {
	throw runtime_error(msg);
}
/****************************************/
/*				class Token				*/	
/****************************************/
class Token {
public:
	Token() :value{ 0.0 }, kind{ ' ' } {}
	Token(char k) :value{ 0.0 }, kind{ k } {}
	Token(char k, double d) :value{ d }, kind{ k } {}
	auto get_value()->double { return value; };
	auto get_kind()->char { return kind; };
private:
	double value;
	char kind;
};
/****************************************/
/*			class Token_stream			*/
/****************************************/
class Token_stream {
public:
	Token_stream() 
		:full{ false }, buffer{ ' ', 0 } {}
	auto get()->Token;
	auto putback(Token t)->void;

private:
	bool full = false;
	Token buffer;
};
/****************************************/
/*	  Token_stream:: member function	*/
/* putback()							*/		
/****************************************/
auto Token_stream::putback(Token t) -> void{
	if (full) error("full buffer");
	buffer = t;
	full = true;
}
/****************************************/
/*	  Token_stream:: member function	*/
/* get()								*/
/****************************************/
auto Token_stream::get()->Token {
	if (full) {
		full = false;
		return buffer;
	}

	char ch = 0; 
	if (!(cin >> ch)) error("no input"); // >> 연산자는 공백을 건너뜀.
	switch (ch) {
	case';':
	case 'q':
	case'(':case')':
	case'{':case'}':
	case'+':case'-':case'*':case'/':case'!':
		return Token{ ch };
	case'.':
	case'0':case'1':case'2':case'3':case'4':
	case'5':case'6':case'7':case'8':case'9': {
		cin.putback(ch);
		double val = 0;
		cin >> val;
		return Token{ '8',val };
	}
	}

}
/****************************************/
/*		expression()->	double			*/
/****************************************/
Token_stream ts;
Token t;
auto term() -> double;
auto expression() -> double {
	double left = term();
	t = ts.get();

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
			return left;
		}
	}//while
	error("bad token");
}
/****************************************/
/*			term()->	double			*/
/****************************************/
auto primary() -> double;
auto term() -> double {
	double left = primary();
	t = ts.get();
	while(true) {
		switch (t.get_kind()) {
		case '*':
			left *= primary();
			t = ts.get();
			break;
		case '/': {
			double d = primary();
			if (d == 0)error("zero divide");
			left /= d;
			t = ts.get();
			break;
		}
		default:
			return left;
		}
	}
	error("bad token");
}
/****************************************/
/*			primary()->	double			*/
/****************************************/
auto primary() -> double {
	t = ts.get();

	switch (t.get_kind()) {
	case'(': {
		double d = expression();
		t = ts.get();
		//if (t.get_kind() == ')')
		if (t.get_kind() != ')')
			error("')'expected");
		return d;
	}

	case '8':
		return t.get_value();
	default:
		error("");
	}
}
/****************************************/
/*				main					*/
/****************************************/
auto main(void)->int 
try{
	while (cin) {
		cout << expression()<<'\n';
	}
}
catch (exception& e) {
	cerr << e.what() << '\n';
}
catch (...) {
	cerr << "exception" << '\n';
}