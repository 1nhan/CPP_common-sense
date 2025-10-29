/* 부동소수점 입출력
*/
import std;
using namespace std;

auto hex_age(double val) -> void
{
	cout << hex << val << '\n';
	cout << "hexfloat :" << hexfloat << val << '\n';
}
auto scientific_age(double val) -> void
{
	cout <<"scientific :" << scientific << val << '\n';
}
auto fixed_age(double val) -> void
{
	cout << "fixed :" << fixed << val << '\n';
}

auto defaultfloat_age(double val) -> void
{
	cout <<"defaultfloat :" << defaultfloat << val << '\n';
}

auto main() -> int
{
	int input = 1234.56789012345;
	hex_age(input);
	scientific_age(input);
	fixed_age(input);
	defaultfloat_age(input);
}