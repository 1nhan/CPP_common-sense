/*******************************************************************
* 
	���ڸ� �о� ������ �����ϴ� ���α׷��� �ۼ��϶�. 
	��: 123�� ���� '1', '2', '3'�� ������, 
	����� 123 is 1 hundred and 2 tens and 3 ones�� �Ǿ�� �Ѵ�. 
	����� int ������ ó���ϸ�, 1~4�ڸ� ���ڸ� �����϶�. 
	��Ʈ: ���� '5'���� ���� 5�� �������� '5' - '0'�� �����϶�. 
	��, '5' - '0' == 5.
* 
********************************************************************/

/*
*	char �Է�> 123
	���> 123 is 1 hundred and 2 tens and 3 ones 
*/
import std;
using namespace std;

constexpr int rule = 4;
auto error(const string& msg) -> void
{
	throw runtime_error(msg);
}
class Number{
public:
	Number() :kind{ ' ' } {}
	Number(char ch) :kind{ ch } {}
	Number(char ch, int val) :kind{ ch }, value {val} {}
	auto get_kind() -> char { return kind; }
	auto get_value() -> int { return value; }
private:
	char kind;
	int value;
};
class Number_Stream {
public:
	auto get()->Number;
	auto putback(Number) -> void;
private:
	bool full = false;
	Number buffer;
};

auto Number_Stream::get() -> Number
{// ���� �Է�.
	char ch = 0;
	//if (str[str.size()-1]=='-'&&ch == '0') quit;
	cin >> ch;
	switch (ch) {
	case'0':case'1':case'2':case'3':case'4':
	case'5':case'6':case'7':case'8':case'9': 
	{
		cin.putback(ch);
		int val = 0;
		cin >> val;
		return Number{ '8',val };
	}
	case';'://print.
	case'q':// quit.
		return Number{ch};
	default:
		error("wrong number");
	}
}
Number_Stream ns;

auto generate_int() -> void 
{// ���� �� ����Ʈ 
	
	Number num = ns.get();
	while (true) {
		if (num.get_kind() == 'q')
			if (num.get_kind() == ';')
				cout << num.get_value() << '\n';

	}
}
auto print_int() -> void {
	
}

auto main() -> int 
{
	generate_int();
}