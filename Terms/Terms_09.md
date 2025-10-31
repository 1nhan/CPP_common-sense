// Terms_09.md
[![C++](https://img.shields.io/badge/C%2B%2B-11-blue)](https://en.cppreference.com/)


##### getline()

<details><summary></summary>
����ȭ�� cin
</details>

#### character

<details><summary></summary>
?
</details>

#### classification

<details><summary></summary>
�з�
</details>

#### output formatting

<details><summary></summary>
(��� ���� ����)
</details>

#### decimal

<details><summary></summary>
(10����)
</details>

#### line-oriented input

<details><summary></summary>
(�� ���� �Է�)
</details>

#### default

<details><summary></summary>
</details>

#### float

<details><summary></summary>
�ε��Ҽ���
</details>

#### manipulator

<details><summary></summary>
������
</details>

#### scientific

<details><summary></summary>
������ ǥ���
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
��� ��ġ
</details>

#### clear()

<details><summary></summary>
</details>

#### input device

<details><summary></summary>
�Է� ��ġ
</details>

#### output operator

<details><summary></summary>
��� ������
</details>

#### close()

<details><summary></summary>
</details>

#### input operator

<details><summary></summary>
�Է� ������
</details>

#### stream state

<details><summary></summary>
��Ʈ�� ����
</details>

#### device driver

<details><summary></summary>
��ġ ����̹�
</details>

#### iostream

<details><summary></summary>
</details>

#### structured file

<details><summary></summary>
����ȭ�� ����
</details>

#### eof()

<details><summary></summary>
</details>

#### istream

<details><summary></summary>
</details>

#### terminator

<details><summary></summary>
������
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
������
</detailsss>

##### hexadecimal

<details><summary></summary>
16����
</details>

##### octal

<details><summary></summary>
8����
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
�ܾ� ī�װ�ȭ�� ����غ���
�ܼ� Ʈ��(������, ��, ������) 


ostream, istream, buffer

	I/O Stream modeal
	������ 
	������ ostream,
	��	������ ǥ�� ���̺귯�� ��� ��Ʈ���� ó���ϱ� ���� Ÿ��.
	��	������ ����	1.�پ��� Ÿ���� ���� ���� �������� ��ȯ�Ѵ�.
	��	��		2.�ش� ���ڵ��� (��򰡷�)�����Ѵ�. 
	��	������ ���� ����: ���ڵ�->ostream->buffer->"���"
	��									������ �ü���� ����ϴ� ����,����ڰ� ������ �����͸� ���������� �����ϱ� ���� ����(buffer)��� �ڷᱸ���� ����Ѵ�.
	������ istream,
		������ ǥ�� ���̺귯�� �Է� ��Ʈ���� ó���ϱ� ���� Ÿ��.
		������ ����	1. �ܼ�, ����, �ֱ����ġ, �ٸ� ��ǻ�� �� ���ڸ� �����´�. 
		��		2. �ش� ���� �������� �پ��� Ÿ���� ������ ��ȯ�Ѵ�.
		������ ���� ����: "����"->buffer->istream->���ڵ�
								������ �ü���� ����ϱ� ���� ���������� buffer�� ����Ѵ�. 


```
```
ifstream,ofstream,fstream

	Opening a file
	������ ���Ͽ��� �����͸� �аų� �����͸� ������ �Ѵٸ� 
	��	�ش� ���Ͽ� ���� ��Ʈ���� ��������� ����� �Ѵ�.
	������ ifstream,
	��	������ ���Ͽ��� �б� ���� istream�̴�.
	��	
	������	ofstream,
	��	������ ������ �������� ostream�̴�.
	��
	������ fstream
		������ �б�� ���⸦ ��� �����ϴ� iostream
```
```
good(),eof(),fail(),bad()
	
	Stream states
	������ good() : ������ ���������� �����.
	��	
	������ eof() : �Է��� ��("end-of-file", "eof")�� ������
	��
	������ fail() : ����ġ ���� ���� �߻���(���ڸ� ��������� 'x'�� ����) 
	��			�ܼ��� ���� ������ fail()�� �߻�
	������ bad() : ����ġ ���ϰ� �ɰ��� ������ �߻���(��ũ �б� ����.)
	��
	ex.
	

```