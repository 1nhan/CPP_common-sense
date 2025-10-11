### Review

Class
 ∟ User-defined types
 ∟ Classes and members
 ∟ Interface and Inplementation
 ∟ Evolving a class
	∟ Struct and functions
	∟ Memberfunctions and constructors
	∟ keep details private
	∟ Defining member functions
	∟ Refferring to the current object
	∟ Reporting errors
 ∟ Enumerations
 ∟ Operator Overloading
 ∟ Class Interface
	∟ Argument types
	∟ copying
	∟ Default constructors
	∟ Const member functions
	∟ Member function and helping function
	∟ The ISO standard

----------------------------------------------------------------------
 ∟ User-defined types
	∟ not a built-in type
				∟ ex. char, int, double
	∟ 왜 새로운 타입을 정의할까? 타입은 아이디어를 표현하는데 유용하다.
												∟ ex. Token, Token_stream
												∟ Representation + Operation
	∟ Class 와 Enumeration 모두 User-defined types이다. 

----------------------------------------------------------------------
 ∟ Classes and members
				∟ 클래스 정의에 사용되는 구성요소
				∟ notation(표기법)
					∟ object.member 

----------------------------------------------------------------------
 ∟ Interface and Implementation
	∟ Interface: 클래스 선언 중 사용자가 직접 접근이 가능한 부분 
	∟ Implementation: 인터페이스를 통해서만 간접적으로 접근할 수 있는 부분 
	∟ public: // 공개 인터페이스
	∟ private: // 구현 세부 사항, Default값, public함수를 경유로 접근해야함.
←→ Struct 
	∟ 의미있는 불변조건을 정의할 수 없는 경우에 적합하다.
	∟ 멤버가 어떤 값이든 가질 수 있는 데이터 구조를 표현할 때 주로 사용.


----------------------------------------------------------------------
 ∟ Evolving a class : Date 
	∟ Struct and functions
		∟ “이 타입에 어떤 연산이 필요할까?”
		∟ date01_struct_and_functions.cpp

----------------------------------------------------------------------
 ∟ Evolving a class : Date 
	∟ Member functions and constructors
								∟ 초기화를 위한 편리한 문법 
		∟ ex. Date last {2005, 12, 31};
				∟ Date 생성자가 요구하는 인수를 변수 이름 뒤에 
				{ } 리스트로 제공하며, 생성자를 요구하는 클래스 
				변수 초기화에서 가장 일반적인 방식
		∟ date02_member_functions_and_constructors.cpp

----------------------------------------------------------------------

 ∟ Evolving a class : Date 
	∟ keep details private
		∟ 누군가가 멤버 함수 add_day()를 사용하는 것을 잊는다면 어떻게 될까요?
		or 누군가가 월(month)을 직접 변경하려 한다면 어떻게 될까요?
		∟ Date의 표현 방식 이 모든 사용자에게 공개되어 있는 한, 
		누군가는 그 값을 망가뜨릴 것입니다.
		유효하지 않은 객체는 시한폭탄과 같습니다.이러한 문제를 고려하면, 
		내부 표현은 사용자에게 직접 접근할 수 없도록 하고,
		공개 멤버 함수(public member function)를 통해서만 
		접근할 수 있도록 해야 한다는 결론에 도달합니다.
		∟ 객체의 값은 종종 상태(state)라고 불리며, 
		유효한 값이라는 개념은 객체의 유효한 상태(valid state)로 표현됩니다.
		∟ date03_keep_details_private.cpp

----------------------------------------------------------------------
 ∟ Evolving a class : Date 
	∟ Defining member functions
		∟ notation(표기법)
			∟ 클래스이름::멤버이름 
		∟ notation(표기법) member initializer list(멤버 초기화 리스트)
			∟ :y{yy}, m{mm}, d{dd}
		∟ date04.ixx, date04.cpp, date04_main.cpp

