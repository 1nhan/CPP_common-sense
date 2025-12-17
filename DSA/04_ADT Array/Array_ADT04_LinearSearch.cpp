/**
*	@brief	ADT04에 변경사항
*	@note	함수 추가
*	- 1. LinearSearch()
*
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

struct Array {
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

/**
* @brief	Delete()
* - 배열 index의 arr를 arr[index+1]로 덮어쓰고
* - 덮이기 전의 값을 x값에 대입한후 출력하는 함수
*/
int Delete(Array* arr, int index)
{
	int x = 0;
	if (index > (arr->length) || 0 > index) return 0;

	x = arr->A[index];
	for (int i = index; i < (arr->length); i++)
		arr->A[i] = arr->A[i + 1];
	arr->length--;
	return x;
}

void Swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

/**
* @brief	LinearSearch
* - 찾고자하는 key의 값을 전달된 arr에 비교하여 순차적으로 탐색
* @param
* - Array&	arr
* - int		key
*/
int LinearSearch(Array& arr, int key)
{
	for (int i = 0; i < arr.length; i++)
		if (key == arr.A[i]) return i;
	return -1;
}

/**
* @brief	LinearSearch << Improve Version
* - Transposition을 이용해서 반복적으로 검색되는 요소를
* - 한단계씩 앞으로 이동시킴
* @param
* - Array*	arr
* - int		key
*/
int LinearSearch(Array* arr, int key)
{
	for (int i = 0; i < arr->length; i++)
		if (key == arr->A[i]) {
			Swap(&arr->A[i], &arr->A[i - 1]);
			return i;
		} 
	return -1;
}

/**
* @brief	LinearSearch_zero << Improve Version
* - move to Front/head를 이용해서 arr의 인덱스를 맨앞으로 이동
* @param
* - Array*	arr
* - int		key
*/
int LinearSearch_zero(Array* arr, int key)
{
	for (int i = 0; i < arr->length; i++)
		if (key == arr->A[i]) {
			Swap(&arr->A[i], &arr->A[0]);
			return i;
		} 
	return -1;
}

int main()
{
	Array test_arr = { {1,2,3,4,5,6},10,5 };

	cout <<"LinearSearching Index is " << LinearSearch(test_arr, 4) << '\n';
	
	Display(test_arr);
	
	return 0;
}