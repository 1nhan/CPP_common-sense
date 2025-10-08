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
