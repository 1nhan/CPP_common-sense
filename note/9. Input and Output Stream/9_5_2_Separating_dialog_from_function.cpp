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
auto get_int(int low, int high, const string&greeting, const string&sorry) -> int
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
	int strength = get_int(1, 10, "enter strength", "Not in range, try again");
	cout << "strength: " << strength << '\n';

	int altitude = get_int(0, 50000, "Please enter altitude in feet", "Not in range, please try again");
	cout << "altitude: " << altitude << "f above sea level\n";


}