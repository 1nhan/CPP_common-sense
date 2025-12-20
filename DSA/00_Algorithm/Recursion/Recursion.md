
### Recursion

> What is Recursion? 
```
Type Recursion_Function()
{
	if(EXIT_CONDITION)
	{	1. Calling <- Ascending
		2. Recursion_Function()
		3. Returning <- Descending
	}
}
```
------

> Tracing Recursion

```
Type Recursion_Function()
{
	if(n>0)
	{
		Recursion_Function(n-1);
	}
}

Type Another_Function()
{
	int n = 3;
	Recursion_Function(3);
}
/*
Tracing Recursion
--> Recursion_Function(3)
	└── Recursion_Function(2)
			└── Recursion_Function(1)
				 └── Recursion_Function(0)
*/
```
------

> Head Recursion
```
Type Recursion_Function()
{
	if(n>0)
	{
		Print number
		Recursion_Function(n-1);
	}
}
/*
Tracing Recursion
--> Recursion_Function(3)
	└── Recursion_Function(2)
			└── Recursion_Function(1)
				 └── Recursion_Function(0)
Calling Time(Ascending) -> 3, 2, 1, 0(x);
*/
```

> Tail Recursion
```
Type Recursion_Function()
{
	if(n>0)
	{
		Recursion_Function(n-1);
		Print number
	}
}
/*
Tracing Recursion
--> Recursion_Function(3)
	└── Recursion_Function(2)
			└── Recursion_Function(1)
				 └── Recursion_Function(0)
Returning Time(Descending) -> 1, 2, 3;
*/
```
------
> Stack used in Recursion

```
This is Memory Layout.
+------------------------+
|     [Static Data]      |
+------------------------+
|     [Free Storage]     |
+-----------------------=+
|        [Stack]         |
|                        |
| 5.Recursion_Function(0)|                         
| 4.Recursion_Function(1)|                         
| 3.Recursion_Function(2)|                         
| 2.Recursion_Function(3)|                         
| 1. main()-> x=3        |
+------------------------+
|          code          |
|                        |
|Recursion_Function()    |
|main()                  |
+------------------------+
```
- Static Data: 전역 변수, 상수 등이 저장됨
- Free Storage (Heap): 동적 메모리 할당 영역
- Stack: 함수 호출 시마다 새로운 Stack Frame 생성
- Code : 실제 함수 코드가 저장된 공간
---
> Time Complexcity
```
Type Recursion_Function()
{
	if(n>0)                      
	{
		Print number             
		Recursion_Function(n-1); 
	}
}
/*
	시간 복잡도 계산 방법
	1   ---  if(n>0)				
	1   ---  Print number
	n-1 ---  Recursion_Function(n-1); 
	n+1 ---  f(n+1)
	n   ---  O(n)
	최고차항을 O(n)으로 계산
*/
```
---

