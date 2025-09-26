### “프로그래밍은 이해다(Programming is understanding)”라는 말의 의미는 무엇인가?
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
17, 4, 5, 1은 모두 부동소수점 리터럴이며, Number -> Primary로 이어진다. 
<br>
먼저 괄호를 발견하는데 Expression -> Term -> Primary를 통해 ()에 대한 평가를 한다.
<br>
이후 괄호가 닫혀있는지 확인후 다시 Expression에서 17+4에 대한 덧셈을 진행하고 lval에 
값을 할당한다.
<br>
/을 Expression -> Term에서 lval과 수행하게 되는데 (5-1)중 ()를 발견해서 다시
<br>
Expression -> Term -> Primary를 통해 ()에 대한 평가를 한다.
<br>
5-1을 Expression에서 진행한 뒤 rval에 할당한다. 
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

