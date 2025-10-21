
import Term;
import std;
import error;
import Token;
import Token_stream;
import Primary;
using namespace std;

auto Term() -> double {
	double left = Primary();
	Token t = ts.get();

	while (true) {
		switch (t.get_kind()) {
		case'*': 
			left *= Primary(); 
			t= ts.get(); 
			break;
		case'/': {
			double d = Primary();
			if (d == 0)
				error("divide by zero");
			left /= d;
			t = ts.get();
			break;
		}
		default:
			return left;
		}
	}
}