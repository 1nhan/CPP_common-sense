/* String I/O
* 한 줄 전체를 한번에 읽고 형식을 지정하고 싶으면 getline()을 써라.
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