/*********************************************************************************
* 
*	E5_02
	���α׷�����()�Ӹ� �ƴ϶� {}�� ����� �� �ֵ��� ����� �߰��϶�.
	��: {(4 + 5) * 6} / (3 + 4)�� ��ȿ�� ǥ������ �ǵ��� �����϶�.

	E5_03
	���丮�� �����ڸ� �߰��϶�.���̻� !�����ڸ� ����Ͽ� ���丮���� ǥ���Ѵ�.
	�� : 7!�� 7 * 6 * 5 * 4 * 3 * 2 * 1�� �ǹ��Ѵ�. 
	!�����ڴ�*, / ���� �켱������ ���ƾ� �ϸ�, 7 * 8!��(7 * (8!))�� �ؼ��Ǿ�� �Ѵ�.
	���� ������ �����Ͽ� ���� �����ڸ� �ݿ��϶�.ǥ�� ���� ���ǿ� ���� 
	0!�� 1�� �򰡵Ǿ�� �Ѵ�.
	��Ʈ : ���� �Լ��� double�� ���������, 
	���丮���� �������� ���ǵǹǷ� x!�� ���ؼ��� x�� int�� ��ȯ�Ͽ� ���丮���� ����϶�.
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
	main(){}����
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
	*, / 0���� ������ �ϸ� �ȵ�.
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