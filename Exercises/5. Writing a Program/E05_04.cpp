/********************************************************************************
*
	���ڿ��� ���� �����ϴ� Name_value Ŭ������ �����϶�.
	��3���� �������� 20���� �����Ͽ� �� ���� ���� ��� vector<Name_value>�� ����϶�.
*
*********************************************************************************/
/************************************************************************
*
* 	�̸��� �� ��(name - value pair)�� �Է¹޴� ���α׷��� �ۼ��ϼ���.
*	��: Joe 17, Barbara 22
	�� �̸��� names ���Ϳ�,
*	�� ���� scores ���Ϳ� ���� ��ġ�� �����ϼ���.
*	�� : names[7] == "Joe"�̸� scores[7] == 17
*	�Է� ���� ���� : NoName 0 �̸��� �ߺ��Ǹ� ���� �޽����� ����ϰ� �����ϼ���.
*	���(�̸�, ����) ���� �� �پ� ����ϼ���.
*
*	�� ���α׷��� �����Ͽ�,
*	�̸��� �� ���� �Է��� �� ������ ���� �̸��� �Է��ϸ� �ش� ������ ����ϰų�
*	"name not found"�� ����ϼ���.
*
*	�� ���α׷��� �����Ͽ�,
*	�̸��� �� ���� �Է��� �� ������ ���� ������ �Է��ϸ� �ش� ������ ���� ��� �̸���
*	����ϰų� "score not found"�� ����ϼ���.
*
*************************************************************************/

import std;
using namespace std;

/*----------------------------------------------------------------------*/
/*							function error								*/
/*----------------------------------------------------------------------*/
auto error(const string& msg) 
{
	throw runtime_error(msg);
}
/*----------------------------------------------------------------------*/
/*						class Name_Value								*/
/*----------------------------------------------------------------------*/
class Name_Value {
public:
    Name_Value(char ch) : kind{ ch } {}
    Name_Value(string str) : name{ str } {}
    Name_Value(string str, double val) : kind{ 'p' }, name{ str }, value{ val } {}
    auto get_kind() -> const char { return kind; }
    auto get_name() -> const string { return name; }
    auto get_value() -> const double { return value; }
private:
    char kind;
    string name;
    double value;
};

vector<Name_Value> test_pair;

class Name_Value_Stream {
public:
    Name_Value_Stream() : full{ false }, buffer{ 0 } {}
    auto get() -> Name_Value;
private:
    bool full = false;
    Name_Value buffer;
};

auto Name_Value_Stream::get() -> Name_Value {
    if (full) {
        full = false;
        return buffer;
    }
    string name;
    double value;
    cin >> name >> value;

    if (name == "quit" || value == 0) {//���� quit<-Noname
        error("Quit!");
    }

    return Name_Value{ name, value };
}

auto input_pair() -> void
try {
    Name_Value_Stream nvs;
    while (true) {
        Name_Value nv = nvs.get();
        test_pair.push_back(nv);
    }
}
catch (exception& e) {
    cerr << e.what() << '\n';
}

auto print_pair() -> void {
    for (auto& nv : test_pair)
        cout << nv.get_name() << ':' << nv.get_value() << '\n';
}

auto main() -> int {
    input_pair();
    print_pair();
}