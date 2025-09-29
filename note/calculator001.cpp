import std;
using namespace std;


/*							Error							*/
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
Token_Stream ts;



double Primary()
{
	double left = Term();
	Token t = ts.get();

}
double Term()
{
	double left = Term();
	Token t = ts.get();

}
double Expressions()
{
	double left = Term();
	Token t = ts.get();



}