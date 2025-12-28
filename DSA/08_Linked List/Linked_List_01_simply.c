#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data; 
	struct Node* next;
}*first = NULL;

void Create(int A[], int n)
{
	struct Node* t, * last;
	first			= (struct Node*)malloc(sizeof(struct Node));
	first->data		= A[0];
	first->next		= NULL;
	last			= first;

	for (int i = 0; i < n; ++i)
	{
		t			= (struct Node*)malloc(sizeof(struct Node));
		t->data		= A[i];
		t->next		= NULL;
		last->next	= t;
		last		= t;
	}
}

void Display(struct Node* p)
{
	while (p)
	{
		printf("%d", p->data);
		p = p->next;
	}
	printf("\n");
}

int main()
{
	int A[] = { 1,2,3,4,5 };
	Create(A, 5);
	Display(first);
	return 0;
}