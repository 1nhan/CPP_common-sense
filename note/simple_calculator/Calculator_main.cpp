import Calc_Header;
import std;
using namespace std;
int main()try {
    double val = 0; // ���� 3: 'q'�� ';' �߰�
    while (cin) {
        Token t = ts.get();
        if (t.get_kind() == 'q') // 'q'�� ���� ���
            break;
        if (t.get_kind() == ';') // ';'�� ��� ���
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