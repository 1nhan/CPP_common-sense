
import std;
using namespace std;

void error(const string& msg) {

	throw runtime_error(msg);
}

class Token {
public:
	Token() :kind{ ' ' }, value{ 8 } {};
	Token(char k) :kind{ k }, value{ 8 } {};
	Token(char k, double d) :kind{ k }, value{ d } {};
//private:
	double value;
	char kind;
};


/*
expression : 
	term
	expression '+' term
	expression '-' term
*/
Token get_token() {
	/*
		?
	*/
};
double term();


/*
	expressions : first try

double expression() {
	double left = expression();
	Token t = get_token();
	switch (t.kind){
	case '+': return left += term();
	case '-': return left -= term();
	default: return left;
	}
}

	expression()�� �ڱ� �ڽ��� ȣ���ϰ�, �� ȣ��� �Լ��� 
	�ٽ� expression()�� ȣ���ϴ� ������ ������ �ݺ��ȴ�.
	������ ���� expression() �Լ��� ù ��° ���� ����� ���Ѵ�. 
	�̷��� ������ ���� ���(infinite recursion)��� �Ѵ�.
*/

double expression() {
	double left = term();
	Token t = get_token();
	switch (t.kind) {
	case '+': return left += term();
	case '-': return left -= term();
	default: return left;
	}

}



/*
term:
	primary
	term '*' primary
	term '/' primary
	term '%' primary

*/
/*
	term() : first try
double primary();
double term() {
	double left = primary();
	Token t = get_token();
	while (true) {
		switch (t.kind) {
		case '*':left *= primary();t = get_token();break;
		case '/':left /= primary();t = get_token();break;
		//case '%':left %= primary();t = get_token();break;
		default: return left; 
		}

	}
}
	
	% ������ �ε��Ҽ����� ���� ���ǵǾ� ���� �ʱ� ������ ������ ���� �ʴ´�.
	0���� ������ ���� ���Ǿ� �ִµ� �õ��ϸ� �ϵ����� �����ϰ� ���α׷��� �����Ų��.
*/
double primary();
double term() {
	double left = primary();
	if (left == 0) return;
	Token t = get_token();

	while (true) {
		switch (t.kind) {
		case '*':
			left *= primary();t = get_token();break;
		case '/': {
			double d = primary();
			if (d == 0) error("divide by zero");
			left /= d; 
			t = get_token(); 
			break;
			/*
				switch �� ������ ������ �����ϰ� �ʱ�ȭ�Ϸ��� �ݵ�� 
				�ش� case ����� �߰�ȣ�� ���ξ� �Ѵ�.
			*/
		}
		//case '%':left %= primary();t = get_token();break;
		default: return left; 
		}
	}
}

int main() {


}