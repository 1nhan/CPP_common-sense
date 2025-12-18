/**
*	@brief	ADT10에 변경사항
*	@note	함수 추가
*	- 1. union()
*	- 2. intersection()
*	- 3. differecne()
*	- 4.  
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
	int* B = (int*)malloc(arr->length * sizeof(int));

	for (int i = arr->length - 1, j = 0; i >= 0; i--, j++)
		B[j] = arr->A[i];
	for (int i = 0; i < arr->length; ++i)
		arr->A[i] = B[i];
	free(B);
}

void Reverse2(Array* arr)
{
	for (int i = 0, j = arr->length - 1; i < j; i++, j--)
	{
		Swap(&arr->A[i], &arr->A[j]);
	}
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
void InsertSort(Array* arr, int x)
{
	int i = arr->length - 1;
	if (arr->length == arr->size) return;
	arr->length++;
	while (i >= 0 && x < arr->A[i])
	{
		arr->A[i + 1] = arr->A[i];
		i--;
	}
	arr->A[i + 1] = x;
}

/**
* @brief	isSorted
* - 배열을 오름차순 상태 유지되있는지 확인하는 함수.
* @param
* - Array&	arr
* @note
* - Algorithm isSorted
*/
int isSorted(Array& arr)
{
	for (int i = 0; i < arr.length - 1; ++i)
		if (arr.A[i] > arr.A[i + 1]) return 0;
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
void Rearrange(Array* arr)
{
	int i							  =	0,
		j							  =	arr->length - 1;
	while (i < j)
	{
		while (arr->A[i] < 0)			i++;
		while (arr->A[j] >= 0)			j--;
		if (i < j)						Swap(&arr->A[i], &arr->A[j]);
	}
}

Array* Merge(Array* arr1, Array* arr2)
{
	Array* arr3						  =	(Array*)malloc(sizeof(Array));
	int		i						  = 0,
			j						  = 0,
			k						  = 0;

	while (arr1->length > i &&
		j < arr2->length)
	{
		if (arr1->A[i] < arr2->A[i])	arr3->A[k++] = arr1->A[i++];
		else							arr3->A[k++] = arr2->A[j++];
	}

	for (; i < arr1->length; i++)		arr3->A[k++] = arr1->A[i];
	for (; i < arr2->length; i++)		arr3->A[k++] = arr2->A[i];

	arr3->length					  = arr1->length + arr2->length;
	arr3->size						  = 10;
	return arr3;
}

Array* Union(Array* arr1, Array* arr2)
{
	Array* arr3						  =	(Array*)malloc(sizeof(Array));
	int		i						  = 0,
			j						  = 0,
			k						  = 0;

	while (arr1->length > i &&
		j < arr2->length)
	{
		if		(arr1->A[i] < arr2->A[j])	arr3->A[k++] = arr1->A[i++];
		else if (arr1->A[i] > arr2->A[j])	arr3->A[k++] = arr2->A[j++];
		else {
											arr3->A[k++] = arr1->A[i++];
											j++;
		}								
	}

	for (; i < arr1->length; i++)		arr3->A[k++] = arr1->A[i];
	for (; i < arr2->length; i++)		arr3->A[k++] = arr2->A[j];

	arr3->length					 = k;
	arr3->size						 = 10;
	return arr3;
}


Array* intersection(Array* arr1, Array* arr2)
{
	Array* arr3						  =	(Array*)malloc(sizeof(Array));
	int		i						  = 0,
			j						  = 0,
			k						  = 0;

	while (arr1->length > i &&
		j < arr2->length)
	{
		if		(arr1->A[i] <	arr2->A[j])	i++;
		else if (arr1->A[i] >	arr2->A[j])	j++;
		else if (arr1->A[i] ==	arr2->A[j])
		{
											arr3->A[k++] = arr1->A[i++];
											j++;
		}								
	}

	arr3->length					  = k;
	arr3->size						  = 10;
	return arr3;
}


Array* Difference(Array* arr1, Array* arr2)
{
	Array* arr3						  =	(Array*)malloc(sizeof(Array));
	int		i						  = 0,
			j						  = 0,
			k						  = 0;

	while (arr1->length > i && j < arr2->length)
	{
		if		(arr1->A[i] <	arr2->A[j])	arr3->A[k++] = arr1->A[i++];
		else if (arr1->A[i] >	arr2->A[j])	j++;
		else if (arr1->A[i] ==	arr2->A[j]) i++, j++;
	}
	
	for (; i < arr1->length; i++)		arr3->A[k++] = arr1->A[i];

	arr3->length					  = k;
	arr3->size						  = 10;
	return arr3;
}

void menu()
{
	int index = 0, x = 0;
	Array test_arr1 = { {2,4,6,8,10},10,5 };
	Array test_arr2 = { {1,4,5,8,9},10,5 };
	Array* test_arr3 = intersection(&test_arr1, &test_arr2);

	int ch;   // char 대신 int
	do {
		cout << "Menu\n";
		cout << "1. Insert\n";
		cout << "2. Delete\n";
		cout << "3. Search\n";
		cout << "4. Sum\n";
		cout << "5. Average\n";
		cout << "6. Min && Max\n";
		cout << "7. Display\n";
		cout << "8. Exit\n";
		cout << "Enter your choice\n";

		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "Enter an Element and index ";
			cin >> x >> index;
			Insert(&test_arr1, index, x);
			cout << '\n' << '\n' << '\n';
			break;
		case 2:
			cout << "Enter index ";
			cin >> index;
			x = Delete(&test_arr1, index);
			cout << "Deleted Element is " << x << '\n';
			cout << '\n' << '\n' << '\n';
			break;
		case 3:
			cout << "Enter Element to search ";
			cin >> x;
			index = LinearSearch(&test_arr1, x);
			cout << "Element Index " << index << '\n';
			cout << '\n' << '\n' << '\n';
			break;
		case 4:
			cout << "Sum is " << sum(test_arr1) << '\n';
			cout << '\n' << '\n' << '\n';
			break;
		case 5:
			cout << "Average is " << avarage(test_arr1) << '\n';
			cout << '\n' << '\n' << '\n';
			break;
		case 6:
			cout << "Min && Max is " << min(test_arr1) << " && " << max(test_arr1) << '\n';
			cout << '\n' << '\n' << '\n';
			break;
		case 7:
			Display(*test_arr3);
			cout << '\n' << '\n' << '\n';
			break;
		}
	} while (ch != 8);   // 8 입력 시 종료
}

int main()
{
	menu();
	//cout<<isSorted(test_arr)<<'\n';
	return 0;
}