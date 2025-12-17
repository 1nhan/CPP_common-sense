/**
*	@brief	ADT02에 변경사항
*	- 1. struct Array에 Member variable인 A를 배열로 변경;
*	@note	함수 추가
*	- 2. Append()
*	- 3. Insert()
*
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

struct Array {
	//int* A;
	int A[20];
	int size;
	int length;

};

void Display(Array arr)
{
	int i;
	cout << "\nElements Array are \n";
	for (int i = 0; i < arr.length; i++)
		cout << arr.A[i] << ' ';
	cout << '\n';
}


/**
* @brief	Append()
* -
* @param
* - Array*	arr
* - int		x
*/
void Append(Array* arr, int x)
{
	if ((arr->length) > (arr->length) || 0 > (arr->length)) return;
	arr->A[arr->length++] = x;
}


/**
* @brief	Insert()
* - 배열에 인덱스 부분을 x값을 추가.
* - 이후 인덱스를 length++ 만큼 하나씩 이동
* @param
* - Array*	arr;
* - int		index
* - int		x
*/
void Insert(Array* arr, int index, int x)
{
	if (index > (arr->length) || 0 > index) return;
	(arr->length++);
	for (int i = (arr->length); i > (arr->size); i--) 
		(arr->A[i]) = (arr->A[i - 1]);
	(arr->A[index]) = x;
}

int main()
{
	Array test_arr = { {1,2,3,4,5,6},10,5 };
	
	Append(&test_arr, 10);
	Insert(&test_arr, 4, 15);

	Display(test_arr);
	return 0;
}