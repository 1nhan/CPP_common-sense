#include <iostream>
using namespace std;

struct Matrix {
	int A[10];
	int size;

};

void				Set					(Matrix* mat, int i, int j, int x)
{
	if (i == j) mat->A[i-1]				= x;
}

int					Get					(Matrix& mat, int i, int j)
{
	if (i == j) return					mat.A[i-1];
				return					0;
}

void				Display				(Matrix& mat)
{
	for (int i = 0; i < mat.size; ++i)
	{
		for (int j = 0; j < mat.size; ++j)
		{
			if (i == j)					{cout << mat.A[i]<< ' ';}
			else						{cout << "0 ";}
		}
										cout << '\n';
	}
}
int					main				() 
{
	Matrix mat;
	mat.size = 4;
	Set(&mat, 1, 1, 5);
	Set(&mat, 2, 2, 8);
	Set(&mat, 3, 3, 11);
	Set(&mat, 4, 4, 14);
	cout<< Get(mat, 2, 2)<<'\n';
	Display(mat);
	return 0;
}