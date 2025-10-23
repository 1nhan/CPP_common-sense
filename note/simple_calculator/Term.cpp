
import Calc_Header;
import std;
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