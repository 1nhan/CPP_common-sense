### Review

Technicalities: Functions
	∟ Technicalities 
	∟ Declarations and definitions
		∟ Kinds of declarations
		∟ Variable and constant declarations
		∟ Default initialization
	∟ Scope 
	∟ Function call and return 
		∟ Declaring arguments and return type 
		∟ Returning a value
		∟ Pass-by-value
		∟ Pass-by-const-reference
		∟ Pass-by-reference
		∟ Pass-by-value vs. pass-by-reference
		∟ Argument checking and conversion
		∟ Function call implementation
		∟ Compile-time computation
		∟ Suffix return type
	∟ Order of evaluation 
		∟ Expression evaluation
		∟ Global initialization
	∟ Namespaces 
		∟ using-declarations and using-directives
	∟ Modules and headers 
		∟ Modules 
		∟ Header files 

----------------------------------------------------------------------
Technicalities: Functions
	∟ Technicalities 
		∟ “유일하게 올바른 방법”이라는 잘못된 믿음, 그런 함정에 빠지지 않도록 주의하라.

----------------------------------------------------------------------
	∟ Declarations and definitions
		∟ 선언(declaration)이란 이름(name)을 특정 범위(scope)에 도입하는 문(statement)이다
		∟ “선언되지 않은 식별자(undeclared identifier)” 오류를 발생
		∟ 완전히 정의된 선언(declaration)은 정의(definition)라고 부른다.
			∟ extern int a; // "extern + 초기화자 없음"은 "정의 아님"을 의미함
			∟ 정의는 이름이 정확히 무엇을 참조하는지를 명시한다.
			변수의 정의는 해당 변수에 대한 메모리를 할당한다.
		∟ C++가 선언(declaration)과 정의(definition)를 모두 제공하는 이유는 무엇인가? 
			∟ 어떤 대상을 “사용하기 위해 필요한 것”(인터페이스, interface)과 
			그 대상이 “실제로 동작하기 위해 필요한 것”(구현, implementation) 사이의 근본적인 차이를 반영한다.
			∟ 함수 및 변수의 정의는 메모리를 소비한다고 말할 수 있다. 반면, 선언은 메모리를 소비하지 않는다.
			∟ 순환 호출(cyclic call chain)을 가능하게 함

----------------------------------------------------------------------
	∟ Declarations and definitions
		∟ Kinds of declarations
			∟ Variables and constants
			∟ Functions
			∟ Namespaces
			∟ Modules
			∟ Types: classes and enumerations
			∟ Templates
			∟ Concepts

----------------------------------------------------------------------
	∟ Declarations and definitions
		∟ Variable and constant declarations
			∟ 변수 또는 상수의 선언은 이름(name), 타입(type), 그리고 
			선택적으로 초기화자(initializer)를 지정한다.
			∟ 상수(constant)는 변수와 동일한 선언 문법을 사용하지만, 
			타입에 const 또는 constexpr이 포함되며 반드시 초기화자가 필요하다
			∟ 값을 단순히 복사하는 초기화에는 = 문법을, 
			보다 복잡한 객체 생성이 필요한 초기화에는 {} 문법을 사용하는 것을 선호한다.

----------------------------------------------------------------------
	∟ Declarations and definitions
		∟ Default initialization
			∟ 문자열(string)과 벡터(vector)에 대해 초기화자를 명시하지 않는 경우
				∟ 명시적인 초기화자가 없을 경우에도 기본값으로 초기화되도록 정의되어 있기 때문이다.
				∟ “변수는 사용 전에 반드시 초기화되어야 한다”는 규칙의 예외가 아니다.
				∟ 기본 초기화를 보장하는 메커니즘은 기본 생성자(default constructor)라 불린다.
				∟ 
----------------------------------------------------------------------
	∟ Scope 
		∟ 프로그램 텍스트의 특정 영역을 의미한다. 
		∟  “in scope” 상태
			∟ 이름(name)은 특정 범위 내에서 선언되며, 
			그 선언 지점부터 해당 범위의 끝까지 유효하다.
		∟ 사용 가능 범위를 제어하기 위해 사용하는 범위의 종류
			∟ Global scope
			∟ Module scope 
			∟ Namespace scope
			∟ Class scope
			∟ Local scope
			∟ Statement scope
		∟ ___프로그램을 관리 가능하게 유지하려면, 대부분의 이름은 지역적이어야 한다.___
		∟ 함수 중첩은 C++에서 허용되지 않는다. 대신 람다(lambda)를 사용하라
		∟ ___“단순하게 유지하라(Keep it simple)!”___

