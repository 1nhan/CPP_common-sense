
#include <iostream>
using namespace std;

struct Rectangle {
	int length;
	int breadth;
};

void fun(Rectangle* p)
{
	p->length = 20;
	cout << "length: " << p->length << "breadth: " << p->breadth << '\n';
}
Rectangle* fun()
{
	Rectangle* p;
	p = new Rectangle;
	//p = (Rectangle*)malloc(sizeof(Rectangle)); C style
	
	p->length = 17;
	p->breadth = 5;
	
	return p;
}


int main()
{
	Rectangle r = { 10,5 };
	Rectangle* ptr = fun();
	fun(&r);
	printf("Length %d \nBreadth %d\n", r.length, r.breadth);
	cout << ptr->breadth <<' '<< ptr->length << '\n';
	return 0;
}