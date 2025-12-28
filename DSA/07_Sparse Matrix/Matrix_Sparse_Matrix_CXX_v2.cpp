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
			read	(x)	-> operator >> 
			display	(x)	-> operator <<
			addition
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
	Sparse()
		:m{ 1 }, n{ 1 }, nnz{ m * n }, Ele{ new Element[nnz] } {}
	Sparse(int i, int j, int num)
		:m{ i }, n{ j }, nnz{ num }, Ele{ new Element[nnz] } {}
	~Sparse() { delete[] Ele; }
	void addition();

	friend istream& operator>>(istream& is, Sparse&);
	friend ostream& operator<<(ostream& os, Sparse&);
	Sparse operator+(Sparse&);
};

istream& operator>>(istream& is, Sparse&sp)
{
	cout << "Enter Dimention" << '\n';
	cin >> sp.m >> sp.n;

	cout << "Number of non-zero" << '\n';
	cin >> sp.nnz;

	sp.Ele = new Element[sp.nnz];
	cout << "Enter non-zero Element" << '\n';
	for (int i = 0; i < sp.nnz; ++i)
		cin >> sp.Ele[i].row 
			>> sp.Ele[i].col 
			>> sp.Ele[i].val;
}
ostream& operator<<(ostream& os, Sparse&sp)
{
	int k = 0;
	for (int i = 0; i < sp.nnz; ++i)		// s1
	{
		for (int j = 0; j < sp.nnz; ++j)	// s2
		{
			if (sp.Ele[k].row == i && sp.Ele[k].col == j)
				cout << sp.Ele[k++].val << ' ';
			else
				cout << "0 ";
		}
		cout << '\n';
	}
}

Sparse Sparse::operator+(Sparse& ad)
{
	if (m != ad.m || n != ad.n) return ad;


	int		i			= 0,
			j			= 0,
			k			= 0;
	Sparse* sum			= new Sparse(m,n,nnz+ad.nnz);
	
	sum->Ele->row		= m;
	sum->Ele->col		= n;
	sum->Ele			= new Element[ad.nnz+nnz];

	while (i < nnz && j < nnz)
	{
		// Check : Row --> Col --> =..

		// Row
		if		(Ele[i].row > ad.Ele[j].row)		sum->Ele[k++] = Ele[i++];
		else if (Ele[i].row > ad.Ele[j].row)		sum->Ele[k++] = Ele[j++];
		
		// Col
		else {
			if		(Ele[i].col > ad.Ele[j].col)	sum->Ele[k++] = Ele[i++];
			else if (Ele[i].col > ad.Ele[j].col)	sum->Ele[k++] = Ele[j++];

			// =
			else
			{
				sum->Ele[k]					= Ele[i];
				sum->Ele[k++].val			= Ele[i++].val + Ele[j++].val;
			}
		}
	}
	for(;i<nnz;++i) sum -> Ele[k++]			= Ele[i]; 
	for(;j<nnz;++j) sum -> Ele[k++]			= Ele[j];

	sum->nnz								= nnz;

	return *sum;
}

int main()
{
	Sparse	e;
	cin  >>	e;
	cout <<	e;
	return	0;
}