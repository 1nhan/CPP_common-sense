import Calc_Header;
import std;
using namespace std;

auto Primary() -> double {
	Token t = ts.get();

	switch (t.get_kind()) {
	case'(':{
		double d = Expression();
		t = ts.get();
		if (t.get_kind() != ')')
			error("'('expected");
		return d;
	}
	case '8':
		return t.get_value();
	default:
		error("primary expected");
	}
}