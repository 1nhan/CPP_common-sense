
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
	Token() :kind{ ' ' }, value{ 0.0 } {};
	Token(char k) :kind{ k }, value{ 0.0 } {};
	Token(char k, double d) :kind{ k }, value{ d } {};
	auto get_value() -> double { return value; };
	auto get_kind() -> char { return kind; };

private:
	double value;
	char kind;
};
/****************************************/
/*			class Token_stream			*/
/****************************************/
class Token_stream {
public:
	auto putback(Token) -> void;
	auto get() -> Token;
private:
	bool full = false;
	Token buffer;
};

/****************************************/
/*	  Token_stream:: member function	*/
/* putback()							*/
/****************************************/
auto Token_stream::putback(Token t) -> void {
	if (full) {
		error("putback()into a full buffer");
	}
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
	if (!(cin >> ch))
		error("no input");
	switch (ch) {
	case ';':case 'q':
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
		return Token{ '8',val };
	}
	default:
		error("Bad Token");
	}
}

Token_stream ts;
auto expression() -> double;

/****************************************/
/*			primary()->	double			*/
/*										*/
/****************************************/
auto primary() -> double {
	Token t = ts.get();

	switch (t.get_kind()) {
	case '(': {
		double d = expression();
		if (t.get_kind() != ')')
			error("'('expected");
		return d;
	}
	case '8':
		return t.get_value();
	default:
		error("Bad Token");
	}
}

/****************************************/
/*			term()->	double			*/
/****************************************/
auto term() -> double {
	double left = primary();
	Token t = ts.get();
	while (true) {
		switch (t.get_kind()) {
		case'*':
			left *= primary();
			t = ts.get();
			break;
		case'/': {
			double d = primary();
			if (d == 0)
				error("zero divide");
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

/****************************************/
/*		expression()->	double			*/
/****************************************/
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

/****************************************/
/*				main					*/
/****************************************/
auto main(void) -> int try {
	/*
	double val = 0;
	while (cin) {
		cout << "> ";
		Token t = ts.get();
		if (t.kind == 'q')
			break;
		if (t.kind == ';')
			cout << "= " << val << '\n';
		else
			ts.putback(t);
		val = expression();
	}
	세미콜론(;)을 발견하면 즉시 expression()을 호출하지만 q에 대한 검사는 하지 않는다. 
	expression()은 먼저 term()을 호출하고, 
	term()은 primary()를 호출하며, 
	primary()는 q를 발견한다. 
	문자 q는 Primary가 아니므로 오류 메시지가 출력된다.
	따라서 우리는 세미콜론을 처리한 후 q를 검사해야 한다. 
	이 과정에서 로직을 조금 더 단순화할 필요도 느꼈고, 
	그 결과 main() 함수는 다음과 같이 정리되었다:*/
	while (cin) {
		cout << '>' << ' '; // 프롬프트 출력. 프롬프트 변경
		Token t = ts.get();
		while (t.get_kind() == ';')
			t = ts.get();
		if (t.get_kind() == 'q')
			return 0;
		ts.putback(t);
		cout << "= " << expression() << '\n';
		
	}
}catch (exception& e) {
	cerr << e.what() << '\n';
	return 1;
}catch (...) {
	cerr << "exception" << '\n';
	return 2;
}
