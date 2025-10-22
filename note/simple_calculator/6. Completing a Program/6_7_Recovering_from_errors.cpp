
import std;
using namespace std;

constexpr char number = '8';
constexpr char quit = 'q';
constexpr char print_token = ';';
constexpr string_view prompt = "> ";
constexpr string_view result = "= ";

/****************************************/
/*				error()->void			*/
/****************************************/
auto error(const string& msg) -> void {
	throw runtime_error(msg);
}
auto error(const string& msg, const string name) -> void {
	throw runtime_error(msg + name);
}

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
	auto ignore(char)->void;
private:
	bool full = false;
	Token buffer=0;
};
/***************************************************************/
/*	 Token_stream::	member function
	ignore()->void						
	이 코드는 먼저 버퍼를 확인하고, 
	해당 문자가 있으면 제거한 뒤 종료한다. 
	그렇지 않으면 cin으로부터 문자를 읽어가며 해당 문자를 찾는다.*/	
/****************************************************************/
auto Token_stream::ignore(char c) -> void {
	if (full && c == buffer.get_kind()) {
		full = false;
		return;
	}
	full = false;

	char ch = 0; 
	while (cin >> ch) {
		if (ch == c)
			return;
	}
}
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

	/********************************************************************/
		/*각 case를 한 줄씩 배치하고 간단한 주석을 추가하면 가독성이 향상된다.
		따라서 Token_stream의 get() 함수는 다음과 같이 개선된다:*/
		/********************************************************************/
	switch (ch) {
	case print_token:	//';'
	case quit:			//'q'
	case '(':
	case ')':
	case '+':
	case '-':
	case '*':
	case '/':
	case'%':
		return Token{ ch }; // 각 문자가 자기 자신을 나타내도록 처리
	case'.':
	case'0':case'1':case'2':case'3':case'4':
	case'5':case'6':case'7':case'8':case'9': {//숫자 리터럴
		cin.putback(ch); // ch를 입력스트림으로 되돌림
		double val = 0;
		cin >> val; // 부동소수점 숫자 읽기
		return Token{ number,val };
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
/*
	문법(grammar)을 수정하여 단항 마이너스(unary minus)를 허용해야 한다.
	가장 단순한 수정은 Primary 규칙에 적용하는 것이다.기존 문법은 다음과 같다 :
	Primary:
	Number
	"(" Expression ")"

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
	이를 다음과 같이 확장해야 한다:
	코드
	Primary:
		Number
		"(" Expression ")"
		"−" Primary
		"+" Primary
*/
auto primary() -> double {
	Token t = ts.get();
	switch (t.get_kind()) {
	case '(': {
		double d = expression();
		if (t.get_kind() != ')')
			error("')'expected");
		t = ts.get();
		return d;
	}
	case number:
		return t.get_value();
	case '-':
		return -primary();
	case '+':
		return +primary();
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
				error("divide by zero");
			left /= d;
			t = ts.get();
			break;
		}
		case'%': {
			double d = primary();
			if (d == 0)
				error("divide by zero");
			left = fmod(left, d);
			t = ts.get();
			break;
		}/*
		 case'%':{
			int i1 = narrow<int>(left);
			int i2 = narrow<int>(primary());
			if(i2==0)
				error("divide by zero");
			left = i1%i2;
			t = ts.get();
			break;
		}*/
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
/*	clean_up_mass()->void				*/
/****************************************/
auto clean_up_mass() -> void {
	ts.ignore(print_token);
}
/****************************************************************************************************/
/*
*							auto calculator() -> void
			이상적으로는 하나의 함수가 하나의 논리적 작업만 수행해야 한다.
			main()이 두 가지 작업을 동시에 수행하면 프로그램의 구조가 흐려진다.
			명확한 해결책은 계산 루프를 별도의 함수로 분리하는 것이다.
			예를 들어 calculate()라는 함수를 정의할 수 있다:
			+ 오류로부터 복구하는 방법을 시도해보자. 
			이는 기본적으로 예외(exception)를 포착하고, 
			남겨진 상태를 정리한 후 계산을 계속하는 것을 의미한다.
*/
/****************************************************************************************************/
auto calculator() -> void {
	while (cin) 
	try{
		cout << prompt; // 프롬프트 출력. 프롬프트 변경
		Token t = ts.get();
		while (t.get_kind() == print_token)
			t = ts.get();
		if (t.get_kind() == quit)
			return;
		ts.putback(t);
		cout << result << expression() << '\n';
	}
	catch (exception& e) {
		cerr << e.what() << '\n';
		clean_up_mass();
	}
}
/****************************************************************************************************/
/*											main							   						*/
/*
	main() 함수를 살펴보면, 두 가지 논리적으로 분리된 작업을 수행하고 있음을 알 수 있다 :
	1. main()은 프로그램의 일반적인 골격(scaffolding)을 제공한다 : 프로그램 시작, 종료, 치명적인 오류 처리.
	2. main()은 계산 루프를 처리한다.*/
	/*****************************************************************************************************/
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
