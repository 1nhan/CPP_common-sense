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

void error(const string& msg) {
	throw runtime_error(msg);
}

class Name_Value {
public:
	Name_Value(char ch) :kind{ ch } {};
	Name_Value(char ch, double val) :kind{ ch }, score{ val } {};
	Name_Value(char ch, string str) :kind{ ch }, name{ str } {};
	auto get_score() -> double { return score; }
	auto get_name() -> string { return name; }
private:
	double score=0;
	string name="name";
	char kind;
};

class Token_Stream {
public:
	auto putback(Name_Value) -> void;
	auto get() -> Name_Value;
private:
	bool full = false;
	Name_Value buffer;
};
Token_Stream ts;

auto Token_Stream::putback(Name_Value t) -> void
{
	if (full)
		error("full into buffer");

	buffer = t;
	full = true;
}
auto Token_Stream::get() -> Name_Value
{
	if (full) {
		full = false;
		return buffer;
	}
	string str = " ";
	
	if (!(cin >> str))
		error("no input");
	if (str[0] <= 9 && str[0] >= 0)
		return Name_Value{ '8',stod(str) };
	else
		return Name_Value{ 'n', str };
}

