/**
*	@brief	ADT10에 변경사항
*	@note	함수 추가
*	- 1. menu()
*/
#include"Array_ADT11_Class.h"
#include<iostream>
#include<stdlib.h>
using namespace std;

template<typename T> void		Array<T>::Display				()
{
	cout << "\nElements Array are \n";
	for (int i = 0; i < length; i++)
		cout << A[i] << ' ';
	cout << '\n';
}
/**
* @brief	Append()
* -
* @param
* - Array*	arr
* - int		x
*/
template<typename T> void		Array<T>::Append				(T x)
{
	if ((length) > (length) || 0 > (length)) return;
	A[length++] = x;
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
template<typename T> void		Array<T>::Insert				(int index, T x)
{
	if (index > (length) || 0 > index) return;
	(length++);
	for (int i = (length); i > (size); i--)
		(A[i]) = (A[i - 1]);
	(A[index]) = x;
}
/**
* @brief	Delete()
* - 배열 index의 arr를 arr[index+1]로 덮어쓰고
* - 덮이기 전의 값을 x값에 대입한후 출력하는 함수
*/
template<typename T> T			Array<T>::Delete				(int index)
{
	int x = 0;
	if (index > (length) || 0 > index) return 0;

	x = A[index];
	for (int i = index; i < (length); i++)
		A[i] = A[i + 1];
	length--;
	return x;
}
template<typename T> void		Array<T>::Swap					(T* x, T* y)
{
	T temp = *x;
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
template<typename T> T			Array<T>::LinearSearch			(T key)
{
	for (int i = 0; i < length; i++)
		if (key == A[i]) return i;
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
template<typename T> T			Array<T>::LinearSearch			(T key)
{
	for (int i = 0; i < length; i++)
		if (key == A[i]) {
			Swap(&A[i], &A[i - 1]);
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
template<typename T> T			Array<T>::LinearSearch_zero		(T key)
{
	for (int i = 0; i < length; i++)
		if (key == A[i]) {
			Swap(&A[i], &A[0]);
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
template<typename T> T			Array<T>::BinarySearch			(T key)
{
	int low = 0, high = (length - 1);
	int mid = (low + high) / 2;
	while (low <= high)
	{
		if (key == A[mid]) return mid;
		else if (key < A[mid]) high = mid - 1;
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
template<typename T> T			Array<T>::RBinarySearch			(T a[], int low, int high, T key)
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
template<typename T> void		Array<T>::set					(int index, T x)
{
	if (index > length || 0 > index) return;
	A[index] = x;
}
template<typename T> T			Array<T>::get					(int index)
{
	if (index > length || 0 > index) return 0;
	return A[index];
}
template<typename T> T			Array<T>::max					()
{
	int max = A[0];
	for (int i = 0; i < length; i++)
		if (max < A[i]) max = A[i];
	return max;
}
template<typename T> T			Array<T>::min					()
{
	int min = A[0];
	for (int i = 0; i < length; i++)
		if (min > A[i]) min = A[i];
	return min;
}
template<typename T> T			Array<T>::sum					()
{
	int total = 0;
	for (int i = 0; i < length; ++i)
		total += A[i];
	return total;
}
template<typename T> T			Array<T>::Rsum					(int numb)
{
	if (numb < 0)						return 0;
	return								Rsum(numb - 1) + A[numb];
}
/**
*/
template<typename T> T			Array<T>::avarage				()
{
	return (double)sum(arr) / length;
}
/**
* @brief	Reversal
* -
* @param
* - Array*	arr
*/
template<typename T>void		Array<T>::Reverse1				()
{
	int* B								= new Array[size];

	for (int i = length - 1, j = 0; i >= 0; i--, j++)
		B[j] = A[i];
	for (int i = 0; i < length; ++i)
		A[i] = B[i];
	delete[] B;
}
template<typename T>void		Array<T>::Reverse2				()
{
	for (int i = 0, j = length - 1; i < j; i++, j--)
		Swap(&A[i], &A[j]);
}
/**
* @brief	InsertSort
* - 배열을 오름차순 상태로 유지하면서 새로운 원소 x를 삽입
* - 뒤에서 앞으로 비교하며 x보다 큰 원소들을 한 칸씩 뒤로 이동
* - 적절한 위치(i+1)에 x를 삽입
* @param
* - Array*	arr
* - int		x
* @note
* - 배열이 가득 찬 경우(size == length) 삽입하지 않고 종료
*/
template<typename T>void		Array<T>::InsertSort			(T x)
{
	int i								= length - 1;
	if (length == size)					return;
	length++;
	while (i >= 0 && x < A[i])
	{
		A[i + 1]						= A[i];
										i--;
	}
	A[i + 1]							= x;
}
/**
* @brief	isSorted
* - 배열을 오름차순 상태 유지되있는지 확인하는 함수.
* @param
* - Array&	arr
* @note
* - Algorithm isSorted
*/
template<typename T> T			Array<T>::isSorted				()
{
	for (int i = 0; i < length - 1; ++i)
		if (A[i] > A[i + 1]) return 0;
	return 1;
}
/**
* @brief	Rearrange
* - A[i]와 A[j]에 각각 음수인지 양수인지 판단 후 인덱스 값만 움직임
* - A[i]가 양수이고 A[j]가 음수이면 Swap을 통해 값을 서로 바꿈
* @param
* - Array*	arr
* @note
* -
*/
template<typename T> void		Array<T>::Rearrange				(Array<T>* arr)
{
	int i								= 0,
		j								= length - 1;
	while (i < j)
	{
		while (A[i] < 0)				i++;
		while (A[j] >= 0)				j--;
		if (i < j)						Swap(&A[i], &A[j]);
	}
}
template<typename T> Array<T>*	Array<T>::Merge					(Array<T>* arr2)
{
	Array*	arr3						= new Array[size];
	int		i							= 0,
			j							= 0,
			k							= 0;

	while (length > i &&
		j < arr2->length)
	{
		if (A[i] < arr2->A[i])			arr3->A[k++] = A[i++];
		else							arr3->A[k++] = arr2->A[j++];
	}

	for (; i < length; i++)				arr3->A[k++] = A[i];
	for (; i < arr2->length; i++)		arr3->A[k++] = arr2->A[i];

	arr3->length						= length + arr2->length;
	arr3->size							= 10;
	
	return arr3;
}
template<typename T> Array<T>*	Array<T>::Union					(Array<T>* arr2)
{
	Array* arr3							= new Array[size];
	int		i							= 0,
			j							= 0,
			k							= 0;

	while (length > i &&
		j < arr2->length)
	{
		if		(A[i] < arr2->A[j])		arr3->A[k++] = A[i++];
		else if (A[i] > arr2->A[j])		arr3->A[k++] = arr2->A[j++];
		else {
			arr3->A[k++]				= A[i++];
										j++;
		}
	}

	for (; i < length; i++)				arr3->A[k++] = A[i];
	for (; i < arr2->length; i++)		arr3->A[k++] = arr2->A[j];

	arr3->length						= k;
	arr3->size							= 10;

	return arr3;
}
template<typename T> Array<T>*	Array<T>::intersection			(Array<T>* arr2)
{
	Array*	arr3						= new Array[size];
	int		i							= 0,
			j							= 0,
			k							= 0;

	while (length > i &&
		j < arr2->length)
	{
		if		(A[i] <  arr2->A[j])	i++;
		else if (A[i] >  arr2->A[j])	j++;
		else if (A[i] == arr2->A[j])
		{
			arr3->A[k++]				= A[i++];
										j++;
		}
	}

	arr3->length						= k;
	arr3->size							= 10;
	
	return arr3;
}
template<typename T> Array<T>*	Array<T>::Difference			(Array<T>* arr2)
{
	Array*	arr3						= new Array[size];
	int		i							= 0,
			j							= 0,
			k							= 0;

	while (length > i && j < arr2->length)
	{
		if		(A[i] < arr2->A[j])	
			arr3->A[k++]				= A[i++];
		else if (A[i] > arr2->A[j])		j++;
		else if (A[i] == arr2->A[j])	i++, j++;
	}

	for (; i < length; i++)				arr3->A[k++] = A[i];

	arr3->length						= k;
	arr3->size							= 10;
	return arr3;
}

void							menu							()
{
	int			index					= 0, 
				x						= 0,
				sz						= 0;
	string		menu_screen				= 
				R"(+------------------------------------------+
				   |										  |
				   |					Menu				  |
				   |										  |
				   |				1. Insert				  |
				   |				2. Delete				  |
				   |				3. Search				  |
				   |				4. Sum					  |
				   |				5. Average				  |
				   |				6. Min && Max			  |
				   |				7. Display				  |
				   |				8. Exit					  |
				   |										  |
				   |		*** Enter your choice ***		  |
				   |										  |
				   +------------------------------------------+)";
	cout << "Enter Size of Array ";
	cin>>		sz;
	Array<T>*	arr1					= new Array[sz];
	int			ch;						// char 대신 int
	do {

		cout << menu_screen;

		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "Enter an Element and index ";
			cin >> x >> index;
			arr1.Insert(index, x);
			cout << '\n' << '\n' << '\n';
			break;
		case 2:
			cout << "Enter index ";
			cin >> index;
			x = arr1.Delete(index);
			cout << "Deleted Element is " << x << '\n';
			cout << '\n' << '\n' << '\n';
			break;
		case 3:
			cout << "Enter Element to search ";
			cin >> x;
			index = arr1.LinearSearch(x);
			cout << "Element Index " << index << '\n';
			cout << '\n' << '\n' << '\n';
			break;
		case 4:
			cout << "Sum is " << arr1.sum() << '\n';
			cout << '\n' << '\n' << '\n';
			break;
		case 5:
			cout << "Average is " << arr1.avarage() << '\n';
			cout << '\n' << '\n' << '\n';
			break;
		case 6:
			cout << "Min && Max is " << arr1.min() << " && " << arr1.max() << '\n';
			cout << '\n' << '\n' << '\n';
			break;
		case 7:
			arr1.Display();
			cout << '\n' << '\n' << '\n';
			break;
		}
	} while (ch != 8);   // 8 입력 시 종료
}
int							main								()
{
	menu();
	//cout<<isSorted(test_arr)<<'\n';
	return 0;
}