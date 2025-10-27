
import std;
using namespace std;

/*
		괄호에 대한 연산 처리가 안됨. ex. 1+2*3 ? (1+2)*3 = 9?

int main() {

	int lval, rval, res = 0;
	char op = 0;
	cin >> lval >> op >> rval; // 입력
	if (op == '+') res = lval + rval; // 덧셈
	else if (op == '-') res = lval - rval; // 뺄셈
	cout << res << '\n'; // 출력


}
*/


/*
					first attempt v2
	여러 상수에 대해 값을 검사할 때는  if 문보다 switch 문이 더 적합하다.
	연산의 연쇄(chaining)는  값을 읽는 즉시 누적하여 처리한다.

*/
void error(const string& msg) {
	throw runtime_error(msg);
}

int main() {

	/* 실행 프롬프트 */	
	cout << "Please enter expression (we can handle +, −, *, and /)\n";
	cout << "add an x to end expression (e.g., 1+2*3x): ";
	
	int lval, rval= 0;
	for (char op; cin >> op;) {
		if (op != 'x') cin >>rval;	// 종료 조건
		if (!cin) error("error");	// 불변 조건

		switch (op) {
		case '+':lval += rval; break;
		case '-':lval -= rval; break;
		case '/':lval *= rval; break;
		case '*':lval /= rval; break;
		default: cout << lval << '\n'; return 0;
		}
	}
	error("bad expression"); // ? 예상치 못한 방식으로 루프가 종료될 경우를 대비한 안전 장치
}
/*
* 
	“곱셈은 덧셈보다 우선순위가 높다” 해결할 문제.

	1. 지금까지 작성한 코드로도 정상적으로 처리된다.
	2. 여러 줄에 걸쳐 입력된 숫자, 덧셈(+), 뺄셈(-), 괄호((, )) 
	사이에서 곱셈(*)이나 나눗셈(/) 연산자를 어떻게 찾아낼 것인가?
	3. 곱셈(*) 연산자가 어디에 있었는지를 어떻게 기억할 것인가?
	4. 평가 순서가 단순한 좌측에서 우측으로 진행되지 않는 경우
	(예: 1 + 2 * 3)는 어떻게 처리할 것인가?

	세 가지 종류의 토큰이 필요하다는 것을 알 수 있다:
	부동소수점 리터럴(Floating-point literals)
	연산자(Operators)
	괄호(Parentheses)


*/