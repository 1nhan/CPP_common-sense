/*********************************************************************************
* 
*	E5_02
	���α׷�����()�Ӹ� �ƴ϶� {}�� ����� �� �ֵ��� ����� �߰��϶�.
	��: {(4 + 5) * 6} / (3 + 4)�� ��ȿ�� ǥ������ �ǵ��� �����϶�.

	E5_03
	���丮�� �����ڸ� �߰��϶�.���̻� !�����ڸ� ����Ͽ� ���丮���� ǥ���Ѵ�.
	�� : 7!�� 7 * 6 * 5 * 4 * 3 * 2 * 1�� �ǹ��Ѵ�. 
	!�����ڴ�*, / ���� �켱������ ���ƾ� �ϸ�, 7 * 8!��(7 * (8!))�� �ؼ��Ǿ�� �Ѵ�.
	���� ������ �����Ͽ� ���� �����ڸ� �ݿ��϶�.
    ǥ�� ���� ���ǿ� ���� 0!�� 1�� �򰡵Ǿ�� �Ѵ�.
	��Ʈ : ���� �Լ��� double�� ���������, 
	���丮���� �������� ���ǵǹǷ� x!�� ���ؼ��� x�� int�� ��ȯ�Ͽ� ���丮���� ����϶�.
*
***********************************************************************************/
import std;
using namespace std;

/****************************************/
/*              error()->void           */
/****************************************/
auto error(const string& msg) -> void {
    throw runtime_error(msg);
}

auto factorial(int n) -> double {
    if (n > 0)
        error("invalid number");
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}


/****************************************/
/*              class Token             */
/****************************************/
class Token {
public:
    Token() : value{ 0.0 }, kind{ ' ' } {}          // �⺻ ������
    Token(char k) : value{ 0.0 }, kind{ k } {}      // ������/������
    Token(char k, double d) : value{ d }, kind{ k } {} // ����
    auto get_value() -> double { return value; }
    auto get_kind() -> char { return kind; }
private:
    double value;
    char kind;
};

/****************************************/
/*          class Token_stream          */
/****************************************/
class Token_stream {
public:
    auto get() -> Token;
    auto putback(Token t) -> void;
private:
    bool full = false;
    Token buffer;   // �⺻ ������ ���п� �����ϰ� �ʱ�ȭ��
};

/****************************************/
/*   Token_stream:: member function     */
/* putback()                            */
/****************************************/
auto Token_stream::putback(Token t) -> void {
    if (full)
        error("putback() into a full buffer");
    buffer = t;
    full = true;
}

/****************************************/
/*   Token_stream:: member function     */
/* get()                                */
/****************************************/
auto Token_stream::get() -> Token {
    if (full) {
        full = false;
        return buffer;
    }

    char ch = 0;
    if (!(cin >> ch))
        error("no input"); // >> �����ڴ� ������ �ǳʶ�.

    switch (ch) {
    case ';': case 'q':
    case '(': case ')':
    case '{': case '}':
    case '+': case '-': case '*': case '/': case '!':
        return Token{ ch };   // ��ȣ ��ü�� ��ū���� ��ȯ
    case '.':
    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9': {
        cin.putback(ch);
        double val = 0;
        cin >> val;
        return Token{ '8', val }; // '8'�� ���� ��ū�� �ǹ�
    }
    default:
        error("Bad Token");
    }
}

Token_stream ts;

/****************************************/
/*          primary()-> double           */
/****************************************/
auto expression() -> double; // forward ����

auto primary() -> double {
    Token t = ts.get();
    switch (t.get_kind()) {
    case '(': {
        double d = expression();
        t = ts.get();
        if (t.get_kind() != ')') error("')' expected");
        return d;
    }
    case '8': { // number
        double val = t.get_value();
        // ���⼭ factorial �˻�
        t = ts.get();
        while (t.get_kind() == '!') {
            val = factorial(static_cast<int>(val));
            t = ts.get();
        }
        ts.putback(t); // �������� ���� ��ū ��������
        return val;
    }
    default:
        error("primary expected");
    }
}


/****************************************/
/*          term()-> double              */
/****************************************/
auto term() -> double {
    double left = primary();
    Token t = ts.get();
    while (true) {
        switch (t.get_kind()) {
        case '*':
            left *= primary();
            t = ts.get();
            break;
        case '/': {
            double d = primary();
            if (d == 0)
                error("divide by zero");
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
/*      expression()-> double           */
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
/*                main                  */
/****************************************/
auto main() -> int try {
    double val = 0;
    while (cin) {
        Token t = ts.get();

        if (t.get_kind() == 'q')
            break;
        if (t.get_kind() == ';') {
            cout << "=" << val << '\n';
        }
        else {
            ts.putback(t);
            val = expression();
        }
    }
}
catch (exception& e) {
    cerr << e.what() << '\n';
    return 1;
}
catch (...) {
    cerr << "exception\n";
    return 2;
}