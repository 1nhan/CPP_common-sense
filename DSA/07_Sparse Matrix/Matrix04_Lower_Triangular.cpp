#include<iostream>
using namespace std;

class LowerTri
{
	int			n;
	int*		A;

public:

	LowerTri						()	:n{ 2*(2+1)/2 }, A{new int[n]}	{};
	LowerTri						(int n) :n{ n }, A{ new int[n*(n+1)/2]} {};
	~LowerTri						()									{ delete[] A; }

	void		Set_Row				(int i, int j, int x)				{ if (i >= j) A[i*(i - 1)/2+(j-1)] = x; }
	void		Set_Col				(int i, int j, int x)				{ if (i >= j) A[n*(j-1)-(j-2)*(j-1)/2 +(i-j)] = x; }
	int			Get_Row				(int i, int j)						{ if (i >= j) return A[i * (i - 1) / 2 + (j - 1)]; return 0;}
	int			Get_Col				(int i, int j)						{ if (i >= j) return A[n * (j - 1) - (j - 2) * (j - 1) / 2 + (i - j)]; return 0;}
	int			Dimension			()									{ return n;}
	void		Display_Row			();
	void		Display_Col			();
};

void		LowerTri::Display_Row()
{
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			if (i >= j)				cout << A[i * (i - 1) / 2 + (j - 1)] << ' ';
			else					cout << "0 ";
		}
		cout << '\n';
	}
}
void		LowerTri::Display_Col()
{
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			if (i >= j)				cout << A[n * (j - 1) - (j - 2) * (j - 1) / 2 + (i - j)] << ' ';
			else					cout << "0 ";
		}
		cout << '\n';
	}
}

/*
int main()
{
	int			d;
	cout		<<	"Enter Dimensions	: ";
	cin			>>	d;

	LowerTri	dmatrix(d);
	cout		<< "Enter All elements \n";
	int			elements;
	for(int i = 1; i<=d;i++)
	{
		for (int j = 1; j <= d; j++)
		{
			cin >> elements;
			dmatrix.Set_Col(i, j, elements);
		}
	}

	dmatrix.Display_Col();

	return 0;
}
*/