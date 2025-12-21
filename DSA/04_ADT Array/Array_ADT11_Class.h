#pragma once

template<typename T> class Array {
	T*		A;
	int		size;
	int		length;
	void	Swap						(T* x, T* y);
public:
			Array						() 
				:A{ new Array[size] }, size{ 10 },	length{ 0 } {}
			Array						(int s) 
				:A{ new Array[size] }, size{ s },	length{ 0 } {}
			~Array						() 
				{ delete[]A; }
	void	Display						();
	void	Append						(T x);
	void	Insert						(int index, T x);
	T		Delete						(int index);
	T		LinearSearch				(T key);
	T		LinearSearch				(T key);
	T		LinearSearch_zero			(T key);
	T		BinarySearch				(T key);
	T		RBinarySearch				(T a[], int low, int high, T key);
	T		get							(int index);
	void	set							(int index, T x);
	T		max							();
	T		min							();
	T		sum							();
	T		Rsum						(int numb);
	T		avarage						();
	void	Reverse1					();
	void	Reverse2					();
	void	InsertSort					(T x);
	T		isSorted					();
	void	Rearrange					(Array* arr);
	Array*	Merge						(Array* arr2);
	Array*	Union						(Array* arr2);
	Array*	intersection				(Array* arr2);
	Array*	Difference					(Array* arr2);
	void	find_single_missing_number_1();
	void	find_single_missing_number_2();
	void	find_multiple_missing_number();
	void	find_hashing				();
	void	Duplicate					();
};

template<typename T> void	Array<T>::find_single_missing_number_1	()
{
	T sum												= 0;
	T sum_fomula										= size * (size + 1) / 2;
	for (int i = 0; i < size; ++i)						sum += A[i];
	T missing_number									= sum_fomula - sum;
	cout <<												missing_number;
}

template<typename T> void	Array<T>::find_single_missing_number_2	()
{
	T Diff												= A[0];
	for (int i = 0; i < size; ++i)
		if (A[i] - 1 != Diff) {
			cout <<										(Diff + 1);
			break;
		}
}

template<typename T> void	Array<T>::find_multiple_missing_number	()
{
	T Diff												= A[0];
	for (int i = 0; i < size; ++i)
		if (A[i] - 1 != Diff) 
			while (Diff < A[i] - 1) {
					cout <<								(A[i] + 1);
					Diff++;
			}
}

template<typename T> void	Array<T>::find_hashing					()
{
	Array Hashing_Table(max());

	for (int i = 0; i < max(); ++i)		Hashing_Table[i]= 0;
	for (int i = 0; i < max(); ++i)		Hashing_Table[A[i]]++;
	for (int i = A[0]; i < max(); ++i)
		if (H[i] == 0)	cout <<			i;
}

template<typename T> void	Duplicate()
{
	T lastDuplicate{};
	for (int i = 0; i < size - 1; ++i)
	{
		if (A[i] == A[i + 1] && A[i] != lastDuplicate)
		{
			cout <<										A[i];
			lastDuplicate								= A[i];
		}
	}
}