
import std;
using namespace std;


auto main() -> int
{
	int x = 1234;
	cout << format("{} - {:x} - {:o} - {:d} - {:b}\n", x, x, x, x, x);

	constexpr double d = 1234.56789;
	cout << format("format: {} - {:a} - {:e} - {:f} - {:g}\n", d, d, d, d, d);
	cout << format("precision: {} - {:.8} - {:.20} -n", d, d, d);
}