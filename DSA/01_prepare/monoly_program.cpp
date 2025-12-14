#include <iostream>
using namespace std;

/*
struct Rectangle {
	int length = 0;
	int breadth = 0;
	
	void	initialize	(int l, int b)					{ length = l; breadth = b; }; 
	int		area		(int length, int breadth)		{return length * breadth;}
	int		perimeter	(int length, int breadth)		{return 2*(length +breadth);}
};
*/
class Rectangle{
	int length = 0;
	int breadth = 0;
public:
	Rectangle() :length{ 0 }, breadth{ 0 } {};
	Rectangle(int l, int b) :length{ l }, breadth{ b } {};

	int		area		()								{return length * breadth;}
	int		perimeter	()								{return 2*(length +breadth);}
	int		get_length	()								{return length;}
	int		get_breadth	()								{return breadth;}
	void	set_length	(int val)						{length = val;}
	void	set_breadth	(int val)						{breadth= val;}

			~Rectangle	()								{}

};

int main()
{
	Rectangle r{ 10,5 };

	cout << "Area " << r.area() << '\n';
	cout << "Perimeter " << r.perimeter() << '\n';

}


/*
int main()
{	
	Rectangle r;
	cin >> r.length >> r.breadth;



	cout << r.length << ' ' << r.breadth << '\n';


	/*
	int length = 0, breadth = 0;
	cout << "Enter Length and Breadth" << '\n';
	cin >> length >> breadth;
	int area = length * breadth;
	int peri = 2 * (length * breadth);

	cout<< area <<' '<< peri;
	
	*/
}
*/