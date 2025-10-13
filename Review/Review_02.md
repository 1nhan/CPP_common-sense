### Review

Objects, Types, and Values
 ∟ Input
 ∟ Variables
 ∟ Input and type
 ∟ Operations and operators
 ∟ Assignment and initialization
 ∟ Names
 ∟ Types and objects
 ∟ Type safety
 ∟ Conversions
 ∟ Type deduction: auto

----------------------------------------------------------------------
 ∟ Input(입력)
	∟ 컴퓨터의 메모리 안에 읽은 값을 저장할 공간, 객체(object)라고 부릅니다.
	∟ 사용자가 행동을 취하도록 유도하는 역할, 프롬프트(prompt)라고 합니다.
	∟ 변수에 이름을 부여하고 메모리를 할당하는 문장(statement)을 정의문(definition)이라고 합니다.
	∟ cin은 표준 입력 스트림(standard input stream)을 의미합니다. “see-in”으로 발음됩니다.
	∟ >> 연산자는 “어디로부터 가져온다(get from)”는 의미를 가지며, 
	두 번째 피연산자(여기서는 first_name)는 입력된 값이 저장될 위치를 지정합니다.
	∟ 줄 바꿈(newline)은 컴퓨터의 입력 처리를 시작하게 만드는 신호입니다. 
	∟ literal string
	∟ 불필요한 반복은 오류의 가능성을 높이고, 코드의 가독성과 유지보수성을 떨어뜨립니다.
	∟ "Hello, "처럼 큰따옴표로 감싼 문자열은 리터럴 문자열(literal string)입니다. 
	∟ first_name처럼 따옴표 없이 사용된 이름은 변수의 값(value)을 참조합니다.

----------------------------------------------------------------------
 ∟ Variables
	∟ 데이터를 저장하는 공간을 우리는 객체(object)라고 부릅니다.
										∟객체에 접근하려면 이름(name)이 필요하며, 
										이름이 붙은 객체를 변수(variable)라고 합니다.
	∟ 변수는 특정한 타입(type)을 가지며,	이 타입은 어떤 값을 저장할 수 있는가,
										어떤 연산을 수행할 수 있는가를 결정합니다
	∟ 변수에 저장되는 데이터 항목은 값(value)이라고 합니다.
	∟ 변수를 정의하는 문장은 정의문(definition)이라고 하며, 
	  정의문은 초기값(initial value)을 제공할 수 있고, 제공하는 것이 바람직합니다.
	∟ = 뒤에 오는 값은 초기화자(initializer)라고 부릅니다.
	∟ double은 “배정밀도 부동소수(double-precision floating point)”의 줄임말입니다.
	부동소수점(floating point)은 컴퓨터가 실수(real number) 개념을 근사하여 표현하는 방식입니다.
	∟ 각 타입은 고유한 리터럴 스타일을 가지고 있습니다.

----------------------------------------------------------------------
 ∟ Input and type
	∟ 입력 연산자 >>(“get from”)는 타입에 민감합니다(type-sensitive). 
	∟ 문자열 입력은 공백(whitespace)에서 종료되는 것이 관례이기 때문입니다. 
	공백에는 스페이스(space), 줄 바꿈(newline), 탭(tab) 문자가 포함됩니다. 
	반면, >>는 기본적으로 공백을 무시하고 건너뜁니다. 출력 연산자 <<도 >>처럼 타입에 민감합니다.
	∟ 문자열 입력은 공백(whitespace)에서 종료되는 것이 관례이기 때문입니다. 
	공백에는 스페이스(space), 줄 바꿈(newline), 탭(tab) 문자가 포함됩니다. 
	반면, >>는 기본적으로 공백을 무시하고 건너뜁니다. 
	∟

----------------------------------------------------------------------
 ∟ Operations and operators
	∟
	∟
	∟

----------------------------------------------------------------------
 ∟ Assignment and initialization
	∟
	∟
	∟

----------------------------------------------------------------------
 ∟ Names
	∟
	∟
	∟