> Tree Recursion
```
Type Tree__Recursion(number)
{
	if(EXIT_CONDITION)
	{	
	    1. Print number
		2. Tree__Recursion(number-1)
		3. Tree__Recursion(number-1)
	}
}
/* IF number = 3;
Tracing Tree__Recursion(3)
 ├── print(3)
 ├── Tree__Recursion(2)
 │    ├── print(2)
 │    ├── Tree__Recursion(1)
 │    │    ├── print(1)
 │    │    ├── Tree__Recursion(0) → 종료
 │    │    └── Tree__Recursion(0) → 종료
 │    └── Tree__Recursion(1)
 │         ├── print(1)
 │         ├── Tree__Recursion(0) → 종료
 │         └── Tree__Recursion(0) → 종료
 └── Tree__Recursion(2)
      ├── print(2)
      ├── Tree__Recursion(1)
      │    ├── print(1)
      │    ├── Tree__Recursion(0) → 종료
      │    └── Tree__Recursion(0) → 종료
      └── Tree__Recursion(1)
           ├── print(1)
           ├── Tree__Recursion(0) → 종료
           └── Tree__Recursion(0) → 종료

1. exponent = Tree_Recursion()의 갯수
2. power    = 매개변수
3. 총 호출 횟수 = exponent^0 + exponent^1 + ... + exponent^power;
*/
```
--- 
> Indirect Recursion
```
Type Indirect__Recursion_A(number)
{
	if(EXIT_CONDITION)
	{
	    Print number
		Indirect__Recursion_B(number-1)
	}
}
Type Indirect__Recursion_B(number)
{
	if(EXIT_CONDITION)
	{	
        Print number;
        Indirect__Recursion_A(number-1);
	}
}
/*
Tracing Indirect__Recursion_A(3)
 ├── print(3)
 └── Indirect__Recursion_B(2)
      ├── print(2)
      └── Indirect__Recursion_A(1)
           ├── print(1)
           └── Indirect__Recursion_B(0) → 종료
*/
```
---
> Nested Recursion
```
Type Nested__Recursion(number)
{
	if(EXIT_CONDITION)
	{
	    Print number
		Nested__Recursion(number-1)
	}
	else
	{
	    Print number
		Nested__Recursion(number-1)
	}
}
/*
Tracing Nested__Recursion(3)
 ├── print(3)
 └── Nested__Recursion(2)
      ├── print(2)
      └── Nested__Recursion(1)
           ├── print(1)
           └── Nested__Recursion(0) → 종료
*/
```
---
>Factorial : n!
```
Type Factorial__Recursion(number)
{
	if(number == 0) return 1;
	return Factorial(number-1) * number;
}
/*
Tracing Factorial__Recursion(3)

*/
```
---
>Exponentiation : m^n^ = m* m * m...* n times;
```
Type Exponentiation__Recursion1(number, Power)
{
	if(Power == 0) return 1;
	return Exponentiation__Recursion1(number, power-1) * number
}

/*
Tracing Exponentiation__Recursion1(3,3)
→ Recursion1(3,2) * 3
    → Recursion1(3,1) * 3
       → Recursion1(3,0) * 3
          → return 1
       = 1*3 = 3
    = 3*3 = 9
= 9*3 = 27

시간 복잡도 = O(n)
*/

Type Exponentiation__Recursion2(number, Power)
{
	if(Power == 0) return 1;
	if(Power % 2 == 0 ) return Exponentiation__Recursion2(number * number, power/2)
	return Exponentiation__Recursion2(number * number, (power-1)/2) * number

/*

Tracing Exponentiation__Recursion2(3, 3)
 └─ Power=3 (홀수)
    → return Exponentiation__Recursion2(3*3=9, (3-1)/2=1) * 3
       Exponentiation__Recursion2(9, 1)
        └─ Power=1 (홀수)
           → return Exponentiation__Recursion2(9*9=81, (1-1)/2=0) * 9
              Exponentiation__Recursion2(81, 0)
               └─ Power=0 → return 1
              = 1 * 9 = 9
       = 9 * 3 = 27

시간 복잡도 = O(log n) 
**> Exponentiation by Squaring
*/

Type Exponentiation__Recursion3(number, Power)
{
	if(Power == 0) return 1;
	Type Half = Exponentiation__Recursion3(number, power/2)
	if(Power % 2 == 0) return Half * Half
	else return number * Half * Half
}

/*
Tracing Exponentiation__Recursion3(3, 3)
 └─ Power=3 (홀수)
    → Half = Exponentiation__Recursion3(3, 1)
       └─ Power=1 (홀수)
          → Half = Exponentiation__Recursion3(3, 0)
             └─ Power=0 → return 1
          → return 3 * 1 * 1 = 3
       = Half = 3
    → return 3 * 3 * 3 = 27

시간복잡도 = O(log n)
*/
```

> 분할 정복(Exponentiation by Squaring) 알고리즘
> - EX.1 3^13^ → 13은 홀수 →  3*(3^2^)^6^, 이제 9^6^만 6번만 계산하면 됩니다.
> - EX.2 3^6^  →  6은 짝수 → (9^2^)^3^=81^3^, 이제 3번만 계산하면 됩니다.
> - 지수를 반으로 접는다는 생각으로 약수를 빼놓고 계산한다고 생각하면 됩니다.

---

>Taylor Series : e^x^ = x^0^/0! + x^1^/1! + x^2^/2! + ... + n times
```
Type Factorial__Recursion(k);
Type Exponentiation__Recursion(x, k);

Type TaylorSeries__Recursion1(x, term)
{
	if(term == 0 ) return 1;
	return TaylorSeries__Recursion(x, term-1)
	           +Exponentiation__Recursion(x, term)/Factorial__Recursion(term)
}

/*
Tracing TaylorSeries(3,3)
 └─ return TaylorSeries(3,2) + Power(3,3)/Factorial(3)
      TaylorSeries(3,2)
       └─ return TaylorSeries(3,1) + Power(3,2)/Factorial(2)
            TaylorSeries(3,1)
             └─ return TaylorSeries(3,0) + Power(3,1)/Factorial(1)
                  TaylorSeries(3,0) → return 1
             = 1 + 3/1 = 4
       = 4 + 9/2 = 8.5
  = 8.5 + 27/6 = 13

T(n) = O(1)+O(2)+...+O(n);
     = (n(n+1)/2)
시간 복잡도 = O(n^2)
*/

Type TaylorSeries__Recursion2(x, term)
{
	SUM = 1;
	for(term - 0) S = 1 + x/term * S;
	return S;
}

/*
Tracing TaylorSeries__Recursion2(3,3)
*/

Type TaylorSeries__Recursion3(x, term)
{
	SUM = 1;
	if(term == 0) return S;
	S = 1 + x/term * S;
	return TaylorSeries__Recursion3(x, term-1);
}

/*
Tracing TaylorSeries(3,3), S=1
 └ S = 1 + (3/3)*1 = 2
    TaylorSeries(3,2), S=2
     └ S = 1 + (3/2)*2 = 4
        TaylorSeries(3,1), S=4
         └ S = 1 + (3/1)*4 = 13
            TaylorSeries(3,0) → return 13

시간 복잡도 = O(n)
*/

```
> Horner’s method 다항식을 중첩된 형태로 변환해 계산하는 알고리즘<br>
> 1. e^4^ = x^0^/0! + x^1^/1! + x^2^/2! + x^3^/3! + x^4^/4! <br>
		  =       1 + x^1^/1! + x^2^/2! + x^3^/3! + x^4^/4! <br>
		  =       1 + x/1 * [ 1 + x/2 + x * x/2 * 3 + x * x * x/2 * 3 * 4 ] <br>
		  =       1 + x/1 * [ 1 + x/2  * [ 1 +  x/3 + x * x/3 * 4 ]] <br>
		  =       1 + x/1 * [ 1 + x/2  * [ 1 +  x/3 * [ 1 + x/4 ]]] <br>
