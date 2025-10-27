export module Token_stream;
import Token;

export class Token_stream {

public:
	Token_stream() :full{ false }, buffer{ ' ',0.0} {};
	auto get() -> Token;			/*
		��ū�� �������� �Լ�.*/
	auto putback(Token t)->void;	/*
		put ��� putback�̶�� ����� ����:
		get�� putback�� ���Ī���� �����ϰ� �;��� ����.
		�߰��� putback�� istream������ putback�̶�� �Լ��� �����ϹǷ�
		��� �ϰ����� �����ϴ� ���� �ý����� �߿��� Ư���̴�.
		(����ϱ� ����, ������ ���̴µ� ������ �ȴ�.)*/

private:
	bool full = false;/*
		���ۿ� ��ū�� �ִ��� Ȯ���ϴ� ����*/
	Token buffer;/*
		putback()�� ��ū�� �����ϴ� ����*/
};
export extern Token_stream ts;