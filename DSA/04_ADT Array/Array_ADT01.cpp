#include<iostream>
#include<stdlib.h>
using namespace std;

struct Array {
	int* A;
	int length;
	int size;

};

void Display(Array arr) 
{
	int i;
	cout << "\nElements Array\n";
	for (int i = 0; i < arr.length; i++)
		cout << arr.A[i]<<' ';
	cout << '\n';
}

int main()
{
	Array arr;
	int n, i;
	cout<< "Enter size an Array>> ";
	cin >> arr.size;
	arr.A = (int*)malloc(arr.size * sizeof(int));
	arr.length = 0;

	cout<< "Enter number>> ";
	cin >> n;

	cout<< "Enter all Elemnets>> ";
	for (int i = 0; i < n; i++)
		cin>> arr.A[i];
	cout << '\n';
	arr.length = n;

	Display(arr);

	free(arr.A);
	return 0;
}