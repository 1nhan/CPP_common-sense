#include <iostream>
using namespace std;

struct Rectangle
{
	int length;
	int breadth;
};

int main()
{
	Rectangle r{ 5,10 };

	cout << r.length << '\n';
	cout << r.breadth<< '\n';
	Rectangle* p = &r;
	//Rectangle* p = (Rectangle *)malloc(sizeof(Rectangle));	// c style
	
	Rectangle* p = new Rectangle;


	cout << p->length  << '\n';
	cout << p->breadth << '\n';


	delete p;
}