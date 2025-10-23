### Review
```

Writing a Program
├─A problem
├─Thinking about the problem
│   ├─stages of development
│   └─strategy
├─Back to the calculator!
│   ├─first attempt
│   ├─tokens
│   ├─implementing tokens
│   └─using tokens
├─Back to the drawing board
│   ├─grammar
│   └─writing a grammar├─Turning a grammar into code
│   ├─implementing grammar rules
│   ├─expressions
│   ├─terms
│   └─primary expressions
├─Trying the first version
├─Trying the second version
├─Token streams
│   ├─implement Token_stream
│   ├─reading tokens
│   └─reading numbers
└─Program structure
```
--------------------------------------------------------------------------------------------------------------
```
Writing a Program
├─A problem
    ├─ 프로그램을 작성하는 일은 문제(problem)에서 시작된다.
    │                           └─ 그 문제를 정확히 이해하는 것이 좋은 프로그램을 만드는 데 핵심이다.
    ├─ “사용자가 입력한 수식(expression)에 대해 컴퓨터가 일반적인 산술 연산(arithmetic)을 수행하게 하자.”
    └─ simple calculator를 작성하고자 한다.
```
--------------------------------------------------------------------------------------------------------------
```
Writing a Program
├─Thinking about the problem
    ├─ 어떻게 시작해야 할까?
    ├─ 무엇을 해야 하는지, 어떻게 상호작용하고 싶은지, 어떻게 구현할 수 있을지를 고민하면 된다.
    └─ 작은 계산기 문제(tiny calculator problem)에 빠르게 적용해볼 것이다.
        └─ 현실감을 높이기 위해, 우리는 프로그램을 여러 버전을 거쳐 점진적으로 발전시키며, 
        각 버전으로 이어지는 사고 과정(reasoning)을 함께 제시할 것이다.
```
--------------------------------------------------------------------------------------------------------------
```
Writing a Program
├─Thinking about the problem
│   ├─stages of development
        ├─  프로그램 개발을 위한 몇 가지 용어(terminology)
            ├─ Analysis (분석)
                └─ 무엇을 해야 하는지를 파악하고, 현재의 이해를 바탕으로 설명(description)을 작성한다.
                                                                        └─ 요구사항(requirements) 또는 
                                                                        명세(specification)라고 불린다. 
            ├─ Design (설계)
                └─시스템의 전체 구조를 구성하고, 구현이 어떤 구성 요소(parts)를 가져야 하는지, 그리고 
                그 구성 요소들이 어떻게 상호작용(communicate)해야 하는지를 결정한다. 
            └─ Implementation (구현)
                └─ 코드를 작성하고, 디버깅(debug), 테스트(test)를 통해 프로그램이 의도한 대로 동작하는지 확인한다.

```
--------------------------------------------------------------------------------------------------------------
```
Writing a Program
├─Thinking about the problem
│   ├─Strategy
        ├─ 해결해야 할 문제는 무엇인가?
            ├─가장 먼저 달성하고자 하는 목표를 명확히 하는 것이다.
            ├─사용자(user)의 관점을 취해야 한다.
                └─무엇을 해야 하는가에 대해 질문해야 한다.
            └─
        ├─ 프로그램을 관리 가능한 부분으로 나누어라
            ├─ 도움이 될 수 있는 도구나 라이브러리 등을 알고 있는가?
            ├─ 라이브러리가 작업에 적합하고 품질이 충분한지 어떻게 알 수 있는가?
            ├─ 표현식(expression), 문(statement), 타입(type)만으로 대형 프로그램을 직접 만들려고 해서는 안 된다.
            ├─ 부품을 설계하고 구현하는 것이 핵심 주제이며, 소프트웨어 개발의 핵심이기도 하다.
                        └─ 더 많은 예시와 그 설계 근거(design rationale)를 함께 제시한다.
        ├─ 문제의 핵심 부분을 해결하는 작고 제한된 버전의 프로그램을 먼저 만들어라
            ├─ 먼저 작고 제한된 버전(small, limited version)을 만든다.
                ├─ 이해, 아이디어, 도구의 문제점을 드러내기 위해
                └─ 문제 설명의 세부사항을 조정할 필요가 있는지 확인하기 위해
            └─ 제한된 초기 버전은 실험을 목적으로 한 것이며, 프로토타입(prototype)이라 불리기도 한다.
        └─ 초기 버전의 일부를 활용하여 전체 규모의 해결책(full-scale solution)을 구축하라
            └─ 프로그램을 점진적으로 성장시키는 것, 
            검증되지 않은 아이디어가 기적적으로 작동하기를 바라는 것은 바람직하지 않다.
```
--------------------------------------------------------------------------------------------------------------
```
Writing a Program
├─Back to the calculator!
│   ├─ 키보드와 콘솔 창(console window)만 사용
        └─ 키보드로부터 수식(expression)을 입력받아 수식을 평가(evaluate)하고 결과값을 화면에 출력한다.
    ├─ use case를 초기에 스케치해보는 것은 매우 중요하다.
        ├─design와 analysis을 논의할 때, use case라 불린다,
        프로그램이 최소한 무엇을 해야 하는지에 대한  실질적인 정의(definition)를 제공해준다.
        └─의사 코드(pseudo code)
            └─설계 초기 단계에서 아직 정확한 표기법(notation)을 확신하지 못할 때 의사 코드를 자주 사용한다.
```
--------------------------------------------------------------------------------------------------------------
```
Writing a Program
├─Back to the calculator!
│   ├─first attempt
        └─연산 순서(order of operations)를 잘못 처리하고 있다.
            └─ ex. 1+2*3은 (1+2)*3 = 9? 
            └─ 또한, 여러 상수에 대해 값을 검사할 때는  if 문보다 switch 문이 더 적합하다.

```
--------------------------------------------------------------------------------------------------------------
```
Writing a Program
├─Back to the calculator!
│   ├─tokens
        ├─ tokenization
            └─ 입력된 문자들을 먼저 읽고, 이를 의미 있는 단위인 토큰(token)으로 분리하는 것이다.
        ├─ 하나의 단위로 간주하는 어떤 개념을 나타내는 문자들의 연속이다.
            └─ C++ 컴파일러가 소스 코드를 처리하는 방식이기도 하다. 
        ├─ 코드에서 (종류, 값) 쌍을 어떻게 표현할 수 있을까?
            └─ 문제를 해결하기 위한 명확하고 일반적인 방법은 각 토큰을 (종류, 값) 쌍으로 표현하는 것이다.
        ├─ 왜 타입을 정의하는가?
            └─ 필요한 데이터를 저장하고, 그 데이터에 대해 유용한 연산을 제공하기 때문이다.
        └─ C++은 대부분의 현대 언어들과 마찬가지로 사용자 정의 타입(User-defined types)을 지원한다.
```
--------------------------------------------------------------------------------------------------------------
```
Writing a Program
├─Back to the calculator!
│   ├─implementing tokens
        ├─ 어떤 형태를 가져야 할까?
        ├─ 원하는 타입은 어떤 모습이어야 할까?
            └─연산자(operator)를 표현할 수 있어야 하며, 
            숫자 값(numeric value)도 표현할 수 있어야 한다.
        ├─ Token은 C++의 사용자 정의 타입(user-defined type)의 예시이다.
            └─ 멤버에 접근할 때는 다음과 같은 표기법을 사용한다:
            객체_이름 . 멤버_이름
            └─ 복사할 수 있다.
            └─ 초기화(생성)할 수 있다.
                └─ ex. Token t1 {'+'}; Token t2 {'8', 11.5};
```
--------------------------------------------------------------------------------------------------------------
```
Writing a Program
├─Back to the calculator!
│   └─using tokens
        └─ Token을 어떻게 사용할 수 있을까?
            └─ 입력을 Token 객체의 벡터(vector)에 저장하는 방식이 가능하다.
                                    └─ ex. vector<Token> tok;
        └─             
```
--------------------------------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------------------------------
Writing a Program
├─Back to the drawing board
    └─ 설계 원칙
        └─ 초기에 기능을 과도하게 늘리면 프로젝트 규모가 커지고, 초보자라면 감당하기 어렵다.
        └─ feature creep을 피하고 먼저 최소 기능만 구현한 단순 버전을 만든ㄷ 뒤 점진적으로 확장하는 것이 바람직하다.
    └─ 프로그래머의 접근법
        └─ 토큰화, 데이터표현, 연산자 우선순위는 서로 연결되어 있다.
        └─ 계산기 문제는 오래된 고전 문제라서 표준적인 해결책이 이미 존재한다.
        └─ 경험 있는 프로그래머는 무작정 새로 만들기보다 기존 문헌이나 동료의 경험을 참고한다.
