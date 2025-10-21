import std;
using namespace std;
import Token;
import Token_stream;
import Expression;
import Term;
import Primary;

int main()try {
    double val = 0; // 버전 3: 'q'와 ';' 추가
    while (cin) {
        Token t = ts.get();
        if (t.get_kind() == 'q') // 'q'는 종료 명령
            break;
        if (t.get_kind() == ';') // ';'는 출력 명령
            cout << "=" << val << '\n';
        else
            ts.putback(t);
        val = Expression();
    }

}
catch (exception& e) {
	cerr << e.what() << '\n';
}
catch (...) {
	cerr << "exception" << '\n';
}