----------------------------------------------------------------------
 ∟ Evolving a class : Date 
	∟ Refferring to the current object
		∟ 어떻게 해당 객체를 구분할 수 있을까요?
		클래스의 멤버 함수(member function), 호출된 객체를 식별하기 위한 
		암시적 인수(implicit argument)를 가지고 있습니다.


----------------------------------------------------------------------
 ∟ Evolving a class : Date 
	∟ Reporting errors
	∟유효하지 않은 날짜를 발견했을 때 우리는 어떻게 해야 할까요?
	or 코드의 어느 부분에서 유효하지 않은 날짜를 확인해야 할까요?
	∟ 

----------------------------------------------------------------------
 ∟ Enumerations
	∟ enum(열거형)
	∟ 값의 집합(열거자, enumerator)을 기호 상수(symbolic constant)로 지정합니다.
	∟ ex. ```cpp
			enum class Month {
				jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
			};
			```
	∟ 열거형은 언제 사용할까요?
	기본적으로, 열거형은 관련된 이름 있는 정수 상수 집합이 필요할 때 유용합니다. 
	이는 대안의 집합(up, down; yes, no, maybe; on, off; n, ne, e, se, s, sw, w, nw)이나 
	고유한 값(red, blue, green, yellow, maroon, crimson, black)을 표현할 때 자주 발생합니다.

	∟"Plain" enumerations
			∟ int로의 암시적 변환을 허용
			∟ 원하지 않는 암시적 변환이 발생할 경우 오류
			∟ enum class는 C++11에서 도입된 기능

----------------------------------------------------------------------
 ∟ Operator Overloading
	∟ 클래스나 열거형에 대해 C++의 거의 모든 연산자를 정의할 수 있습니다.
	∟ ex. 순환하는 동작
	
	```
	int to_int(Month m){
		return static_cast<int>(m);
	}

	enum class Month {
		jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
	};

	Month operator++(Month& m){
		m = (m == Month::dec) ? Month::jan : Month{ to_int(m) + 1 };
	}
	```

----------------------------------------------------------------------
 ∟ Class Interface
	∟ 좋은 인터페이스란 무엇일까요? 
	or좋은 공개 인터페이스와 엉망인 인터페이스를 구분하는 기준은 무엇일까요?
	Keep interfaces complete.
	(인터페이스를 완전하게 할 것)
	Keep interfaces minimal. 
	(인터페이스를 최소화 할 것)
	Provide constructors. 
	(생성자를 제공할 것)
	Support copying (or prohibit it). 
	(복사생성자를 지원할 것, (또는 금지할 것))
	Use types to provide good argument checking.
	(타입을 사용해서 좋은 argument를 체킹할 것)
	Identify nonmodifying member functions. 
	(nonmodifying(상태가 변하지 않아야)하는 멤버 함수를 식별할 것.)
	Free all resources in the destructor. 
	(destructor에서 모든 리소스를 Free할 것)
	
----------------------------------------------------------------------
 ∟ Class Interface
	∟ Argument types
		∟ date06.cpp
		∟열거자에 열거형 이름을 붙이는 방식
		클래스, 열거형, 네임스페이스 이름 뒤에는 ::를, 객체 이름 뒤에는 .을 사용합니다 



----------------------------------------------------------------------
 ∟ Class Interface
	∟ copying
		∟ 객체를 복사할 수 있는가?
		or어떻게 복사할 것인가?
				  ∟ default behavior.
						∟ 그렇다면 기본 복사 동작을 원하지 않는 
						경우에는 어떻게 해야 할까요? 
							∟ 이 경우에는 복사 생성자(copy constructor)와 
							복사 대입 연산자(copy assignment operator)를 직접 정의하거나, 
							복사 생성자와 복사 대입 연산자를 삭제(delete)할 수 있습니다

----------------------------------------------------------------------
 ∟ Class Interface
	∟ Default constructors
		∟ "empty"는 유용하지만 의미를 부여할 수 있는 생성자를 정의하는 것이 더 낫다.
								∟ 멤버선언시 지정된 초기값은 default member initializer 또는
								클래스 내 초기값 in-class initializer라고 한다.
		∟ T type, T{} 기본값을 나타내는 표기, 기본 생성자에 의해 정의된다.

	