> 2. 위 식을 코드로 일반화시 s = 1 + x/n * s
---

>Fibonacci Series : fib(n) = 0 + 1 + 1 + 2 + 3 + ... + (fib(n-2)+fib(n-1))
```
Type Fibonacci_Series__Recursion1(number)
{
	if(number <= 1) return number;
	return Fibonacci_Series__Recursion(number-2) 
		+ Fibonacci_Series__Recursion(number-1)
}
/*
Tracing Fibonacci_Series__Recursion(3)

시간 복잡도 = O(n^2)
*/

Type Fibonacci_Series__Recursion2(number)
{
	int t0 = 0 , t1 = 1; S = 0;
	if(number <= 1) return number;

	for(2 - n)
	{
		S = t0 + t1;
		t0 = t1;
		t1 = S;
	}

	return S;
}
/*
Tracing Fibonacci_Series__Recursion2(3)

시간 복잡도 = O(n) = 4n
*/

Type memo[3000];

Type Fibonacci_Series__Recursion3(number)
{
	if(number <= 1) {
		memo[number] = number;
		return number;
	}
	else{
		if(memo[number-2] == -1) memo[number-2] = Fibonacci_Series__Recursion(number);
		if(memo[number-1] == -1) memo[number-1] = Fibonacci_Series__Recursion(number);
		return memo[number-2] + memo[number-1];
	}
}
/*
Tracing Fibonacci_Series__Recursion3(3)
 └ memo[3] == -1 → 계산 필요
    └ Fibonacci_Series__Recursion3(2)
       └ memo[2] == -1 → 계산 필요
          └ Fibonacci_Series__Recursion3(1) → return 1 (memo[1]=1)
          └ Fibonacci_Series__Recursion3(0) → return 0 (memo[0]=0)
       = 1 + 0 = 1 (memo[2]=1)
    └ Fibonacci_Series__Recursion3(1) → 이미 memo[1]=1
 = 1 + 1 = 2 (memo[3]=2)

시간 복잡도 = O(n)

*/
```
> Memoization에 대해<br>
>> 1. 만들어진 배열을 이용해 선형구조로 바꿔서 시간복잡도를 개선하는 최적화 기법
---

>Combination Fomula : nCr = n! / ((r!)(n-r)!)
```
Type Factorial__Recursion(number);

Type Combination_Fomula_Function(n, r)
{
	Type T0, T1, T2;
	T0 = Factorial__Recursion(n)  ;
	T1 = Factorial__Recursion(r)  ;
	T2 = Factorial__Recursion(n-r);
	return (T0 / (T1 * T2));
}
/*
Tracing Combination_Fomula_Function(n,r)



시간 복잡도 = O(n)

*/

Type Factorial__Recursion(number);

Type Combination_Fomula_Function2(n, r)
{
	if(r==0 || n==r) return 1;
	else return Combination_Fomula_Function2(n-1,r-1)
		+ Combination_Fomula_Function2(n-1, r);
}
/*
Tracing Combination_Fomula_Function2(n,r)




*** 파스칼 삼각형
n=0:                  C(0,0)
n=1:              C(1,0)   C(1,1)
n=2:          C(2,0)   C(2,1)   C(2,2)
n=3:      C(3,0)   C(3,1)   C(3,2)   C(3,3)

EX . 1	C(3,1) = C(	 2,	 0) + C(  2, 1)
EX . 2	C(3,2) = C(	 2,	 1) + C(  2, 2)
일반화	C(n,r) = C(n-1,r-1) + C(n-1, r) 

시간 복잡도 = O(2^n)
*/
```
---
>Tower of Hanoi :
```
Type Tower_of_Hanoi(n, from, to, aux)
{
    if n == 0:
        Terminate
    Tower_of_Hanoi(n - 1, from, aux, to)
    print("move", from, "->", to)
    Tower_of_Hanoi(n - 1, aux, to, from)
}
/*
Step 0 : 원판이 없으면 종료.
Step 1 : n-1개의 작은 원판을 보조 기둥(aux)으로 옮겨서 가장 큰 원판만 남김
Step 2 : 가장 큰 원판을 시작 기둥(from)에서 목적 기둥(to)으로 옮김.
Step 3 : 보조 기둥(aux)에 있던 n-1개의 원판을 목적 기둥(to)으로 옮겨 최종 완성.
*/
```
---
