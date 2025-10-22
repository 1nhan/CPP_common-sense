/*******************************************************************************************

	[5] 이 연습문제와 이후 몇 가지 문제는
	도서관 소프트웨어의 일부로 상상할 수 있는 Book 클래스를
	설계하고 구현하는 것을 요구한다.Book 클래스는
	ISBN, 제목(title), 저자(author), 저작권 날짜(copyright date)를 멤버로 가져야 한다.
	또한 해당 도서가 대출 중인지 아닌지를 나타내는 데이터를 저장하시오.
	이러한 데이터 값을 반환하는 함수들을 생성하시오.
	도서를 대출하거나 반납하는 함수들을 생성하시오.
	Book에 입력되는 데이터에 대해 간단한 유효성 검사를 수행하시오.
	예를 들어, ISBN은 n−n−n−x 형식만 허용하되,
	여기서 n은 정수이고 x는 숫자 또는 문자여야 한다.
	ISBN은 문자열(string)로 저장하시오.
	*/

import std;
using namespace std;

void error(const string& msg) {
	throw runtime_error(msg);
}

class Book {
public:
	Book() 
		:ISBN{ "n-n-n-x" }, title{ "title" }, 
		author{"name"}, copyright_date{19000101} {};
	
	auto get_ISBN() -> string;
	auto get_title() -> string; 
	auto get_author() -> string;
	auto get_copyright_date() -> int;
	auto Book_loan() -> void {};
	auto Book_return() -> void {};
private:
	string ISBN, title, author;
	int copyright_date;
};
auto Book::get_ISBN() -> string {
	char ch = ' ';
	if('-'==ch) 
}
	

	
	
	
	/*
	[6] Book 클래스에 연산자를 추가하시오.
	== 연산자는 두 도서의 ISBN 번호가 동일한지를 검사하도록 하시오.
	!= 연산자도 ISBN 번호를 비교하도록 하시오.
	<< 연산자는 제목, 저자, ISBN을 각각 한 줄씩 출력하도록 하시오.

	[7] Book 클래스에 대해 Genre라는 열거형(enumerated type)을 생성하시오.
	Genre의 종류는 
	fiction(소설), nonfiction(논픽션), periodical(정기간행물), 
	biography(전기), children(아동)으로 하시오. 
	각 도서에 Genre를 부여하고, Book 생성자 및 멤버 함수에 적절한 변경을 가하시오.

	[8] 도서관을 위한 Patron 클래스를 생성하시오.
	이 클래스는 사용자의 이름(name), 
	도서관 카드 번호(library card number), 미납 도서관 요금(library fees)을 멤버로 가져야 한다. 
	이러한 데이터를 접근하는 함수들과, 사용자의 요금을 설정하는 함수(set fee)를 생성하시오.
	사용자가 요금을 미납했는지 여부를 반환하는 부가 함수(helper function)를 생성하되, 
	반환값은 불리언(bool)으로 하시오.

	[9] Library 클래스를 생성하시오.
	이 클래스에는 Book과 Patron의 벡터(vector)를 포함하시오.
	도서가 대출될 때를 기록하는 Transaction이라는 구조체(struct)를 포함하시오.
	이 구조체에는 Book, Patron, Date를 포함하시오.
	대출 중인 도서들을 기록하기 위해 Transaction의 벡터를 생성하시오.
	도서를 도서관에 추가하는 함수, 사용자를 도서관에 추가하는 함수, 도서를 대출하는 함수를 생성하시오.
	사용자가 도서를 대출할 때, 도서관에 해당 사용자와 도서가 존재하는지 확인하시오.
	존재하지 않을 경우 오류를 보고하시오. 그 다음, 사용자가 요금을 미납했는지 확인하시오.
	미납한 경우 오류를 보고하시오.
	그렇지 않으면 Transaction을 생성하고, 이를 Transaction 벡터에 추가하시오. 또한 
	요금을 미납한 모든 Patron의 이름을 포함하는 벡터를 반환하는 함수를 작성하시오.

	[10] leapyear(int)를 구현하시오.

	[11] Date 클래스를 위한 유용한 보조 함수들을 설계하고 구현하시오.
	예: 다음 근무일(next_workday) 함수 (토요일과 일요일이 아닌 날은 근무일로 간주), 
	연중 몇 번째 주인지 반환하는 week_of_year() 함수 
	(1월 1일이 포함된 주를 1주로 간주하며, 주의 시작일은 일요일로 간주).


	[12] Date의 표현을 1970년 1월 1일(일명 day 0) 이후의 일 수로 변경하시오. 
	long int 타입으로 표현하며, §8.4.2의 Date 멤버 함수들을 재구현하시오.
	표현 가능한 범위를 벗어난 날짜는 거부하시오(day 0 이전의 날짜는 거부 가능).

*******************************************************************************************/

