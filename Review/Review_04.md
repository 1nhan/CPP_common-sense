네 가지 주요 오류 유형을 이름 짓고 간단히 정의하시오.
<details><summary></summary>

</details>

학생 프로그램에서 무시할 수 있는 오류의 종류는 무엇인가?
<details><summary></summary>

</details>

모든 완성된 프로젝트가 제공해야 하는 보장은 무엇인가?
<details><summary></summary>

</details>

프로그램의 오류를 제거하고 적절한 소프트웨어를 만들기 위해 취할 수 있는 세 가지 접근법을 나열하시오.
<details><summary></summary>

</details>

우리가 디버깅(debugging)을 싫어하는 이유는 무엇인가?
<details><summary></summary>

</details>

문법 오류(Syntax error)란 무엇인가? 다섯 가지 예를 제시하시오.
<details><summary></summary>

</details>

타입 오류(Type error)란 무엇인가? 다섯 가지 예를 제시하시오.
<details><summary></summary>

</details>

링커 오류(Linker error)란 무엇인가? 세 가지 예를 제시하시오.
<details><summary></summary>

</details>

논리 오류(Logic error)란 무엇인가? 세 가지 예를 제시하시오.
<details><summary></summary>

</details>

본문에서 논의된 프로그램 오류의 잠재적 원인 네 가지를 나열하시오.
<details><summary></summary>

</details>

결과가 타당한지 어떻게 알 수 있는가? 그러한 질문에 답하기 위한 기술은 무엇인가?
<details><summary></summary>

</details>

입력 연산이 성공했는지 어떻게 테스트하는가?
<details><summary></summary>

!cin
</details>

함수 호출자가 런타임 오류(run-time error)를 처리하는 것과 피호출자가 처리하는 것을 비교·대조하시오.
<details><summary></summary>

</details>

예외(exception)를 던지는 것이 오류 값(error value)을 반환하는 것보다 바람직한 경우는 언제인가?
<details><summary></summary>


</details>

오류 값을 반환하는 것이 예외를 던지는 것보다 바람직한 경우는 언제인가?
<details><summary></summary>

</details>

예외가 던져지고 잡히는 과정은 어떻게 되는가?
<details><summary></summary>

```
#include <stdexcept>
#include <string>

void error(const std::string& msg) {
    throw std::runtime_error(msg);
}

int main()
try {
    error("Something went wrong!");
} catch (const std::runtime_error& e) {
    std::cerr << "Caught error: " << e.what() << '\n';
    // 복구 로직 or 안전 종료
}

```
</details>

벡터(vector) v에서 v[v.size()]가 범위 오류(range error)인 이유는 무엇이며, 이를 호출하면 어떤 결과가 발생하는가?
<details><summary></summary>

```
v_elements ex. vector<int>v_elements={1,2,3,4}
v_elements.size()=4;
v_elements[0] = 1;
v_elements[3] = 4;
v_elements[4] = ;//out_of_ranges access <-range error
_
```

</details>

단언문(Assertion)이란 무엇인가?
<details><summary></summary>

</details>

사전 조건(Precondition)과 사후 조건(Postcondition)을 정의하고, 반복문이 필요한 계산을 예시로 제시하시오. 단, 이 장의 area() 함수는 사용하지 마시오.
<details><summary></summary>

</details>

사전 조건을 테스트하지 않아도 되는 경우는 언제인가?
<details><summary></summary>

</details>

사후 조건을 테스트하지 않아도 되는 경우는 언제인가?
<details><summary></summary>

</details>

프로그램을 디버깅하는 단계는 무엇인가?
<details><summary></summary>

</details>

디버깅 시 주석(commenting)이 도움이 되는 이유는 무엇인가?
<details><summary></summary>

</details>

테스트(testing)와 디버깅(debugging)의 차이는 무엇인가?
<details><summary></summary>

</details>

난수(Random number)란 무엇인가?
<details><summary></summary>

</details>

random_int()와 seed()는 어떻게 사용하는가?
<details><summary></summary>

</details>