import std;
using namespace std;

auto error(const string& msg) -> void
{
	throw runtime_error(msg);
}

auto operator>>(istream& is, char& ch)->istream&
{
	is >> ch;
	return is;
}

auto istream_error_handling() -> void
{
	int i = 0;
	cin >> i;
	if (!cin) {
		if (cin.bad())
			error("cin is bad");
		if (cin.eof());
			//�Է� ����. �Ϲ����� �Է½����� ���� ���.
		if (cin.fail()) {
			cin.clear();
			//���� �õ�.
		}
	}
}

auto fill_vector(istream&ist, vector<int>&v,char terminator) -> void
{
	for (int x; ist >> x;)
		v.push_back(x);

	if (ist.eof())
		return;

	/*
		�ܼ�ȭ.
		
	*/
	ist.clear();
	char c = 0;
	ist>> c;
	if (c != terminator) {
		ist.unget();
		ist.clear(ios::failbit);
	}
/*
	if (ist.bad())
		error("Bad vector ");
	if (ist.fail()) {
		ist.clear();
		char c = 0;
		ist >> c;
		if (c != terminator) {
			ist.unget();
			ist.clear(ios::failbit);
		}
	}
*/
}

auto main() -> int
{

}