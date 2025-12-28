#include <iostream>
using namespace std;

struct Matrix {
	int		size;
	int*	A;

};

void		Set_Row_Major	(Matrix* mat, int i, int j, int x)
{
	if (i >= j)				mat->A[(i * (i - 1)) / 2 + (j - 1)] = x;
}

void		Set_Column_Major(Matrix* mat, int i, int j, int x)
{
	if (i >= j)				mat->A[mat->size*(j-1)-((j-2)*(j-1)/2)+(i-j)] = x;
}

int			Get_Row_Major	(Matrix& mat, int i, int j)
{
	if(i >= j)
		return				mat.A[(i * (i - 1)) / 2 + (j - 1)];
	return					0;
}

int			Get_Column_Major(Matrix& mat, int i, int j)
{
	if(i >= j)
		return				mat.A[mat.size * (j - 1) - ((j - 2) * (j - 1) / 2) + (i - j)];
	return					0;
}

void		Display_Row_Major(Matrix& mat)
{
	for (int i = 0; i < mat.size; ++i)
	{
		for (int j = 0; j < mat.size; ++j)
		{
			if (i >= j)		{ cout << mat.A[(i * (i - 1)) / 2 + (j - 1)] << ' '; }
			else			{ cout << "0 "; }
		}
							cout << '\n';
	}
}

void		Display_Column_Major(Matrix& mat)
{
	for (int i = 0; i < mat.size; ++i)
	{
		for (int j = 0; j < mat.size; ++j)
		{
			if (i >= j)		{ cout << mat.A[mat.size * (j - 1) - ((j - 2) * (j - 1) / 2) + (i - j)] << ' '; }
			else			{ cout << "0 "; }
		}
							cout << '\n';
	}
}


int			main			()
{
	Matrix mat;
	cout					<< "Enter Dimension";
	cin						>> mat.size;
	mat.A					= new int[mat.size * (mat.size + 1) / 2];
	int x;

	cout					<< "Enter all elements\n";
	for (int i = 0; i < mat.size; ++i) 
	{
		for (int j = 0; j < mat.size; ++j)
		{
			cin				>> x;
			Set_Column_Major(&mat, i, j, x);
		}
	}
	cout					<< "\n\n";

	Display_Column_Major(mat);
	return					0;
}