----------------------------------------------------------------------
 ∟ Types and objects
	∟
	∟
	∟

----------------------------------------------------------------------
 ∟ Type safety
	∟ 모든 객체는 정의될 때 타입(type)이 부여되며, 그 타입은 절대 변경되지 않습니다.
	∟ 위험한 기법(unsafe techniques)을 피해야 하며, 
	타입 안전성을 확보하기 위한 코딩 규칙(coding rules)을 반드시 따라야 합니다.
	∟ 현대 C++과 정적 분석 도구(static analysis tools)를 활용하면, 
	대부분의 C++ 코드에 대해 타입 안전성을 검증할 수 있습니다.
	∟ 이상적인 방식은, 프로그램이 실행되기 전에 타입 안전성이 
	입증될 수 없는 언어 기능을 사용하지 않는 것입니다. 
	이를 정적 타입 안전성(static type safety)이라고 합니다.
	∟ 초기화되지 않은 변수(uninitialized variable)를 사용하는 것은 타입 안전하지 않습니다.
	항상 변수를 초기화하세요!
	∟ 컴파일러 경고를 활성화하는 방법을 알아보세요. 
	예: -Wall 옵션을 사용하면 대부분의 경고를 표시할 수 있습니다.




----------------------------------------------------------------------
 ∟ Conversions
	∟ 확장 변환(widening) 정보를 보존하는 변환. 예: char->int
	∟ 축소 변환(narrowing) 정보를 손실할 수 있는 변환. 예: int->char
	암시적 축소 변환(implicit narrowing conversion), 축소 변환(narrowing)이란, 
	값이 다른 타입으로 변환되면서 원래 값과 같지 않게 되는 경우를 말합니다.
		∟ 왜 문제가 될까요?
		그 이유는, 축소 변환이 일어나고 있다는 사실을 종종 인지하지 못하기 때문입니다.
		값을 너무 작은 객체(“좁은” 공간)에 넣으려는 시도를 의미합니다.
		정의된 동작(well-defined behavior)이지만, 정보(ex. .7)가 손실된다는 사실을 코드가 알려주지 않습니다.
		∟ 안전한 축소 변환을 위한 도구
		narrow<T>(x) : x를 T로 변환할 때 정보 손실이 없는지 확인
		round_to<int>(x) : x를 반올림하여 int로 변환
		{} 및 ={} 표기법은 복잡한 초기화 또는 축소 방지 목적에 사용합니다.
		
		```cpp
		int x2 = {7.8};   // 오류: ={}도 축소 변환을 허용하지 않음
		int x3 (7.8);     // 축소 변환 발생, 일부 컴파일러는 경고
		```


----------------------------------------------------------------------
 ∟ Type deduction: auto
	∟ 초기화 값(initializer)의 타입을 기반으로 컴파일러가 타입을 유추(deduce)할 수 있습니다
	∟ auto를 사용한 버전은 명시적 타입을 사용한 것과 정확히 동일한 의미를 갖습니다. 
	∟ 긴 타입 이름을 사용할 때나 제네릭 프로그래밍(generic programming)에서는 
	auto의 표기 간결성(notational convenience)이 매우 유용합니다.

----------------------------------------------------------------------





prompt라는 용어는 무엇을 의미하는가?
<details><summary>답변 보기</summary>
프롬프트(prompt)는 사용자에게 입력을 요청하는 메시지입니다. 
예를 들어, 콘솔에서 값을 입력하라는 안내문으로 사용됩니다.
</details>

변수에 값을 입력받기 위해 사용하는 연산자는 무엇인가?
<details><summary>답변 보기</summary>
입력 연산자 `>>`를 사용합니다. 
<br>
예: `cin >> number;`
</details>

객체를 초기화할 수 있는 표기법에는 어떤 것들이 있는가?
<details><summary>답변 보기</summary>
1. 복사 초기화: `ClassName obj = value;`
<br>
2. 직접 초기화: `ClassName obj(value);`
<br>
3. 중괄호 초기화(C++11 이후): `ClassName obj{value};`
</details>

