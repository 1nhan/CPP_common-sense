prompt��� ���� ������ �ǹ��ϴ°�?
<details><summary>�亯 ����</summary>
������Ʈ(prompt)�� ����ڿ��� �Է��� ��û�ϴ� �޽����Դϴ�. 
���� ���, �ֿܼ��� ���� �Է��϶�� �ȳ������� ���˴ϴ�.
</details>

������ ���� �Է¹ޱ� ���� ����ϴ� �����ڴ� �����ΰ�?
<details><summary>�亯 ����</summary>
�Է� ������ `>>`�� ����մϴ�. 
<br>
��: `cin >> number;`
</details>

��ü�� �ʱ�ȭ�� �� �ִ� ǥ������� � �͵��� �ִ°�?
<details><summary>�亯 ����</summary>
1. ���� �ʱ�ȭ: `ClassName obj = value;`
<br>
2. ���� �ʱ�ȭ: `ClassName obj(value);`
<br>
3. �߰�ȣ �ʱ�ȭ(C++11 ����): `ClassName obj{value};`
</details>

����ڷκ��� ���� ���� �Է¹޾� ���� number�� �����Ϸ���, � �� ���� �ڵ带 �ۼ��� �� �ִ°�?
<details><summary>�亯 ����</summary>
```cpp
int number;
cin >> number;

``
</details>

\n�� �����̶� �Ҹ���, � ������ �ϴ°�?
<details><summary>�亯 ����</summary>
`\n`�� �ٹٲ� ����(newline character)��, 
��� �� ���� �ٷ� �̵��ϰ� �մϴ�.
</details>

���ڿ�(string) �Է��� ������ ���� ����Ǵ°�?
<details><summary>�亯 ����</summary>
`cin`�� ����� ��� ����(�����̽�, ��, �ٹٲ�)���� ����˴ϴ�. 
`getline()`�� ����ϸ� �ٹٲ� ���ڿ��� ����˴ϴ�.
</details>

����(integer) �Է��� ������ ���� ����Ǵ°�?
<details><summary>�亯 ����</summary>
���� ����(�����̽�, ��, �ٹٲ�) �Ǵ� �Է� ��Ʈ���� ������ ����˴ϴ�.
</details>


���� �� ���� �� �ٷ� �ۼ��ϸ� ��� �Ǵ°�?
```cpp
cout << "Hello, ";  
cout << first_name;  
cout << "!\n";
```  
<details><summary></summary>

</details>

��ü(object)�� �����ΰ�?
<details><summary>�亯 ����</summary>��ü�� Ŭ������ �ν��Ͻ���, 
�����Ϳ� ���(�޼���)�� �Բ� �����ϴ� �����Դϴ�.</details>

���ͷ�(literal)�̶� �����ΰ�?
<details><summary>�亯 ����</summary>���ͷ��� �ڵ忡 ���� �ۼ��� ������ ���Դϴ�. 
��: `42`, `"Hello"`, `true`</details>

���ͷ����� � �������� �ִ°�?
<details><summary>�亯 ����</summary>
- ���� ���ͷ�: `10`, `0xFF`
<br>
- �Ǽ� ���ͷ�: `3.14`, `2.0e5`
<br>
- ���� ���ͷ�: `'A'`
<br>
- ���ڿ� ���ͷ�: `"Hello"`
<br>
- �Ҹ��� ���ͷ�: `true`, `false`
</details>

����(variable)�� �����ΰ�?
<details><summary>�亯 ����</summary>
������ ���� ������ �� �ִ� �̸��� �ִ� �޸� �����Դϴ�.
</details>

char, int, double�� �Ϲ����� ũ��� ���ΰ�?
<details><summary>�亯 ����</summary>
- `char`: 1 byte
<br>
- `int`: 4 bytes
<br>
- `double`: 8 bytes(�ý��ۿ� ���� �ٸ� �� ����)
</details>

�޸𸮿��� int�� string�� ���� ���� ������ ũ�⸦ ������ �� ����ϴ� ������ �����ΰ�?
<details><summary>�亯 ����</summary>
����Ʈ(byte)�� �������� �����մϴ�.
</details>

=�� ==�� ���̴� �����ΰ�?
<details><summary>�亯 ����</summary>
- `=`: ���� ������ (���� ������ ����)
<br>
- `==`: �� ������ (�� ���� ������ ��)
</details>

����(definition)�� �����ΰ�?
<details><summary>�亯 ����</summary>
���Ǵ� ������ �Լ��� ���� �޸� ������ �����ϴ� �����Դϴ�.
</details>

�ʱ�ȭ(initialization)�� �����̸�, ����(assignment)�� ��� �ٸ���?
<details><summary>�亯 ����</summary>
- �ʱ�ȭ: ���� ����� ���ÿ� ���� ����
<br>
- ����: �̹� ����� ������ ���� �ٽ� ����
<br>
��: 
<br>
`int x = 5;` (�ʱ�ȭ),
<br>
`x = 10;` (����)
</details>

���ڿ� ����(string concatenation)�̶� �����̸�, C++������ ��� �����ϴ°�?
<details><summary>�亯 ����</summary>
���ڿ� ������ �� ���ڿ��� �̾���̴� �۾��Դϴ�. 
C++������ `+` �����ڸ� ����մϴ�. 
<br>
��: 
<br>
`"Hello, " + name`
</details>

int Ÿ�Կ� ������ �� �ִ� ������(operator)���� � �͵��� �ִ°�?
<details><summary>�亯 ����</summary>
- ��� ������: `+`, `-`, `*`, `/`, `%`
<br>
- �� ������: `==`, `!=`, `<`, `>`, `<=`, `>=`
<br>
- ���� ������: `=`, `+=`, `-=`, `*=`, `/=`, `%=`
<br>
- ���� ������: `++`, `--`
</details>


���� �̸� �� C++���� �չ����� �̸��� �����̸�, �׷��� ���� ��� �� ������ �����ΰ�?
�̸� ���:
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
<details><summary>�亯 ����</summary>
�չ����� �̸�:
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
�ҹ� �Ǵ� ������� �ʴ� �̸�:
<br>
- 2_For_1_special: ���ڷ� ������
<br>
- latest thing: ���� ����
<br>
- George@home: Ư������ @ ����
<br>
- correct?: Ư������ ? ����
<br>
- stroustrup.com: . ����
<br>
- $PATH: $�� �Ϻ� ȯ�濡�� Ư���� �ǹ̸� ����
</details>


ȥ���� ������ �� �����Ƿ� ������� ���ƾ� �� �չ����� �̸� �ټ� ������ �����Ͻÿ�.
<details><summary>�亯 ����</summary>
1. `O0` (���� 0�� �빮�� O ȥ�� ����)
<br>
2. `l1` (�ҹ��� l�� ���� 1 ȥ�� ����)
<br>
3. `temp` (�ǹ̰� ��ȣ��)
<br>
4. `data` (�ʹ� �Ϲ���)
<br>
5. `value` (�ǹ̰� �Һи���)</details>

���� �̸��� �����ϱ� ���� ��Ģ���� � �͵��� �ִ°�?
<details><summary>�亯 ����</summary>
- �ǹ� �ִ� �̸� ���- �ϰ��� ��Ÿ�� ���� (��: camelCase �Ǵ� snake_case)
<br>
- ��� ����- �ʹ� ª�ų� �ʹ� �� �̸� ���ϱ�
<br>
- ���ڳ� Ư������ ��� ����
</details>

Ÿ�� ������(type safety)�̶� �����̸�, �� �߿��Ѱ�?
<details><summary>�亯 ����</summary>
Ÿ�� �������� ������ �Լ��� ����� Ÿ�����θ� �����ϵ��� �����ϴ� �����Դϴ�. 
�߸��� Ÿ�� ����� �����Ͽ� ������ ���̰� �������� ���Դϴ�.
</details>

double���� int���� ��ȯ�� ������ �� �� �ִ� ������ �����ΰ�?
<details><summary>�亯 ����</summary>
�Ҽ��� ���ϰ� �߷�������, ������ �ս��� �߻��� �� �ֽ��ϴ�. 
<br>
��: 
<br>
`3.9` �� `3`
</details>

�� Ÿ�Կ��� �ٸ� Ÿ�������� ��ȯ�� �������� ���θ� �Ǵ��ϱ� ���� ��Ģ�� �����Ͻÿ�.
<details><summary>�亯 ����</summary>
- ������ �ս��� ���°�?- ��ȯ �� �ǹ̰� �����Ǵ°�?
<br>
- �Ͻ��� ��ȯ�� �����Ѱ�?- �����Ϸ� ��� �Ǵ� ������ �߻����� �ʴ°�?
</details>

�ٶ������� ���� ��ȯ�� ���ϱ� ���� ������� � �͵��� �ִ°�?
<details><summary>�亯 ����</summary>
- ����� �� ��ȯ ��� (`static_cast`)
<br>
- Ÿ�� üũ ��ȭ- ��� �޽��� Ȯ��- auto ��� �� ����
</details


auto�� �뵵�� �����ΰ�?
<details><summary></summary>
auto�� C++���� ������ Ÿ���� �ڵ����� �߷����ִ� Ű�����Դϴ�. 
�����Ϸ��� ������ ���Ե� ���� ���� ������ Ÿ���� �������ݴϴ�.
<br>
�ֿ� �뵵
<br>
- ������ Ÿ���� �����ϰ� ǥ���� �� ����
<br>
- �ݺ����̳� ���ø� �ڵ忡�� ������ ���
<br>
- Ÿ�� ���� �� �ڵ� ���� �ּ�ȭ
</details>
