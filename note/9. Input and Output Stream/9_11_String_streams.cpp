/* String streams 
istringstream, ����ȭ�� ���ڿ����� ���ڸ� ������ �� �����ϴ�. 
ostringstream, 
*/
import std;
using namespace std;

auto error(const string& msg, const string& name) {
	throw runtime_error(msg + " " + name);
}

struct Point {
	double x, y;
};

Point get_coordinates(const string& s)
{ //"(x,y)"���Ŀ��� x,y�� ����.
	istringstream is{ s }; // ���ڿ����� s�� �б����� ��Ʈ�� ����.
	Point tx;
	char left_paren, ch, right_paren;

	is >> left_paren >> tx.x >> ch >> tx.y >> right_paren;
	if (!is || left_paren != '(' || ch != ',' || right_paren != ')')
		error("format error", s);
	
	/*Ȯ�ο�.
	*/
	cout << tx.x << " " << tx.y << '\n';
	return tx;
}

auto test() -> void
{
	get_coordinates("(10,8)");
	//get_coordinates("(10.8)");  �Ϻη� ���� ����. 
	int seq_no = 8848483232313;
	
	ostringstream name;
	name << "myfile" << seq_no <<".log";
	ofstream logfile{ name.str() };
	name << "myfile" << setw(6) << setfill('0') << seq_no << ".log";
}


auto main() -> int
{
	test();

}