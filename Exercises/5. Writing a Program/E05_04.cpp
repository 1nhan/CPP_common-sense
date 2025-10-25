/********************************************************************************
*
	문자열과 값을 저장하는 Name_value 클래스를 정의하라.
	제3장의 연습문제 20번을 수정하여 두 개의 벡터 대신 vector<Name_value>를 사용하라.
*
*********************************************************************************/
/************************************************************************
*
* 	이름과 값 쌍(name - value pair)을 입력받는 프로그램을 작성하세요.
*	예: Joe 17, Barbara 22
	각 이름은 names 벡터에,
*	각 값은 scores 벡터에 같은 위치로 저장하세요.
*	예 : names[7] == "Joe"이면 scores[7] == 17
*	입력 종료 조건 : NoName 0 이름이 중복되면 오류 메시지를 출력하고 종료하세요.
*	모든(이름, 점수) 쌍을 한 줄씩 출력하세요.
*
*	위 프로그램을 수정하여,
*	이름과 값 쌍을 입력한 후 루프를 통해 이름을 입력하면 해당 점수를 출력하거나
*	"name not found"를 출력하세요.
*
*	위 프로그램을 수정하여,
*	이름과 값 쌍을 입력한 후 루프를 통해 점수를 입력하면 해당 점수를 가진 모든 이름을
*	출력하거나 "score not found"를 출력하세요.
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

    if (name == "quit" || value == 0) {//종료 quit<-Noname
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