
import Primary;
import std;
import Expression;
import Token;
import Token_stream;
import error;
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