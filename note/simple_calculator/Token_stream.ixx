export module Token_stream;
import Token;

export class Token_stream {

public:
	auto get() -> Token;			/*
		��ū�� �������� �Լ�.
	*/
	
	auto putback(Token t)->void;	/*
		put ��� putback�̶�� ����� ����:
		get�� putback�� ���Ī���� �����ϰ� �;��� ����.
		�߰��� putback�� istream������ putback�̶�� �Լ��� �����ϹǷ�
		��� �ϰ����� �����ϴ� ���� �ý����� �߿��� Ư���̴�.
		(����ϱ� ����, ������ ���̴µ� ������ �ȴ�.)
	*/

private:
	bool full = false;/*
		���ۿ� ��ū�� �ִ��� Ȯ���ϴ� ����
	*/
	Token buffer;/*
		putback()�� ��ū�� �����ϴ� ����
	*/
};