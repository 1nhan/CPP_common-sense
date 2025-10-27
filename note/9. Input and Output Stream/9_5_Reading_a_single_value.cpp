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
	���� 1
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

	���� 2
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
			for (char ch; cin >> ch && !isdigit(ch);)//���ڰ� �ƴ� ���� ����, �ƹ� �۾� ����.
				;
			if (!cin)
				error("no input");
			cin.unget();//���ڸ� �ǵ����� �ٽ� �а���.
		}
		else
			error("no input");
	}
}
	���� 3
*/
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


auto main() -> int
{
	int n = get_int(1, 10);
	cout << "n: " << n << '\n';
	int m = get_int(2, 300);
	cout << "m: " << m << '\n';

}