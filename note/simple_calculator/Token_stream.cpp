
import Calc_Header;
import std;
using namespace std;

Token_stream ts;
auto Token_stream::putback(Token t) -> void{
	if (full)/*precondion을 확인 "버퍼가 이미 채워졌는가?"*/
		error("putback()into a full buffer");
	buffer = t;/*t를 buffer에 복사*/
	full = true;/*버퍼가 채워졌음을 표시*/
}

/*
	Token_stream::get() :
	1. 토큰이 있는지 확인. true라면 buffer로 반환
	2. 토큰이 false인 경우 buffer에 char를 읽고 처리
*/
auto Token_stream::get() ->Token {
	if (full) {/*이미 준비된 토큰이 있는가?*/
		full = false;/*버퍼에서 토큰을 제거*/
		return buffer;
	}
	char ch = 0;
	if (!(cin >> ch)) /*연산자는 공백 스페이스 줄바꿈 탭등으로 건너뜀*/
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
		cin.putback(ch); /*숫자를 입력 스트림으로 되돌려 놓음*/
		double val = 0;
		cin >> val; 
		return Token{ '8',val };/*숫자 '8'은 숫자를 나타내는 토큰 kind로 사용*/
	}
	default:
		error("bad token");
	}
}
