#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data; 
	struct Node* next;
}*first = NULL; //


void Create(int A[], int n)
{
	// 새 노드 생성에 도움을 주는 t와 마지막 노드를 가리키는 last 
	struct Node		*t,	 
					*last; 
	
	first			= (struct Node*)malloc(sizeof(struct Node));
	first->data		= A[0];
	first->next		= NULL;
	last			= first;

	for (int i = 1; i < n; ++i)
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
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
}

// int main()
// {
// 	int A[] = { 3,5,7,9,13 };
// 	Create(A, 5);
// 	Display(first);
// 	return 0;
// }