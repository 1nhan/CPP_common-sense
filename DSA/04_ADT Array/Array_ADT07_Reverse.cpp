/**
*	@brief	ADT07에 변경사항
*	@note	함수 추가
*	- 1. Reverse		()
*	- 2. Left Shift		()
*	- 3. Left Rotate	()
*	- 4. Right Shift	()
*	- 5. Right Rotate	()
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

/**
* @brief	BinarySearch
* - 이진 검색 알고리듬
* @param
* - Array*	arr
* - int		key
*/
int BinarySearch(Array* arr, int key)
{
	int low = 0, high = (arr->length - 1);
	int mid = (low + high) / 2;
	while (low <= high)
	{
		if (key == arr->A[mid]) return mid;
		else if (key < arr->A[mid]) high = mid - 1;
		else low = mid + 1;
	}
	return -1;
}
/**
* @brief	RBinarySearch
* - Recursion을 이용한 이진 검색 알고리듬
* @param
* - int		a[ ]
* - int		low
* - int		high
* - int		key
*/
int RBinarySearch(int a[], int low, int high, int key)
{
	int mid = (low + high) / 2;
	if (low <= high)
	{
		if (key == a[mid]) return mid;
		else if (key < a[mid]) RBinarySearch(a, low, mid - 1, key);
		else RBinarySearch(a, mid + 1, high, key);
	}
	return -1;
}

/**
*/
int get(Array& arr, int index)
{
	if (index > arr.length || 0 > index) return 0;
	return arr.A[index];
}

void set(Array& arr, int index, int x)
{
	if (index > arr.length || 0 > index) return;
	arr.A[index] = x;
}

int max(Array& arr)
{
	int max = arr.A[0];
	for (int i = 0; i < arr.length; i++)
		if (max < arr.A[i]) max = arr.A[i];
	return max;
}

int min(Array& arr)
{
	int min = arr.A[0];
	for (int i = 0; i < arr.length; i++)
		if (min > arr.A[i]) min = arr.A[i];
	return min;
}

int sum(Array& arr)
{
	int total = 0;
	for (int i = 0; i < arr.length; ++i)
		total += arr.A[i];
	return total;
}

int Rsum(Array& arr, int numb)
{
	if (numb < 0) return 0;
	return Rsum(arr, numb - 1) + arr.A[numb];
}

/**
*/
double avarage(Array& arr)
{
	return (double)sum(arr) / arr.length;
}


/**
* @brief	Reversal
* - 
* @param
* - Array*	arr
*/
void Reverse1(Array* arr)
{
	int* B =(int*)malloc(arr->length*sizeof(int));
	
	for (int i = arr->length - 1, j = 0; i >= 0; i--, j++)
		B[j] = arr->A[i];
	for (int i = 0; i < arr->length; ++i)
		arr->A[i] = B[i];
	
}

void Reverse2(Array* arr)
{
	for (int i = 0, j = arr->length - 1; i < j; i++, j--)
	{
		Swap(&arr->A[i], &arr->A[j]);
	}
}


int main()
{
	Array test_arr = { {1,2,3,4,5,6},10,5 };

	Reverse1(&test_arr);

	Display(test_arr);
	return 0;
}