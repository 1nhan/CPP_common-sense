
import std;
using namespace std;

void error(const string& msg) {
	throw runtime_error(msg);
}
/*
		아직 아닌듯.
istream& operator>>(istream& is, Token& t) {
	char ch;
	is >> ch;
	switch (ch) {
	case'+':case'-':case'*':case'/':case'x':
		t = Token{ ch }; break;
	case'0':case'1':case'2':case'3':case'4':
	case'5':case'6':case'7':case'8':case'9':{
		is.putback(ch);
		double val;
		is >> val;
		t = Token{ '8',val };
		break;
	}
	}
}
*/

class Token {
public:
	Token() :kind{' '}, value{8} {};
	Token(char k) :kind{ k }, value{ 0.0 } {};
	Token(char k, double d) :kind{ k }, value{ d } {};

//private: 아직 아닌듯
	double value;
	char kind;

};

Token get_token() {
	/*
		?
	*/
}

vector<Token>tok;

int main() {
	while (cin) {
		Token t = get_token();
		tok.push_back(t);
	}
	for (int i = 0; i < tok.size(); ++i) {
		if (tok[i].kind == '*') 
			double res = tok[i - 1].value * tok[i + 1].value;
	}

}