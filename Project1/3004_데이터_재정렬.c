#include <stdio.h>
#include <stdlib.h>

typedef struct data_sort {
	int data;
	int index;
} DS;

void insert_data(int A[], int count)
{
	for (int i = 0; i < count; i++)
	{
		scanf("%d", &A[i].data);
		A[i].index = i;
	}
}

void print_data(int A[], int count)
{
	for (int i = 0; i < count; i++)
		printf("%d ", A[i]);
}

int main(void)
{
	int cnt;
	int DS[50000];

	scanf("%d", &cnt);

	insert_data(DS, cnt);

	print_data(DS, cnt);

	return 0;
}