--------------------------------------------------------------------------------------------------------------
Writing a Program
├─Back to the drawing board
│   ├─grammars
        └─표현식 해석의 표준적 방법
            └─입력된 문자열을 token으로 분리한다.
                └─ ex. 45+11.5/7 ->[45][+][11.5][/][7]
        └─토큰 이후 단계
            └─단순히 토큰화만으로는 부족하다.
            └─연산자 우선순위와 괄호 규칙을 반영해야 한다.
        └─문법 정의
            └─expression:term, expression+term, expression-term
            └─term:primary,term*primary,term/primary    
            └─primary:number '('expression')'
        └─문법의 역할
            └─직관적으로 아는 계산 규칙을 정확한 규칙으로 표현
            └─컴퓨터는 문법을 따라 파싱을 수행한다.
            └─파서를 직접 생성하는 파서 생성기가 있다.
        └─파싱 방법
            └─
            └─
            └─
        └─예시
            └─
            └─
        └─그리고.
            └─
            └─
--------------------------------------------------------------------------------------------------------------
Writing a Program
│   └─writing a grammar
--------------------------------------------------------------------------------------------------------------
Writing a Program
├─Back to the drawing board
--------------------------------------------------------------------------------------------------------------
Writing a Program
├─Turning a grammar into code
    └─expression:first try
        └─
        ```
            auto expression()->double
            {
                double left = expression(); //infinity recursion이 일어남. 
                Token t = get_token();      //다음 토큰을 가져옴. 
                switch(t.kind){
                case '+': 
                    return left += term();
                case '-':
                    return left -= term();
                default:
                    return left;
                }_
            }
        ```
