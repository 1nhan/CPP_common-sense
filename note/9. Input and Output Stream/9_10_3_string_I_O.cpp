/* String I/O
* �� �� ��ü�� �ѹ��� �а� ������ �����ϰ� ������ getline()�� ���.
*/

import std;
using namespace std;

auto input_use_cin() -> void
{
	char ch = 0;
	while (true)
	{
		if (cin >> ch && ch != 'q')
			cout << ch;
	}
}

auto input_use_getline() -> void
{
	string name;
	getline(cin, name);
}

auto main() -> int
{
	//input_use_cin();
	input_use_getline();
}