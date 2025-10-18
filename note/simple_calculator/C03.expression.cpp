
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

	expression()이 자기 자신을 호출하고, 그 호출된 함수가 
	다시 expression()을 호출하는 식으로 무한히 반복된다.
	실제로 위의 expression() 함수는 첫 번째 줄을 벗어나지 못한다. 
	이러한 현상을 무한 재귀(infinite recursion)라고 한다.
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
	
	% 연산은 부동소수점에 대해 정의되어 있지 않기 때문에 컴파일 되지 않는다.
	0으로 나누는 것이 허용되어 있는데 시도하면 하드웨어에서 감지하고 프로그램을 종료시킨다.
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
				switch 문 내에서 변수를 선언하고 초기화하려면 반드시 
				해당 case 블록을 중괄호로 감싸야 한다.
			*/
		}
		//case '%':left %= primary();t = get_token();break;
		default: return left; 
		}
	}
}

int main() {


}