--------------------------------------------------------------------------------------------------------------
    └─expression:second try
        └─
        ```
            auto expression() -> double
            {
            double left = term();       
            Token t = get_token();      
            while (t.kind == '+' || t.kind == '−') { 
                if (t.kind == '+')
                    left += term();     
                else
                    left −= term();     
                t = get_token();
            }
            return left;
            }
                └─ +, -에 대해 계속 확인하기 위해 반복문을 도입.
                get_token()을 두번 호출하고 +,-를 두번 검사하는 중복의 발생.
                중복은 코드의 논리를 흐릴 수 있으므로, 제거한 개선된 버전이 필요._
        ```
--------------------------------------------------------------------------------------------------------------
    └─expression:third try
        └─
        ```
            auto expression() -> double
            {
                double left = term();
                Token t = get_token();
                while(true){
                    switch(t.kind){
                    case '+':
                        left += term();
                        t= get_token();
                        break;
                    case '-':
                        left += term();
                        t= get_token();
                        break;
                    default:
                        return left;
                    }
            }

        ```
--------------------------------------------------------------------------------------------------------------
Writing a Program
├─Turning a grammar into code
│   ├─implementing grammar rules
--------------------------------------------------------------------------------------------------------------
Writing a Program
├─Turning a grammar into code
│   ├─expressions
--------------------------------------------------------------------------------------------------------------
Writing a Program
├─Turning a grammar into code
│   ├─terms
--------------------------------------------------------------------------------------------------------------
Writing a Program
├─Turning a grammar into code
│   └─primary expressions
--------------------------------------------------------------------------------------------------------------
Writing a Program
├─Trying the first version
--------------------------------------------------------------------------------------------------------------
Writing a Program
├─Trying the second version
--------------------------------------------------------------------------------------------------------------
Writing a Program
├─Token streams
--------------------------------------------------------------------------------------------------------------
Writing a Program
├─Token streams
│   ├─implement Token_stream
--------------------------------------------------------------------------------------------------------------
Writing a Program
├─Token streams
│   ├─reading tokens
--------------------------------------------------------------------------------------------------------------
Writing a Program
├─Token streams
│   └─reading numbers
--------------------------------------------------------------------------------------------------------------
Writing a Program
└─Program structure
--------------------------------------------------------------------------------------------------------------







