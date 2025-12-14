
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Rectangle {
	int length;
	int breadth;
};


int main()
{
	int a = 10;
	int* p1 = &a;
	
	printf("using pointer %d %d", p1, &a);

	cout << '\n';

	/****************************************/
	
	int A[5]{ 2,4,6,8,10 };
	int* p2 = A;
	printf("using pointer %d %d", p2, A);
	cout << '\n';
	for (int x : A)
		cout << x << '\n';

	/*****************************************/

	int* p3 = (int*)malloc(5*sizeof(int));	// c style
	int* p4 = new int[5];
	p3[0]={20},
	p3[1]={30},
	p3[2]={40},
	p3[3]={50},
	p3[4]={60};

	for (int x =0;x<5;++x)
		cout << p3[x] << '\n';

	free(p3);								// c style
	delete[] p4;

	/******************************************/
	
	int* p5;
	char* p6;
	float* p7;
	double* p8;
	Rectangle* p9;

	cout << sizeof(p5) << '\n';
	cout << sizeof(p6) << '\n';
	cout << sizeof(p7) << '\n';
	cout << sizeof(p8) << '\n';
	cout << sizeof(p9) << '\n';


	return 0;
}