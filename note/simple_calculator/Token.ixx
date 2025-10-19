export module Token;

export class Token {
public:
	Token() {};
	Token(char k) :kind{ k } {};
	Token(char k, double d) :kind{ k }, value{ d } {};

//private:
	char kind;
	double value;
};