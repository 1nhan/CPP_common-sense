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

void error(const string& msg) {
	throw runtime_error(msg);
}

class Name_Value {
public:
	Name_Value() :kind{ ' '} {};
	Name_Value(char ch) :kind{ ch } {};
	Name_Value(char ch, double val) :kind{ ch }, score{ val } {};
	Name_Value(char ch, string str) :kind{ ch }, name{ str } {};
	auto get_score() -> double { return score; }
	auto get_name() -> string { return name; }
	auto get_kind() -> char { return kind; }
private:
	double score = 0;
	string name = "name";
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

auto print_Name_Value() -> void
try{
	vector<Name_Value>test;
	Name_Value t;
	while (cin) {
		t = ts.get();
		if (t.get_name() == "Noname" || t.get_score() == 0) 
			return ;
	}
	for (int i = 0; i < test.size(); ++i){

	}
}
catch (exception& e) {
	cerr << e.what() << '\n';
}
catch (...) {
	cerr <<"exception" << '\n';
}

auto main() -> int
{
	print_Name_Value();
}