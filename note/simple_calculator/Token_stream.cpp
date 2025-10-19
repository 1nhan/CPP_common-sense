
import Token_stream;
import error;
import std;
using namespace std;
/*
	클래스를 외부에서 정의하는 이유:
	가장 큰 이유는 명확성이다.클래스 정의는 해당 클래스가 
	“무엇을 할 수 있는지”를 기술하는 것이며, 멤버 함수 정의는 
	“어떻게 수행하는지”를 구현하는 것이다. 우리는 이러한 구현을 
	클래스 외부에 배치함으로써 클래스 정의의 가독성을 높이고, 
	논리적 단위를 화면에 한 번에 표시할 수 있도록 한다. 
	멤버 함수 정의를 클래스 내부에 포함시키면 
	클래스 정의가 지나치게 길어질 수 있다.
*/
auto Token_stream::putback(Token t) -> void{
	if (full)/*
		precondion을 확인 "버퍼가 이미 채워졌는가?"*/
		error("putback()into a full buffer");

	buffer = t;/*
		t를 buffer에 복사*/
	full = true;/*
		버퍼가 채워졌음을 표시*/
	
}

/*
	Token_stream::get() :
	1. 토큰이 있는지 확인. true라면 buffer로 반환
	2. 토큰이 false인 경우 buffer에 char를 읽고 처리
*/
auto Token_stream::get() ->Token {
		
	if (full) {/*
		이미 준비된 토큰이 있는가?*/
		full = false;/*
		버퍼에서 토큰을 제거*/
		return buffer;
	}
	char ch = 0;
	if (!(cin >> ch)) /*
		연산자는 공백 스페이스 줄바꿈 탭등으로 건너뜀*/
		error("no input");

	switch (ch) {
	case';': // 출력 명령 print
	case'q': // 종료 명령 quit
	case'(':case')':
	case '+':case '-':case'*':case'/':
		return Token{ ch };
	case'.':
	case'0':case'1':case'2':case'3':case'4':
	case'5':case'6':case'7':case'8':case'9':
	{
		cin.putback(ch); /*
		숫자를 입력 스트림으로 되돌려 놓음*/
		double val = 0;
		cin >> val; 
		return Token{ '8',val };/*
		숫자 '8'은 숫자를 나타내는 토큰 kind로 사용*/
	}
	default:
		error("bad token");
	}
}