----------------------------------------------------------------------
 ∟ Class Interface
	∟ Const member functions
		∟ 변경 불가능한 값, ←→ mutable 
				↗modifying //변경하는 연산
	클래스의 연산 
				↘nonmodifying //변경하지 않는 연산
		∟ 멤버함수 선언에서 인수목록 뒤에 const를 붙이면, 해당함수가 const객체에 대해
		호출될 수 있음.
		또 멤버함수를 const로 선언하면 컴파일러는 해당 객체를 수정하지 않겠다는 약속을
		강제합니다.

----------------------------------------------------------------------
 ∟ Class Interface
	∟ Member function and helping function
							∟ 설계개념. convenience, auxiliary
		∟ 인터페이스를 최소화(그러면서도 완전하게) 설계할 때, 
		단지 “유용한” 연산들은 생략해야 합니다.


----------------------------------------------------------------------
 ∟ Class Interface
	∟ The ISO standard






이 장에서 설명한 클래스의 두 구성 요소는 무엇인가?
<details><summary></summary>

<details>

클래스에서 인터페이스(interface)와 구현(implementation)의 차이는 무엇인가?
<details><summary></summary>

<details>

§8.4.1의 struct Date가 가진 한계와 문제점은 무엇인가?
<details><summary></summary>

<details>

Date 타입에 init_day() 함수 대신 생성자를 사용하는 이유는 무엇인가?
<details><summary></summary>

<details>

불변 조건(invariant)이란 무엇인가? 예를 들어 설명하시오.
<details><summary></summary>

<details>

함수는 언제 클래스 정의 내부에 작성해야 하며, 언제 외부에 정의해야 하는가? 그 이유는?
<details><summary></summary>

<details>

기본 생성자(default constructor)란 무엇이며, 언제 필요한가?
<details><summary></summary>

<details>

기본 멤버 초기값(default member initializer)이란 무엇인가?
<details><summary></summary>

<details>

프로그램에서 연산자 오버로딩(operator overloading)은 언제 사용해야 하는가? 
오버로딩하고 싶은 연산자 목록과 그 이유를 제시하시오. 
C++에서 정의할 수 있는 연산자는 무엇인가?
<details><summary></summary>

<details>

클래스의 공개 인터페이스는 가능한 한 작게 유지해야 하는 이유는 무엇인가?
<details><summary></summary>

<details>

멤버 함수에 const를 추가하면 어떤 효과가 있는가?
<details><summary></summary>

<details>

“보조 함수(helper function)”는 왜 클래스 정의 외부에 두는 것이 좋은가?
<details><summary></summary>

<details>

enum class와 “일반적인” enum의 차이는 무엇인가?
<details><summary></summary>

<details>

책이 대출될 때를 기록하는 Transaction이라는 구조체(struct)를 포함하시오. 
이 구조체는 Book, Patron, Date를 포함해야 한다.
<details><summary></summary>

<details>

대출된 책들을 기록하기 위한 Transaction 벡터를 생성하시오.
<details><summary></summary>

<details>

도서관에 책을 추가하는 함수, 이용자를 추가하는 함수, 책을 대출하는 함수를 작성하시오.
<details><summary></summary>

<details>

책을 대출할 때, 해당 이용자와 책이 도서관에 존재하는지 확인하시오. 
존재하지 않을 경우 오류를 보고하시오.
<details><summary></summary>

<details>

이용자가 요금을 미납했는지 확인하시오. 미납 시 오류를 보고하시오.
<details><summary></summary>

<details>

문제가 없을 경우 Transaction을 생성하고 Transaction 벡터에 추가하시오.
<details><summary></summary>

<details>

요금을 미납한 Patron의 이름을 포함하는 벡터를 반환하는 함수를 작성하시오.
<details><summary></summary>

<details>

