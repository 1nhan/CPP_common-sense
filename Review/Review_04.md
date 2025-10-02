�� ���� �ֿ� ���� ������ �̸� ���� ������ �����Ͻÿ�.
<details><summary></summary>

</details>

�л� ���α׷����� ������ �� �ִ� ������ ������ �����ΰ�?
<details><summary></summary>

</details>

��� �ϼ��� ������Ʈ�� �����ؾ� �ϴ� ������ �����ΰ�?
<details><summary></summary>

</details>

���α׷��� ������ �����ϰ� ������ ����Ʈ��� ����� ���� ���� �� �ִ� �� ���� ���ٹ��� �����Ͻÿ�.
<details><summary></summary>

</details>

�츮�� �����(debugging)�� �Ⱦ��ϴ� ������ �����ΰ�?
<details><summary></summary>

</details>

���� ����(Syntax error)�� �����ΰ�? �ټ� ���� ���� �����Ͻÿ�.
<details><summary></summary>

</details>

Ÿ�� ����(Type error)�� �����ΰ�? �ټ� ���� ���� �����Ͻÿ�.
<details><summary></summary>

</details>

��Ŀ ����(Linker error)�� �����ΰ�? �� ���� ���� �����Ͻÿ�.
<details><summary></summary>

</details>

�� ����(Logic error)�� �����ΰ�? �� ���� ���� �����Ͻÿ�.
<details><summary></summary>

</details>

�������� ���ǵ� ���α׷� ������ ������ ���� �� ������ �����Ͻÿ�.
<details><summary></summary>

</details>

����� Ÿ������ ��� �� �� �ִ°�? �׷��� ������ ���ϱ� ���� ����� �����ΰ�?
<details><summary></summary>

</details>

�Է� ������ �����ߴ��� ��� �׽�Ʈ�ϴ°�?
<details><summary></summary>

!cin
</details>

�Լ� ȣ���ڰ� ��Ÿ�� ����(run-time error)�� ó���ϴ� �Ͱ� ��ȣ���ڰ� ó���ϴ� ���� �񱳡������Ͻÿ�.
<details><summary></summary>

</details>

����(exception)�� ������ ���� ���� ��(error value)�� ��ȯ�ϴ� �ͺ��� �ٶ����� ���� �����ΰ�?
<details><summary></summary>


</details>

���� ���� ��ȯ�ϴ� ���� ���ܸ� ������ �ͺ��� �ٶ����� ���� �����ΰ�?
<details><summary></summary>

</details>

���ܰ� �������� ������ ������ ��� �Ǵ°�?
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
    // ���� ���� or ���� ����
}

```
</details>

����(vector) v���� v[v.size()]�� ���� ����(range error)�� ������ �����̸�, �̸� ȣ���ϸ� � ����� �߻��ϴ°�?
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

�ܾ�(Assertion)�̶� �����ΰ�?
<details><summary></summary>

</details>

���� ����(Precondition)�� ���� ����(Postcondition)�� �����ϰ�, �ݺ����� �ʿ��� ����� ���÷� �����Ͻÿ�. ��, �� ���� area() �Լ��� ������� ���ÿ�.
<details><summary></summary>

</details>

���� ������ �׽�Ʈ���� �ʾƵ� �Ǵ� ���� �����ΰ�?
<details><summary></summary>

</details>

���� ������ �׽�Ʈ���� �ʾƵ� �Ǵ� ���� �����ΰ�?
<details><summary></summary>

</details>

���α׷��� ������ϴ� �ܰ�� �����ΰ�?
<details><summary></summary>

</details>

����� �� �ּ�(commenting)�� ������ �Ǵ� ������ �����ΰ�?
<details><summary></summary>

</details>

�׽�Ʈ(testing)�� �����(debugging)�� ���̴� �����ΰ�?
<details><summary></summary>

</details>

����(Random number)�� �����ΰ�?
<details><summary></summary>

</details>

random_int()�� seed()�� ��� ����ϴ°�?
<details><summary></summary>

</details>