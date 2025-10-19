import Expression;
import Token;
import Token_stream;
import Term;
auto Expression() -> double {
	double left = Term();
	Token_stream ts;
	Token t = ts.get();
	while (true) {
		switch (t.kind) {
		case'+': left += Term(); t = ts.get(); break;
		case'-': left -= Term(); t = ts.get(); break;
		default: left;
		}
	}
};