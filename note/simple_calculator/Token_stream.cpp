
import Token_stream;
import error;
import std;
using namespace std;
/*
	Ŭ������ �ܺο��� �����ϴ� ����:
	���� ū ������ ��Ȯ���̴�.Ŭ���� ���Ǵ� �ش� Ŭ������ 
	�������� �� �� �ִ������� ����ϴ� ���̸�, ��� �Լ� ���Ǵ� 
	����� �����ϴ������� �����ϴ� ���̴�. �츮�� �̷��� ������ 
	Ŭ���� �ܺο� ��ġ�����ν� Ŭ���� ������ �������� ���̰�, 
	���� ������ ȭ�鿡 �� ���� ǥ���� �� �ֵ��� �Ѵ�. 
	��� �Լ� ���Ǹ� Ŭ���� ���ο� ���Խ�Ű�� 
	Ŭ���� ���ǰ� ����ġ�� ����� �� �ִ�.
*/
auto Token_stream::putback(Token t) -> void{
	if (full)/*
		precondion�� Ȯ�� "���۰� �̹� ä�����°�?"*/
		error("putback()into a full buffer");

	buffer = t;/*
		t�� buffer�� ����*/
	full = true;/*
		���۰� ä�������� ǥ��*/
	
}

/*
	Token_stream::get() :
	1. ��ū�� �ִ��� Ȯ��. true��� buffer�� ��ȯ
	2. ��ū�� false�� ��� buffer�� char�� �а� ó��
*/
auto Token_stream::get() ->Token {
		
	if (full) {/*
		�̹� �غ�� ��ū�� �ִ°�?*/
		full = false;/*
		���ۿ��� ��ū�� ����*/
		return buffer;
	}
	char ch = 0;
	if (!(cin >> ch)) /*
		�����ڴ� ���� �����̽� �ٹٲ� �ǵ����� �ǳʶ�*/
		error("no input");

	switch (ch) {
	case';': // ��� ��� print
	case'q': // ���� ��� quit
	case'(':case')':
	case '+':case '-':case'*':case'/':
		return Token{ ch };
	case'.':
	case'0':case'1':case'2':case'3':case'4':
	case'5':case'6':case'7':case'8':case'9':
	{
		cin.putback(ch); /*
		���ڸ� �Է� ��Ʈ������ �ǵ��� ����*/
		double val = 0;
		cin >> val; 
		return Token{ '8',val };/*
		���� '8'�� ���ڸ� ��Ÿ���� ��ū kind�� ���*/
	}
	default:
		error("bad token");
	}
}
