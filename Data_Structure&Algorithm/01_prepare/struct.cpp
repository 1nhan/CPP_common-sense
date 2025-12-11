#include<stdio.h>
#include<iostream>
using namespace std;

struct Rectangle
{
	int length;
	int breadth;
	char x;		//1byte가 아닌 4byte 할당 , 이걸 padding이라고 부름.
} r1, r2, r3;
//Rectangle r1, r2, r3; // 윗줄이나 아래나 같다.



int main()
{
	Rectangle r1{ 10,5 };
	
	printf("%d", sizeof(r1));
	cout << '\n';
	cout << r1.length << ' ' << r1.breadth << '\n';

	return 0;
}