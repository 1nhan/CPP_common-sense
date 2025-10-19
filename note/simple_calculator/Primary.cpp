
import Primary;
import std;
import Expression;
import Token;
import Token_stream;
import error;
using namespace std;

auto Primary() -> double {
	Token_stream ts;
	Token t = ts.get();

	switch (t.kind) {
	case'(':
	{
		double d = Expression();
		t = ts.get();
		if (t.kind != ')')
			error("'('expected");
		return d;
	}
	case '8':
		return t.value;
	default:
		error("primary expected");
	}
}