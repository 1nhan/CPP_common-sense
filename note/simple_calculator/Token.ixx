export module Token;

export class Token {
public:
	Token() :kind{ ' ' }, value{ 0.0 } {};
	Token(char k) :kind{ k }, value { 0.0 } {};
	Token(char k, double d) :kind{ k }, value{ d } {};
	double get_value() { return value; };
	char get_kind() { return kind; };

private:
	char kind;
	double value;
};