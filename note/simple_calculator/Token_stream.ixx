export module Token_stream;
import Token;

export class Token_stream {

public:
	auto get() -> Token;			/*
		토큰을 가져오는 함수.
	*/
	
	auto putback(Token t)->void;	/*
		put 대신 putback이라고 명명한 이유:
		get과 putback간 비대칭성을 강조하고 싶었기 때문.
		추가로 putback은 istream에서도 putback이라는 함수가 존재하므로
		명명 일관성을 유지하는 것은 시스템의 중요한 특성이다.
		(기억하기 슆고, 오류를 줄이는데 도움이 된다.)
	*/

private:
	bool full = false;/*
		버퍼에 토큰이 있는지 확인하는 변수
	*/
	Token buffer;/*
		putback()에 토큰을 저장하는 공간
	*/
};