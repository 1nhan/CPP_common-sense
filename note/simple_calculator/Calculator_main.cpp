import std;
import Token;
import Token_stream;
import Expression;
import Term;
import Primary;
using namespace std;

int main()try {
	while (cin)
		cout << Expression() << '\n';
}
catch (exception& e) {
	cerr << e.what() << '\n';
	return 1;
}
catch (...) {
	cerr << "exception" << '\n';
}