----------------------------------------------------------------------
	∟ Function call and return 
		∟ Function 동작과 계산을 표현하는 방식이다. 
			∟ 
		∟ Declaring arguments and return type 
			∟ 함수 선언은 반환 타입(return type), 
						 함수 이름(name), 
						 괄호 안의 매개변수(parameter) 목록으로 구성된다. 
			∟ 정의가 아닌 선언은 세미콜론만 포함한다.
			∟ 매개변수는 종종 형식 인자(formal argument)라고도 불린다.
			∟ 함수가 값을 반환하지 않도록 하려면, 반환 타입으로 void를 지정한다.
				∟ “값을 반환하지 않음” 또는 “아무것도 반환하지 않음”을 의미한다.
			∟ 선언과 정의 모두에서 매개변수에 이름을 붙일 수도 있고 생략할 수도 있다.
			∟ ex. hint.cpp

----------------------------------------------------------------------
	∟ Function call and return 
		∟ Returning a value
			∟ 함수에서 값을 반환하려면 return 문을 사용한다.
			∟ 값 반환은 일종의 **초기화(initialization)**로 간주될 수 있다.
				∟ 값을 반환하도록 선언된 함수는 반드시 값을 반환해야 한다.
				함수의 끝까지 도달하면서 아무 값도 반환하지 않는 
				경우(이를 fall through라고 한다)는 오류에 해당한다.
			∟ void 반환형을 가진 함수에서는 **함수 끝까지 실행되는 것(fall through)**이 허용되며,
			이는 return; 문과 동일하게 간주된다.
----------------------------------------------------------------------
	∟ Function call and return 
		∟ Pass-by-value
			∟ 값에 의한 전달
				∟ 인자로 사용된 값의 복사본을 함수에 넘겨주는 것이다. 
			∟ 함수가 외부 상태를 변경하지 않고 독립적으로 동작하도록 보장하는 데 유용하다.
			∟ ex. Pass_by_value.cpp
----------------------------------------------------------------------
	∟ Function call and return 
		∟ Pass-by-const-reference
			∟ “우리는 왜 복사를 하고 있는가?” 
				∟ 복사본이 아니라 “주소”를 전달할 수 있는 방법이 필요하다. 
				이러한 “주소”는 참조(reference)라고 하며 &는 “참조(reference)”를 의미한다.
			∟ const는 함수가 인자를 실수로 수정하지 못하도록 방지한다.
			∟ ex. pass_by_const_reference_08_print.cpp
			∟ 
----------------------------------------------------------------------
	∟ Function call and return 
		∟ Pass-by-reference
			∟ 함수인자를 수정해야 하는 경우. ex. pass_by_reference08.cpp
			∟ 참조를 기술적으로 살펴보면
			
			```
			int x = 7;
			int &y = x;
			```
			y를 사용하는 것이 x를 사용하는 것과 같다.
			
			```
			vector<vector<double>>v;
			```

----------------------------------------------------------------------
	∟ Function call and return 
		∟ Pass-by-value vs. pass-by-reference
			∟ 언제 사용해야 할까?
				∟ 실용적인 규칙
					∟ 1. 매우작은 객체는 pass-by-value를 사용하라.
					∟ 2. 수정이 필요없는 큰 객체는 pass-by-const-reference를 사용하라.
					∟ 3. 객체를 참조인자로 수정하기보다는 결과를 반환하라.
					∟ 4. pass-by-reference는 꼭 필요한 경우 사용하라.
					∟ ex. pass_by_rule08.cpp
					∟ 복사를 피하기 위해 참조를 사용하는 경우에는 const 참조를 사용한다. 
					따라서 const가 아닌 참조 인자가 보이면, 해당 함수가 인자의 값을 
					변경할 것이라고 가정해야 한다.
----------------------------------------------------------------------
	∟ Function call and return 
		∟ Argument checking and conversion
			∟ 함수에 인자를 전달하는 행위는, 호출 시 지정된 실제 인자(actual argument)를 
			함수의 형식 인자(formal argument)로 초기화하는 것이다.
			∟ 
			∟ 

