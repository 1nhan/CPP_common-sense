import std;
using namespace std;

auto print_ostream() -> void
{
	for (char ch; cin.get(ch);) {// get()은 하나의 문자를 인자로 받아 읽는다. 공백을 건너 뛰지 않으며, 
							//>>와 마찬가지로 istream 참조를 반환하므로 스트림 상태를 검사할 수 있다. 
		if (isspace(ch))//공백 건너뛰기...
			return;
		else if (isdigit(ch))//숫자 읽기...
			;
		else if (isalpha(ch))//알파뱃 읽기...
			;
	}

}

auto main() -> int
{


}