“프로그래밍은 이해다(Programming is understanding)”라는 말의 의미는 무엇인가?
<details><summary></summary>

프로그램을 작성한다는 것은 우리가 무엇을 하고 싶은지, 
그리고 그것을 어떻게 표현할지를 점차적으로 정제(refine)해 나가는 과정이다.
<br>

처음의 모호한 아이디어(vague idea)로부터 시작하여 
다음과 같은 단계들을 거쳐 하나의 프로그램을 개발해 나갈 것이다:
<br>
<br>
1. 분석(analysis)
<br>
2. 설계(design)
<br>
3. 구현(implementation)
<br>
4. 테스트(testing)
<br>
5. 재설계(redesign)
<br>
6. 재구현(re-implementation)
<br>

</details>

### 이 장에서는 계산기 프로그램의 생성 과정을 설명한다. 계산기가 수행할 수 있어야 하는 기능에 대해 간단히 분석하라.
<details><summary></summary>

사용자가 키보드와 콘솔 창(console window)만 사용하여 입력한 수식(expression)에 대해 컴퓨터가 일반적인 산술 연산(arithmetic)

연산, 연산순서, 
<br>


</details>

### 문제를 더 작고 관리 가능한 단위로 나누는 방법은 무엇인가?
<details><summary></summary>

1. 라이브러리를 활용할 것
<br>
2. 재사용 가능한 요소를 식별할 것
<br>
3. 예제 프로그램으로 테스트해 볼 것
<br>
4. 협업과 경험을 활용할 것
<br>
5. 언어의 기본 요소만으로 전체를 만들지 않기
<br>
6. 비유적 접근 (장난감 설계)
<br>

</details>

### 프로그램의 제한된 소규모 버전을 먼저 만드는 것이 왜 좋은 아이디어인가?
<details><summary></summary>

제한된 소규모 버전은 학습, 실험, 피드백 수집을 위한 도구이다.
이를 통해 문제 이해를 심화하고, 설계의 오류를 조기에 발견하며, 
점진적으로 품질을 개선할 수 있다. 결국 이는 좋은 프로그램을 만들기 위한 안전하고 
효과적인 접근 방식이다.

</details>

### 기능 증가(feature creep)가 왜 바람직하지 않은가?
<details><summary></summary>

초기 프로젝트의 규모는 거의 두 배로 증가했을 것이다. 
그 결과 초기 버전을 실행 가능하게 만드는 데 필요한 시간도 두 배 이상 늘어났을 것이다.
프로젝트는 인내심의 한계를 넘었을 가능성이 높다.
<br>
먼저 필수 기능만을 구현한 단순한 버전을 구축해야 한다. 
일단 실행 가능한 무언가를 만들고 나면, 그 이후에 더 야심찬 기능을 추가할 수 있다. 
프로그램은 한 번에 완성하는 것보다 단계적으로 구축하는 것이 훨씬 수월하다.


</details>

### 소프트웨어 개발의 세 가지 주요 단계는 무엇인가?
<details><summary></summary>

Analysis (분석): 무엇을 해야 하는지를 파악하고, 
현재의 이해를 바탕으로 설명(description)을 작성한다. 
이러한 설명은 요구사항(requirements) 또는 명세(specification)라고 불린다. 
이러한 요구사항을 어떻게 개발하고 문서화하는지는 이 책의 범위를 벗어나지만, 
문제의 규모가 커질수록 그 중요성은 점점 더 커진다.
<br>
Design (설계): 시스템의 전체 구조를 구성하고, 
구현이 어떤 구성 요소(parts)를 가져야 하는지, 
그리고 그 구성 요소들이 어떻게 상호작용(communicate)해야 하는지를 결정한다. 
설계의 일환으로, 어떤 도구들(예: 라이브러리(library))이 프로그램 구조화에 
도움이 될 수 있을지도 고려한다.
<br>
Implementation (구현): 코드를 작성하고, 디버깅(debug), 
테스트(test)를 통해 프로그램이 의도한 대로 동작하는지 확인한다.

