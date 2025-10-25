/*********************************************************************************
*
	��Ʈ �� ǥ����(bitwise logical expression)�� ���� ������ �ۼ��϶�. 
	��Ʈ �� ǥ������ ��� ǥ���İ� ����������, 
	�����ڴ� !(�� ����), ~(��Ʈ ����), &(AND), |(OR), ^(XOR)�̴�. 
	�� �����ڴ� ���� �ǿ������� �� ��Ʈ�� ���� ������ �����Ѵ�(PPP2 ��25.5 ����). 
	!�� ~�� ���λ� ���� �������̸�, ^�� |���� �켱������ ����(x|y^z�� x|(y^z)�� �ؼ�). 
	&�� ^���� �켱������ ����(x^y&z�� x^(y&z)�� �ؼ�).
*
**********************************************************************************/
import std;
using namespace std;

auto error(const string& msg) -> void
{//
	throw runtime_error(msg);
}
auto factorial(int num) -> double
{// factorial() 
	if (num < 0)
		error("negative");
	else if (num <= 1)
		return 1;
	else
		return num * factorial(num - 1);
}

class Token {
public:
	Token() :kind{ ' ' } {}
	Token(char ch) :kind{ ch } {}
	Token(char ch, double val) :kind{ ch }, value{ val } {}
	auto get_kind() -> const char { return kind; }
	auto get_value() -> const double { return value; }
private:
	char kind;
	double value;
};
/*-------------------------------------------------------------------------
*																END Token
--------------------------------------------------------------------------*/

class Token_Stream {
public:
	auto pushback(Token) -> void;
	auto get() -> Token;
private:
	bool full = false;
	Token buffer;
};
auto Token_Stream::pushback(Token t) -> void
{// buffer flag
	if (full)
		error("full into buffer");
	buffer = t;
	full = true;
}

auto Token_Stream::get() -> Token
{//
	if (full) {
		full = false;
		return buffer;
	}

	char ch = 0;
	if (!(cin >> ch))
		error("no input");
	switch (ch) {
	case';':
	case'q':
	case'{':	// new
	case'}':	// new too
	case'(':
	case')':
	case'+':
	case'-':
	case'*':
	case'/':
	case'!':	//factorial
		return Token{ ch };
	case'.':
	case'0':case'1':case'2':case'3':case'4':
	case'5':case'6':case'7':case'8':case'9':
	{// char�� cin�� �ǵ����� val�� double�� �ѱ�.
		cin.putback(ch);
		double val = 0;
		cin >> val;
		return Token{ '8',val };
	}
	default:
		error("no case");
	}
}
Token_Stream ts;	// global Token_Stream variable

/*-------------------------------------------------------------------------
*														END Token_Stream
--------------------------------------------------------------------------*/

auto expression() -> double;	//

auto primary() -> double
{//'(', ')', '8'
	Token t = ts.get();
	switch (t.get_kind()) {
	case'(': {
		double left = expression();
		t = ts.get();
		if (t.get_kind() != ')')
			error("')'expected");
		break;
	}
	case'{': {
		double left = expression();
		t = ts.get();
		if (t.get_kind() != '}')
			error("'}'expected");
		break;
	}
	case'8':
		return t.get_value();
	default:
		error("Bad Token");
	}
}
auto bitwise_logical_expression() -> double
{// ���׿����� !, ~ �켱���� &>^>|
	double left = primary();
	Token t = ts.get();
	while (true) {
		switch (t.get_kind()) {
		case '!':
			return !primary();
		case '~':
			//return ~primary();
		case'&': {
			return left & primary();
		}

		}
	}
}

auto term() -> double
{
	double left = primary();
	Token t = ts.get();
	while (true) {
		switch (t.get_kind()) {
		case'!':
			left = factorial(static_cast<int>(left));
			t = ts.get();
			break;
		case'*':
			left *= primary();
			t = ts.get();
			break;
		case'/': {
			double d = primary();
			if (d == 0)
				error("divide by zero");
			t = ts.get();
			break;
		}
		default:
			ts.pushback(t);
			return left;
		}
	}
}
auto expression() -> double
{// '+', '-'
	double left = term();
	Token t = ts.get();
	while (true) {
		switch (t.get_kind()) {
		case'+':
			left += term();
			t = ts.get();
			break;
		case'-':
			left -= term();
			t = ts.get();
			break;
		default:
			ts.pushback(t);
			return left;
		}
	}
}

void start_prompt() {
	cout << "Welcome to our simple calculator. Please enter expressions using floating - point numbers." << '\n';
}

auto main() -> int
try {
	start_prompt();
	double val = 0;
	while (cin) {
		Token t = ts.get();

		if (t.get_kind() == 'q')
			return 0;
		if (t.get_kind() == ';')
			cout << '=' << val << '\n';
		else {
			ts.pushback(t);
			val = expression();
		}
	}
}
catch (exception& e) {
	cerr << e.what() << '\n';
}