----------------------------------------------------------------------
	∟ Function call and return 
		∟ Function call implementation
			∟ 컴퓨터는 실제로 함수 호출을 어떻게 수행할까
				∟ Chapter 5, 6에 대한 복습 진행 ㄱ
			∟ 언어 구현은 function activation record라 불리는 데이터 구조를 따로 마련한다.
			이 구조에는 해당 함수의 모든 인자와 지역변수의 복사본이 포함된다.
			활성화 레코드는 함수가 호출될때마다 생성되며 함수가 종료되면 제거된다.
			∟ recursive function(재귀 함수), 함수가 직접 또는 간접적으로 자신을 호출하는 경우.
			∟ 함수는 호출될때마다 활성화 레코드의 스택(stack), 하나의 레코드를 추가하며 성장한다.
												∟ last in, first out 
			∟ 
----------------------------------------------------------------------
	∟ Function call and return 
		∟ Compile-time computation
			∟ 계산을 컴파일 시점에 수행하고 싶을때
						∟ 계산은 런타임에서 이뤄진다.(설정이 없다면)
						∟ constant expression (상수 표현식)
							∟ constexpr로 선언
							∟ ex. comfile_time_computation07.cpp
			∟ 컴파일 시점에만 평가되길 원한다면 consteval로 선언


----------------------------------------------------------------------
	∟ Function call and return 
		∟ Suffix return type
			∟ auto 함수이름(매개변수 목록) -> 반환 타입;
			∟ 인자 타입에 따라 반환 타입이 결정되는 경우에는 이 표기법이 필수적일 수 있으며
			함수이름이 정렬되는 시각적 장점이 있다.

----------------------------------------------------------------------
	∟ Order of evaluation 
		∟ Expression evaluation
						∟ 즉, 실행(execution)
		∟ 평가는 언어규칙에 따라 statement를 순차적으로 처리하는 방식으로 진행된다.
											∟ thread of execution
		∟ Expression Evaluation
			∟ sub-Expression의 평가순서는 Optimizer를 만족시키기 위한 규칙에 따라 결정된다.
				∟ 표현식 내에서 변수의 값을 변경하는 경우, 
				해당 변수를 같은 표현식에서 두번 이상 일거나 사용 말자.
			∟ 대입연산자(=,+=)은 right to left로 평가된다.
			∟ &&연산자에서는 왼쪽 피연산자가 true일 경우에만 오른쪽 피연산자가 평가된다.
			∟ ||연산자에서는 오른쪽 피연산자가 false일 경우에만 오른쪽 피연산자가 평가된다.
		∟ short-circuit evaluation
----------------------------------------------------------------------
	∟ Order of evaluation 
		∟ Global initialization
			∟ Global variable(전역 변수)는 극히 제한된 상황을 제외하고는 사용하는 것이 바람직하지 않다.
			∟ static local variable(정적 지역 변수), 비용이 큰 함수라면, 객체를 한번만 생성하고
			재사용하고 싶을 것이다. 이를 위해 static local variable을 사용할 수 있다.
----------------------------------------------------------------------
	∟ Namespaces 
		∟ 클래스, 함수, 데이터, 타입을 그룹화하기 위한 언어적 메커니즘이 바로 네임스페이스(namespace)이다.	
		∟  모두 전역 네임스페이스(global namespace)를 사용한다면, 이름충돌이 발생할 것이다.
			∟ ex. 사용 예제 Graph_lib::Text TextLib::Text
----------------------------------------------------------------------
	∟ Namespaces 
		∟ using-declarations and using-directives
		∟ 완전한 이름(fully qualified name)을 계속 작성하는 것은 번거롭다.
		매번 “정식” 이름으로 참조하고 싶지는 않다.
		때로는 네임스페이스의 이름들을 더 강력하게 축약해서 사용하고 싶을 때가 있다.
		∟ “이 범위(scope)에서 이름을 찾을 수 없다면 
		std 네임스페이스에서 찾아라”는 의미를 전달하고 싶을 때는 
		using 지시문(using directive) 을 사용한다.
		∟ 매우 잘 알려진 네임스페이스를 제외하고는 using 지시문을 사용하는 것을 피하는 것이 좋다.
		using 지시문을 과도하게 사용하면 이름이 어디서 왔는지 추적하기 어려워지고, 
		결국 이름 충돌(name clash)이 발생할 수 있다.
