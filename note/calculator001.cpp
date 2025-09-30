
import std;
using namespace std;

/************************************************************/
/*							Error							*/
/************************************************************/
void error(const string& msg)
{
	throw runtime_error(msg);
}
/************************************************************/


/************************************************************/
/*							Token							*/			
/************************************************************/
class Token {
public:
	char kind;
	double value;

	Token(char c):kind{c},value{0.0}{}
	Token(char c, double v):kind{c},value{v}{}
};
/************************************************************/
/************************************************************/




/************************************************************/
/*						Token_Stream						*/
/************************************************************/
class Token_Stream{
public:
	Token_Stream() : full(false), buffer(0){}
	Token get();
	void putback(Token t);
private:
	bool full = false;
	Token buffer;
};




/*					Token_Stream::putback					*/		
void Token_Stream::putback(Token t)
{
	if (full) error("putback()into a full buffer");	
	buffer = t;
	full = true;
}



/*					Token_Stream::get()						*/		
Token Token_Stream::get()
{
	if (full) {
		full = false;
		return buffer;
	}

	char ch = 0;
	if (!(cin >> ch)) error("no input");

	switch (ch) {
	case ';':case 'q':case '+':case '(':
	case '-':case '*':case '/':case ')':
		return Token{ ch }; //위 문자가 자기 자신을 나타내도록 처리
	
	case '.':case '0':case '1':case '2':case '3':
	case '4':case '5':case '6':case '7':case '8':case '9':
		{
			cin.putback(ch);
			double val = 0;
			cin >> val;
			return Token{ '8',val };
		}
	default:
		error("Bad Tokens");
	}	
}

/************************************************************/
/************************************************************/
Token_Stream ts;			// 아래의 함수에서 사용해야하니 선안
double Expressions();		// 아래 Primary에서 사용해야하니 선언


double Primary()
{
	Token t = ts.get();
	switch (t.kind) {
	case'(':
	{
		double d = Expressions();
		t = ts.get();
		if (t.kind != ')') error("')' expected ");
		return d;
	}
	case '8':
		return t.value;
	default:
		error("primary expected");
	}
}

double Term()
{
	double left = Primary();
	Token t = ts.get();
	while (true) {
		switch (t.kind) {
		case '*':
			left *= Primary();
			t = ts.get();
			break;
		case '/':
		{
			double d = Primary();
			if (d == 0) error("Divide by Zero");	// 0으로 나눌때 error

			left /= d;
			t = ts.get();
			break;
		}
		//case '%':
		default:
			return left;
		}
	}
}

double Expressions()
{
	double left = Term();
	Token t = ts.get();
	while (true) {
		switch (t.kind) {
		case'+':
			left += Term();
			t = ts.get();
			break;
		case'-':
			left -= Term();
			t = ts.get();
			break;
		default:
			return left;
		}
	}
}




/************************************************************/
/*							main							*/					
/************************************************************/
int main(void)
try {
	while (cin) {
		double val = 0;
		cout << "> ";
		Token t = ts.get();
		if (t.kind == 'q' || t.kind == 'Q') break;
		if (t.kind == ';') cout << "=" << val << '\n';
		else ts.putback(t);
		val = Expressions();
	}
}
catch (exception& e) {
	cerr << e.what() << '\n';
	return 1;
}
catch (...) {
	cerr << "exception" << '\n';
	return 2;
}