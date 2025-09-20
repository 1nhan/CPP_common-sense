계산(computation)이란 무엇인가요?
<details><summary></summary>

</details>

계산의 입력과 출력이란 무엇을 의미하나요? 예시를 들어보세요.
<details><summary></summary>

</details>

프로그래머가 계산을 표현할 때 고려해야 할 세 가지 요구사항은 무엇인가요?
<details><summary></summary>

</details>

표현식(expression)은 무엇을 하나요?
<details><summary></summary>

</details>

문장(statement)과 표현식(expression)의 차이는 무엇인가요?
<details><summary></summary>

</details>

lvalue란 무엇인가요? 어떤 연산자들이 lvalue를 요구하며, 그 이유는 무엇인가요?
<details><summary></summary>

</details>

상수 표현식(constant expression)이란 무엇인가요?
<details><summary></summary>

</details>

리터럴(literal)이란 무엇인가요?
<details><summary></summary>

</details>

기호 상수(symbolic constant)란 무엇이며, 왜 사용하는가요?
<details><summary></summary>

</details>

매직 상수(magic constant)란 무엇인가요? 예시를 들어보세요.
<details><summary></summary>

</details>

정수와 부동소수점 값에 사용할 수 있는 연산자에는 어떤 것이 있나요?
<details><summary></summary>

</details>

정수에는 사용 가능하지만 부동소수점에는 사용할 수 없는 연산자는 무엇인가요?
<details><summary></summary>

</details>

문자열에 사용할 수 있는 연산자에는 어떤 것이 있나요?
<details><summary></summary>

</details>

switch 문이 if 문보다 적합한 경우는 언제인가요?
<details><summary></summary>

</details>

switch 문에서 흔히 발생하는 문제는 무엇인가요?
<details><summary></summary>

</details>

for 루프의 헤더 라인의 각 부분은 어떤 역할을 하며, 어떤 순서로 실행되나요?
<details><summary></summary>

</details>

for 루프와 while 루프는 각각 언제 사용하는 것이 좋나요?
<details><summary></summary>

</details>

char foo(int x)라는 함수 정의는 무엇을 의미하나요?
<details><summary></summary>

</details>

프로그램의 일부를 별도의 함수로 정의해야 하는 경우는 언제인가요? 이유를 나열해보세요.
<details><summary></summary>

</details>

int에 할 수 있지만 string에는 할 수 없는 작업은 무엇인가요?
<details><summary></summary>

</details>

string에 할 수 있지만 int에는 할 수 없는 작업은 무엇인가요?
<details><summary></summary>

</details>

벡터의 세 번째 요소의 인덱스는 무엇인가요?
<details><summary></summary>

</details>

벡터의 모든 요소를 출력하는 for 루프는 어떻게 작성하나요?
<details><summary></summary>

```cpp
int n = -1;
cin>>n;
vector<int>number(n);	
for(int x : number)cout<<number[x]<<' '; // number벡터에 대해 순차적으로 x가 출력이 가능하고 이경우 인덱스 접근이 불가능하다.
for(int x = 0 ; x<number )
```

</details>

vector<char> alphabet(26);는 무엇을 하나요?
<details><summary></summary>
char형의 크기 26짜리 내용이 빈 벡터이다.
</details>

push_back()은 벡터에 어떤 동작을 하나요?
<details><summary></summary>
벡터의 사이즈를 한칸 넓히고 항상 벡터의 가장 마지막에 ()에 
해당하는 수를 저장할 수 있게된다. 
</details>

벡터의 size() 멤버 함수는 무엇을 하나요?
<details><summary></summary>
벡터의 크기를 반환한다. <br>
vector<int>number_int(50); <br>
number_int.size() // 는 50이다.
</details>

벡터가 인기 있고 유용한 이유는 무엇인가요?
<details><summary></summary>
push_back()함수를 통해 손쉽게 함수의 size 가장 뒷자리에 내용을 추가할 수 있다.
</details>

벡터의 요소를 정렬하려면 어떻게 해야 하나요?
<details><summary></summary>
알고리즘의 sort()함수를 이용해서 오름차순 정렬을 사용할 수 있다.
</details>

