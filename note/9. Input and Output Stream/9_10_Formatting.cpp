/* ������� ����� �䱸�� �°� �����ϴ� �پ��� ����� �Ұ��Ѵ�.
*/
import std;
using namespace std;

auto hex_age(int val) -> void
{
	cout << hex << val << '\n';
}
auto oct_age(int val) -> void
{
	cout << oct<< val << '\n';
}
auto dec_age(int val) -> void
{
	cout << dec << val << '\n';
}

auto main() -> int
{
	hex_age	(1234);
	oct_age	(1234);
	dec_age(1234);
}