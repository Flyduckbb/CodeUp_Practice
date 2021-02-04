#include <stdio.h>
#include <stdlib.h>

void insert_data(int A[], int count)
{
	for (int i = 0; i < count; i++)
	{
		int num;
		scanf("%d", &num);
		A[i] = num;
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
	int arry[50000];

	scanf("%d", &cnt);

	insert_data(arry, cnt);

	print_data(arry, cnt);

	return 0;
}