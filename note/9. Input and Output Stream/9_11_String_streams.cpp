/* String streams 
istringstream, 형식화된 문자열에서 문자를 추출할 때 유용하다. 
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
{ //"(x,y)"형식에서 x,y를 추출.
	istringstream is{ s }; // 문자열에서 s를 읽기위한 스트림 생성.
	Point tx;
	char left_paren, ch, right_paren;

	is >> left_paren >> tx.x >> ch >> tx.y >> right_paren;
	if (!is || left_paren != '(' || ch != ',' || right_paren != ')')
		error("format error", s);
	
	/*확인용.
	*/
	cout << tx.x << " " << tx.y << '\n';
	return tx;
}

auto test() -> void
{
	get_coordinates("(10,8)");
	//get_coordinates("(10.8)");  일부러 에러 내봄. 
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