/*
	class Element
		Member var
			row, col, val
		Member function

	class Sparse
		Member var
			m, n, nnz, Element * ele
		Member function
			construct
			destroyer
			read
			display

*/
#include <iostream>
using namespace std;

class Element
{
public:
	int row,
		col,
		val;
};

class Sparse
{
	int m,
		n,
		nnz;
	Element* Ele;

public:
	Sparse	()
		:m{ 1 }, n{ 1 }, nnz{ m*n }, Ele{new Element[nnz]}	{}

	Sparse	(int i, int j, int num) 
		:m{ i }, n{ j }, nnz{ num }, Ele{new Element[nnz]}	{}
	~Sparse	()												{delete[] Ele;}
	void read		();
	void display	();
	void addition	();
};

void Sparse::read		()
{
	cout << "Enter Dimention" << '\n';
	cin >> m >> n;

	cout << "Number of non-zero" << '\n';
	cin >> nnz;

	Ele = new Element[nnz];
	cout << "Enter non-zero Element" << '\n';
	for (int i = 0; i < nnz; ++i)
		cin >> Ele[i].row >> Ele[i].col >> Ele[i].val;

}

void Sparse::display	()
{
	int k = 0;
	for (int i = 0; i < nnz; ++i)		// s1
	{
		for (int j = 0; j < nnz; ++j)	// s2
		{
			if (Ele[k].row == i && Ele[k].col == j)
				cout << Ele[k++].val << ' ';
			else
				cout << "0 ";
		}
		cout <<'\n';
	}
}

void Sparse::addition	()
{

}


int main()
{
	Sparse e;
	e.read();
	e.display();
	return 0;
}