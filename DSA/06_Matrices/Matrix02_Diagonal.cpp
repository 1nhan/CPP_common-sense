#include<iostream>
using namespace std;

class Diagonal
{
	int n;
	int* A;

public:

	Diagonal					() :n{ 2 }, A{ new int[n] }		{};
	Diagonal					(int n) :n{ n }, A{ new int[n] }		{};
	void		Set				(int i, int j, int x)					{ if (i == j) A[i - 1] = x; }
	int			Get				(int i, int j)							{ if (i == j) return A[i - 1]; }
	void		Display			();
	~Diagonal					()										{delete[] A; }
};

void		Diagonal::Display	()
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (i == j)													cout << A[i] << ' ';
			else														cout << "0 ";
		}
																		cout << '\n';
	}
}

int main()
{
	Diagonal dmatrix(4);
	dmatrix.Set(1, 1, 2);
	dmatrix.Set(2, 2, 4);
	dmatrix.Set(3, 3, 6);
	dmatrix.Set(4, 4, 8);
	dmatrix.Display();

	return 0;
}