import std;
using namespace std;

auto error(const string& msg, const string name)
{
	throw runtime_error(msg + " " + name);
}
struct Point {
	int x, y;
};

auto main() -> int
{
	vector<Point>points;
	cout << "plaese enter input file name:	";
	string iname;
	cin >> iname;
	ifstream ist { iname };
	if (!ist)
		error("cant read this file", iname);

	cout << "plaese enter name of output file name:	";
	string oname;
	cin >> oname;
	ofstream osst{ oname };
	ofstream ost{ oname };
	if (!ost)
		error("cant write this file", oname);

	for (Point p : points)
		ost << '(' << p.x << ',' << p.y << ')' << '\n';

}

auto fill_from_file(vector<Point>&points, string& name) -> void 
{
	ifstream ist{ name };
	if (!ist)
		error("cant read this file", name);
	//...ist ���.
	// �Լ� ���� �� �Ϲ��� ����.
	ist.open(name,ios::in); // ist��� name������ �б� �������� ����.
	ist.close();	// ���� �ݱ�.

}