</details>

### “사용 사례(use case)”란 무엇인가?
<details><summary></summary>

프로그램이 최소한 무엇을 해야 하는지에 대한  실질적인 정의(definition)를 제공해준다.
설계(design)와 분석(analysis)을 논의할 때, use case라 불린다.

</details>

### 테스트의 목적은 무엇인가?
<details><summary></summary>


</details>

### 이 장의 개요에 따라 Term, Expression, Number, Primary의 차이를 설명하라.
<details><summary></summary>

```
Expression:
    Term
    Expression "+" Term // 덧셈
    Expression "−" Term // 뺄셈

Term:
    Primary
    Term "*" Primary // 곱셈
    Term "/" Primary // 나눗셈
    Term "%" Primary // 나머지(modulo)

Primary:
    Number
    "(" Expression ")" // 괄호를 통한 그룹화

Number:
    floating-point-literal

```

Number는 부동소수점 리터럴(floating-point-literal)이다.
<br>
Primary는 Number이거나, '('로 시작하여 Expression을 포함하고 ')'로 끝나는 구조이다.
<br>
Expression과 Term에 대한 규칙도 유사하며, 각각 규칙과 토큰을 기반으로 정의된다.

</details>

### 이 장에서 입력을 Term, Expression, Primary, Number로 분해하였다. (17+4)/(5−1)에 대해 동일한 분석을 수행하라.
<details><summary></summary>

(17+4)/(5−1) 
<br>
먼저 Expression은 Term을 찾는다. Term은 Primary을 찾고 Primary는 Number를 찾는다.
<br>
하지만 (는 Primary이고 이후 다시 
<br>
<br>
<br>
<br>

</details>

### 프로그램에 number()라는 함수가 없는 이유는 무엇인가?
<details><summary></summary>


</details>

### 토큰(token)이란 무엇인가?
<details><summary></summary>

토큰(token)이란 숫자나 연산자(operator)처럼 우리가 하나의 단위로 간주하는 의미 있는 
문자들의 집합이다.
</details>

### 문법(grammar)이란 무엇이며, 문법 규칙(grammar rule)이란 무엇인가?
<details><summary></summary>


</details>

### 클래스(class)란 무엇이며, 클래스는 어떤 용도로 사용하는가?
<details><summary></summary>


</details>

### 클래스의 멤버에 기본값을 제공하는 방법은 무엇인가?
<details><summary></summary>


</details>

### expression() 함수에서 switch 문의 기본(default) 처리에서 토큰을 되돌려 넣는 이유는 무엇인가?
<details><summary></summary>


</details>

### “선행 읽기(look-ahead)”란 무엇인가?
<details><summary></summary>


</details>

### putback() 함수는 무엇을 하며, 왜 유용한가?
<details><summary></summary>


</details>

### % 연산(나머지 연산, modulus)을 term() 함수에서 구현하기 어려운 이유는 무엇인가?
<details><summary></summary>

</details>

### Token 클래스의 두 데이터 멤버는 어떤 용도로 사용되는가?
<details><summary></summary>


</details>

### 클래스의 멤버를 private과 public으로 나누는 이유는 무엇인가?
<details><summary></summary>

</details>

### Token_stream 클래스에서 버퍼에 토큰이 있는 상태에서 get() 함수가 호출되면 어떤 일이 발생하는가?
<details><summary></summary>

</details>

### Token_stream 클래스의 get() 함수에서 ';'와 'q' 문자가 switch 문에 추가된 이유는 무엇인가?
<details><summary></summary>
';'은 print.
'q'는 quit기능을 위해 추가되었다.
</details>

### 프로그램 테스트는 언제 시작해야 하는가?
<details><summary></summary>

</details>

### “사용자 정의 타입(user-defined type)”이란 무엇이며, 이를 사용하는 이유는 무엇인가?
<details><summary></summary>

</details>

### C++의 사용자 정의 타입에 대한 인터페이스(interface)란 무엇인가?
<details><summary></summary>

</details>

### 코드 라이브러리에 의존하는 것이 바람직한 이유는 무엇인가?
<details><summary></summary>

</details>