사용자로부터 정수 값을 입력받아 변수 number에 저장하려면, 어떤 두 줄의 코드를 작성할 수 있는가?
<details><summary>답변 보기</summary>
```cpp
int number;
cin >> number;

``
</details>

\n은 무엇이라 불리며, 어떤 역할을 하는가?
<details><summary>답변 보기</summary>
`\n`은 줄바꿈 문자(newline character)로, 
출력 시 다음 줄로 이동하게 합니다.
</details>

문자열(string) 입력은 무엇에 의해 종료되는가?
<details><summary>답변 보기</summary>
`cin`을 사용할 경우 공백(스페이스, 탭, 줄바꿈)에서 종료됩니다. 
`getline()`을 사용하면 줄바꿈 문자에서 종료됩니다.
</details>

정수(integer) 입력은 무엇에 의해 종료되는가?
<details><summary>답변 보기</summary>
공백 문자(스페이스, 탭, 줄바꿈) 또는 입력 스트림의 끝에서 종료됩니다.
</details>


다음 세 줄을 한 줄로 작성하면 어떻게 되는가?
```cpp
cout << "Hello, ";  
cout << first_name;  
cout << "!\n";
```  
<details><summary></summary>

</details>

객체(object)란 무엇인가?
<details><summary>답변 보기</summary>객체는 클래스의 인스턴스로, 
데이터와 기능(메서드)을 함께 포함하는 구조입니다.</details>

리터럴(literal)이란 무엇인가?
<details><summary>답변 보기</summary>리터럴은 코드에 직접 작성된 고정된 값입니다. 
예: `42`, `"Hello"`, `true`</details>

리터럴에는 어떤 종류들이 있는가?
<details><summary>답변 보기</summary>
- 정수 리터럴: `10`, `0xFF`
<br>
- 실수 리터럴: `3.14`, `2.0e5`
<br>
- 문자 리터럴: `'A'`
<br>
- 문자열 리터럴: `"Hello"`
<br>
- 불리언 리터럴: `true`, `false`
</details>

변수(variable)란 무엇인가?
<details><summary>답변 보기</summary>
변수는 값을 저장할 수 있는 이름이 있는 메모리 공간입니다.
</details>

char, int, double의 일반적인 크기는 얼마인가?
<details><summary>답변 보기</summary>
- `char`: 1 byte
<br>
- `int`: 4 bytes
<br>
- `double`: 8 bytes(시스템에 따라 다를 수 있음)
</details>

메모리에서 int나 string과 같은 작은 단위의 크기를 측정할 때 사용하는 기준은 무엇인가?
<details><summary>답변 보기</summary>
바이트(byte)를 기준으로 측정합니다.
</details>

=와 ==의 차이는 무엇인가?
<details><summary>답변 보기</summary>
- `=`: 대입 연산자 (값을 변수에 저장)
<br>
- `==`: 비교 연산자 (두 값이 같은지 비교)
</details>

정의(definition)란 무엇인가?
<details><summary>답변 보기</summary>
정의는 변수나 함수의 실제 메모리 공간을 생성하는 선언입니다.
</details>

초기화(initialization)란 무엇이며, 대입(assignment)과 어떻게 다른가?
<details><summary>답변 보기</summary>
- 초기화: 변수 선언과 동시에 값을 설정
<br>
- 대입: 이미 선언된 변수에 값을 다시 설정
<br>
예: 
<br>
`int x = 5;` (초기화),
<br>
`x = 10;` (대입)
</details>

문자열 연결(string concatenation)이란 무엇이며, C++에서는 어떻게 구현하는가?
<details><summary>답변 보기</summary>
문자열 연결은 두 문자열을 이어붙이는 작업입니다. 
C++에서는 `+` 연산자를 사용합니다. 
<br>
예: 
<br>
`"Hello, " + name`
</details>

int 타입에 적용할 수 있는 연산자(operator)에는 어떤 것들이 있는가?
<details><summary>답변 보기</summary>
- 산술 연산자: `+`, `-`, `*`, `/`, `%`
<br>
- 비교 연산자: `==`, `!=`, `<`, `>`, `<=`, `>=`
<br>
- 대입 연산자: `=`, `+=`, `-=`, `*=`, `/=`, `%=`
<br>
- 증감 연산자: `++`, `--`
</details>


다음 이름 중 C++에서 합법적인 이름은 무엇이며, 그렇지 않은 경우 그 이유는 무엇인가?
이름 목록:
This_little_pig
This_1_is
fine
2_For_1_special
latest thing
George@home
_this_is_ok
MineMineMine
number
correct?
stroustrup.com
$PATH
<details><summary>답변 보기</summary>
합법적인 이름:
<br>
- `This_little_pig`
<br>
- `This_1_is`
<br>
- `fine`
<br>
- `_this_is_ok`
<br>
- `MineMineMine`
<br>
- `number`
<br>
<br>
불법 또는 권장되지 않는 이름:
<br>
- 2_For_1_special: 숫자로 시작함
<br>
- latest thing: 공백 포함
<br>
- George@home: 특수문자 @ 포함
<br>
- correct?: 특수문자 ? 포함
<br>
- stroustrup.com: . 포함
<br>
- $PATH: $는 일부 환경에서 특별한 의미를 가짐
</details>


혼란을 유발할 수 있으므로 사용하지 말아야 할 합법적인 이름 다섯 가지를 제시하시오.
<details><summary>답변 보기</summary>
1. `O0` (숫자 0과 대문자 O 혼동 가능)
<br>
2. `l1` (소문자 l과 숫자 1 혼동 가능)
<br>
3. `temp` (의미가 모호함)
<br>
4. `data` (너무 일반적)
<br>
5. `value` (의미가 불분명함)</details>

좋은 이름을 선택하기 위한 규칙에는 어떤 것들이 있는가?
<details><summary>답변 보기</summary>
- 의미 있는 이름 사용- 일관된 스타일 유지 (예: camelCase 또는 snake_case)
<br>
- 약어 지양- 너무 짧거나 너무 긴 이름 피하기
<br>
- 숫자나 특수문자 사용 자제
</details>

타입 안전성(type safety)이란 무엇이며, 왜 중요한가?
<details><summary>답변 보기</summary>
타입 안전성은 변수나 함수가 예상된 타입으로만 동작하도록 보장하는 개념입니다. 
잘못된 타입 사용을 방지하여 오류를 줄이고 안정성을 높입니다.
</details>

double에서 int로의 변환이 문제가 될 수 있는 이유는 무엇인가?
<details><summary>답변 보기</summary>
소수점 이하가 잘려나가며, 데이터 손실이 발생할 수 있습니다. 
<br>
예: 
<br>
`3.9` → `3`
</details>

한 타입에서 다른 타입으로의 변환이 안전한지 여부를 판단하기 위한 규칙을 정의하시오.
<details><summary>답변 보기</summary>
- 데이터 손실이 없는가?- 변환 후 의미가 유지되는가?
<br>
- 암시적 변환이 가능한가?- 컴파일러 경고 또는 오류가 발생하지 않는가?
</details>

바람직하지 않은 변환을 피하기 위한 방법에는 어떤 것들이 있는가?
<details><summary>답변 보기</summary>
- 명시적 형 변환 사용 (`static_cast`)
<br>
- 타입 체크 강화- 경고 메시지 확인- auto 사용 시 주의
</details


auto의 용도는 무엇인가?
<details><summary></summary>
auto는 C++에서 변수의 타입을 자동으로 추론해주는 키워드입니다. 
컴파일러가 변수에 대입된 값을 보고 적절한 타입을 결정해줍니다.
<br>
주요 용도
<br>
- 복잡한 타입을 간단하게 표현할 수 있음
<br>
- 반복문이나 템플릿 코드에서 가독성 향상
<br>
- 타입 변경 시 코드 수정 최소화
</details>
