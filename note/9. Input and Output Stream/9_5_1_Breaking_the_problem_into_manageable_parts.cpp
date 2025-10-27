import std;
using namespace std;

auto error(const string& msg) -> void
{
	throw runtime_error(msg);
}

auto skip_to_int() -> void
{
	if (cin.fail()) {
		cin.clear();
		for (char ch; cin >> ch;)
			if (isdigit(ch) || ch == '-') {
				cin.unget();
				return;
			}
		error("no input");
	}
}

/*
	버전 1
auto get10() -> int
{
	cout << "Please enter an integer in the range 1 to 10 (inclusive):\n";
	int n = 0;
	while (cin >> n) {
		if (1 <= n && n <= 10)
			return n;
		cout << "Sorry " << n << " is not in the [1:10] range; please try again\n";
	}

}

	버전 2
auto get10() -> int
{
	cout << "Please enter an integer in the range 1 to 10 (inclusive):\n";
	int n = 0;
	while (true) {
		cin >> n;
		if (cin) {
			if (1 <= n && n <= 10)
				return n;
			cout << "Sorry " << n << " is not in the [1:10] range; please try again\n";
		}
		else if (cin.fail()) {
			cin.clear();
			cout << "Sorry try again" << '\n';
			for (char ch; cin >> ch && !isdigit(ch);)//숫자가 아닌 문자 제거, 아무 작업 없음.
				;
			if (!cin)
				error("no input");
			cin.unget();//숫자를 되돌려서 다시 읽게함.
		}
		else
			error("no input");
	}
}
	버전 3
auto get10() -> int
{
	cout << "Please enter an integer in the range 1 to 10 (inclusive):\n";
	int n = 0;
	while (true) {
		if (cin >> n) {
			if (1 <= n && n <= 10)
				return n;
			cout << "Sorry " << n << " is not in the [1:10] range; please try again\n";
		}
		else {
			skip_to_int();
		}
	}
}
*/
auto get_int() -> int;					//cin으로부터 정수 하나 입력
auto get_int(int low, int high) -> int;	//cin으로부터 [low:high]범위의 정수 입력

auto get_int() -> int
{
	int n = 0;
	while (true) {
		if (cin >> n)
			return n;
		cout << '\n';
		skip_to_int();
	}
}
auto get_int(int low, int high) -> int
{
	cout << "Please enter an integer in the range "
		<< low << " to " << high << " (inclusive):\n";

	while (true) {
		int n = get_int();
		if (low <= n && n <= high)
			return n;
		cout << "Sorry" << n << "is not in the [" << low
			<< ':' << high << "] range; plz try again\n";
	}
}

auto main() -> int
{
	int n = get_int(1, 10);
	cout << "n: " << n << '\n';
	int m = get_int(2, 300);
	cout << "m: " << m << '\n';

}