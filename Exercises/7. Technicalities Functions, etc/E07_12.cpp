
/*******************************************************************************************
	
	[12] 
	```
	void print_until(vector v, string quit){ // "quit"이라는 문자열이 나올 때까지 출력
		for (string s : v) {
		if (s == quit) return;
		cout << s << '\n';
		}
	}

	```
	를 개선하고 테스트하시오.
	좋은 테스트 케이스란 무엇인지, 그 이유를 설명하시오.
	그런 다음 종료 인수가 두 번째로 등장할 때까지 출력하는 print_until_ss() 함수를 작성하시오.

*******************************************************************************************/

import std;
using namespace std;


void print_until(vector<string>&v, string&quit) { // "quit"이라는 문자열이 나올 때까지 출력
	for (string s : v) {
		if (s == quit) return;
		cout << s << '\n';
	}
}

/*

void print_until_ss(vector<string>&v, string&quit) {
	int count = 0;
	for (string& s : v) {
		if (s == quit) {
			count++;
		}
		else if (count == 2) {
			return; 
		}
		cout << s << ' ';
	}

}
*/

int main() {
	/*
	print_until(test,quit);
	*/
	string quit = "quit";
	vector<string>test = { "what" ,"happen","ning","?", "quit", "quit","quit","no" };
	print_until_ss(test,quit);
}
