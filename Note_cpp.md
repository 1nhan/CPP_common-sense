----------------------------------------------------------------
#c5 Writing programming

의사코드(pseudo code) : 
설계 초기에 표기법의 정확한 의미가 아직 확실하지 않을 때 의사코드를 사용하곤 한다.

```text
while (not_finished) {
    read_a_line
    calculate // 처리 수행
    write_result
}
```
----------------------------------------------------------------


토큰(token) : 은 숫자나 연산자처럼 우리가 한 단위(unit)로 간주하는 문자들의 연속이다. 
어떤 형태로든 “토큰화”는 텍스트 분석(text analysis)이 시작되는 일반적인 방식이다.
토큰을 (kind,value) 쌍으로 나타내는 것

----------------------------------------------------------------

멤버 접근 표기(member access notation, 멤버 접근 표기)는 다음과 같다: 
object_name.member_name

----------------------------------------------------------------

토큰(Token)은 C++ 사용자 정의 타입(user-defined type)의 예이다. 
사용자 정의 타입은 데이터 멤버(data members)뿐만 아니라 
멤버 함수(member functions, operations)를 가질 수 있다.

----------------------------------------------------------------

토큰(Token)을 초기화(construct)할 수 있다. 예를 들면:

```cpp
Token t1 {'+'};         // t1.kind = '+'
Token t2 {'8', 11.5};   // t2.kind = '8'이고 t2.value = 11.5
Token t3;               // 오류: 초기자(initializer) 누락
```

----------------------------------------------------------------
토큰 사용하기(Using tokens)

```cpp
Token get_token();
vector <Token>tok;

int main(void)
{
    while(cin)
    {
        Token t = get_token();
        tok.push_back(t);_
    }

return 0;
}
```

----------------------------------------------------------------

곱셈 연산 찾기(Finding multiply)

```cpp

for(int i =0; i<tok.size(); ++i){
    if(tok[i].kind=="*"){   
    double d = tok[i-1].value*tok[i+1].value};
    }
}
```

초기에는 기능 확장(feature creep)을 피하고 필수 기능만 구현한 단순한 버전을 먼저 만드는 것이 중요하다. 