----------------------------------------------------------------------
	∟ Modules and headers 
		∟ 선언(declaration)과 정의(definition)을 어떻게 관리할 것인가?
		헤더(header): 파일 단위로 프로그램을 구성하기 위한 오래되고 확립된 메커니즘
		모듈(module): 모듈성을 직접 표현할 수 있는 현대적인 언어 메커니즘
		∟ Modules 
			∟ ex. Tokenstream.ixx
			∟ export로 표시된 정의는 모듈을 가져오는 사용자에게 공개된다. 
			∟ 모듈은 필요한 기능만을 명확하게 내보내고(import/export), 
			내부 구현은 숨길 수 있는 구조를 제공한다. 
			이는 모듈성이 뛰어난 프로그램을 작성하고, 
			컴파일 속도를 향상시키며, 
			코드의 의존성을 명확하게 관리하는 데 매우 유용하다.
			∟ 모듈을 컴파일하고 사용하는 방법은 사용하는 C++ 구현체에 따라 달라지며, 
			이에 대한 정보는 cppreference.com에서 확인할 수 있다.
			∟ 모듈의 여러 이점
			빠른 컴파일 속도와 관심사의 명확한 분리(isolation of concerns) 를 지원한다. 

----------------------------------------------------------------------
	∟ Modules and headers 
		∟ Header files 



[1] 선언(declaration)과 정의(definition)의 차이는 무엇인가?
<details><summary></summary>

</details>

[2] 함수 선언과 함수 정의는 문법적으로 어떻게 구분되는가?
<details><summary></summary>

</details>

[3] 변수 선언과 변수 정의는 문법적으로 어떻게 구분되는가?
<details><summary></summary>

</details>

[4] 왜 제5장의 계산기 프로그램에서 함수를 사용하기 전에 반드시 하나 이상의 선언이 필요했는가?
<details><summary></summary>

</details>

[5] int a;는 정의인가, 아니면 단순한 선언인가?
<details><summary></summary>

</details>

[6] 변수를 선언할 때 초기화하는 것이 왜 바람직한가?
<details><summary></summary>

</details>

[7] 함수 선언은 어떤 요소로 구성될 수 있는가?
<details><summary></summary>

</details>

[8] 접미 반환 타입 표기법(suffix return type notation)이란 무엇이며, 이를 사용하는 이유는 무엇인가?
<details><summary></summary>

</details>

[9] 들여쓰기(indentation)는 어떤 역할을 하는가?
<details><summary></summary>

</details>

[10] 선언의 범위(scope)는 무엇인가?
<details><summary></summary>

</details>

[11] 범위의 종류에는 어떤 것이 있는가? 각각의 예를 들어 설명하라.
<details><summary></summary>

</details>

[12] 클래스 범위(class scope)와 지역 범위(local scope)의 차이는 무엇인가?
<details><summary></summary>

</details>

[13] 프로그래머가 전역 변수(global variable)의 수를 최소화해야 하는 이유는 무엇인가?
<details><summary></summary>

</details>

[14] 값에 의한 전달(pass-by-value)과 참조에 의한 전달(pass-by-reference)의 차이는 무엇인가?
<details><summary></summary>

</details>

[15] 참조에 의한 전달(pass-by-reference)과 const 참조에 의한 전달(pass-by-const-reference)의 차이는 무엇인가?
<details><summary></summary>

</details>

[16] swap()이란 무엇인가?
<details><summary></summary>

</details>

[17] vector<double>을 값에 의한 인자(by-value parameter)로 사용하는 함수를 정의하는 것이 적절한가?
<details><summary></summary>

</details>

[18] 평가 순서가 정의되지 않은(undefined order of evaluation) 예를 하나 들고, 그것이 문제가 될 수 있는 이유를 설명하라.
<details><summary></summary>

</details>

[19] x && y와 x || y는 각각 무엇을 의미하는가?
<details><summary></summary>

</details>

[20] 다음 중 표준 C++에 부합하는 것은 무엇인가: 함수 내부의 함수, 클래스 내부의 함수, 클래스 내부의 클래스, 함수 내부의 클래스?
<details><summary></summary>

</details>

[21] 활성화 레코드(activation record)에는 어떤 정보가 포함되는가?
<details><summary></summary>

</details>

[22] 호출 스택(call stack)이란 무엇이며, 왜 필요한가?
<details><summary></summary>

</details>

[23] 네임스페이스(namespace)의 목적은 무엇인가?
<details><summary></summary>

</details>

[24] 네임스페이스와 클래스(class)의 차이는 무엇인가?
<details><summary></summary>

</details>

[25] using 선언(using declaration)이란 무엇인가?
<details><summary></summary>

</details>

[26] 헤더 파일에서 using 지시문(using directive)을 피해야 하는 이유는 무엇인가?
<details><summary></summary>

</details>

[27] namespace std란 무엇인가?
<details><summary></summary>

</details>

