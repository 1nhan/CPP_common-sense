// Terms_09.md
[![C++](https://img.shields.io/badge/C%2B%2B-11-blue)](https://en.cppreference.com/)


##### getline()

<details><summary></summary>
형식화된 cin
</details>

#### character

<details><summary></summary>
?
</details>

#### classification

<details><summary></summary>
분류
</details>

#### output formatting

<details><summary></summary>
(출력 형식 지정)
</details>

#### decimal

<details><summary></summary>
(10진수)
</details>

#### line-oriented input

<details><summary></summary>
(줄 단위 입력)
</details>

#### default

<details><summary></summary>
</details>

#### float

<details><summary></summary>
부동소수점
</details>

#### manipulator

<details><summary></summary>
조작자
</details>

#### scientific

<details><summary></summary>
과학적 표기법
</details>

#### get()

<details><summary></summary>

</details>

#### setprecision()

<details><summary></summary>
</details>

#### fixed

<details><summary></summary>
</details>

#### << >>

<details><summary></summary>
</details>

#### bad()

<details><summary></summary>
</details>

#### good()

<details><summary></summary>
</details>

#### ostream

<details><summary></summary>
</details>

#### buffer

<details><summary></summary>

</details>

#### ifstream

<details><summary></summary>
</details>

#### output device

<details><summary></summary>
출력 장치
</details>

#### clear()

<details><summary></summary>
</details>

#### input device

<details><summary></summary>
입력 장치
</details>

#### output operator

<details><summary></summary>
출력 연산자
</details>

#### close()

<details><summary></summary>
</details>

#### input operator

<details><summary></summary>
입력 연산자
</details>

#### stream state

<details><summary></summary>
스트림 상태
</details>

#### device driver

<details><summary></summary>
장치 드라이버
</details>

#### iostream

<details><summary></summary>
</details>

#### structured file

<details><summary></summary>
구조화된 파일
</details>

#### eof()

<details><summary></summary>
</details>

#### istream

<details><summary></summary>
</details>

#### terminator

<details><summary></summary>
종결자
</details>

#### fail()

<details><summary></summary>
</details>

#### ofstream

<details><summary></summary>
</details>

#### unget()

<details><summary></summary>
</details>

#### file

<details><summary></summary>
</details>

#### open()

<details><summary></summary>
</details>

##### binary

<detailsss><summary></summary>
이진수
</detailsss>

##### hexadecimal

<details><summary></summary>
16진수
</details>

##### octal

<details><summary></summary>
8진수
</details>

#### format()

<details><summary></summary>
</details>

#### tolower()

<details><summary></summary>
</details>

#### setw()

<details><summary></summary>
</details>

#### setfill()

<details><summary></summary>
</details>

#### isdigit()


<details><summary></summary>
</details>

#### isalpha()

<details><summary></summary>
</details>


```
단어 카테고리화로 기억해보기
콘솔 트리(├──, │, └──) 


ostream, istream, buffer

	I/O Stream modeal
	├── 
	├── ostream,
	│	├── 표준 라이브러리 출력 스트림을 처리하기 위한 타입.
	│	├── 역할	1.다양한 타입의 값을 문자 시퀀스로 변환한다.
	│	│		2.해당 문자들을 (어딘가로)전송한다. 
	│	└── 동작 예시: 문자들->ostream->buffer->"어딘가"
	│									└── 운영체제와 통신하는 동안,사용자가 제공한 데이터를 내부적으로 저장하기 위해 버퍼(buffer)라는 자료구조를 사용한다.
	└── istream,
		├── 표준 라이브러리 입력 스트림을 처리하기 위한 타입.
		├── 역할	1. 콘솔, 파일, 주기억장치, 다른 컴퓨터 등 문자를 가져온다. 
		│		2. 해당 문자 시퀀스를 다양한 타입의 값으로 변환한다.
		└── 동작 예시: "어딘거"->buffer->istream->문자들
								└── 운영체제와 통신하기 위해 내부적으로 buffer를 사용한다. 


```
```
ifstream,ofstream,fstream

	Opening a file
	├── 파일에서 데이터를 읽거나 데이터를 쓰고자 한다면 
	│	해당 파일에 대해 스트림을 명시적으로 열어야 한다.
	├── ifstream,
	│	├── 파일에서 읽기 위한 istream이다.
	│	
	├──	ofstream,
	│	├── 파일을 쓰기위한 ostream이다.
	│
	├── fstream
		├── 읽기와 쓰기를 모두 지원하는 iostream
```
```
good(),eof(),fail(),bad()
	
	Stream states
	├── good() : 연산이 성공적으로 수행됨.
	│	
	├── eof() : 입력의 끝("end-of-file", "eof")에 도달함
	│
	├── fail() : 예상치 못한 일이 발생함(숫자를 기대했지만 'x'로 받음) 
	│			단순한 형식 오류시 fail()이 발생
	├── bad() : 예상치 못하고 심각한 문제가 발생함(디스크 읽기 오류.)
	│
	ex.
	

```