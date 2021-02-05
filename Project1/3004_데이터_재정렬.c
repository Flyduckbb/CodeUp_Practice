#include <stdio.h>
#include <stdlib.h>

typedef struct data_rebuild {
	int data;
	int index;
} DR;

void qsort(int A[], int p, int r)
{
	int q;

	if (p < r)
	{
		q = partition(A, p, r);
		qsort(A, p, q - 1);
		qsort(A, q + 1, r);
	}
}

int partition(int B[], int pp, int rr)
{
	int x = B[rr];
	int i = pp - 1;
	for (int j = pp; j < rr; j++)
	{
		if (B[j] <= x)
		{
			int a = B[++i];
			B[i] = B[j];
			B[j] = a;
		}

	}
	int b = B[i + 1];
	B[i + 1] = B[rr];
	B[rr] = b;
	return i + 1;
}

int main(void)
{
	DR arry[50000];
	int cnt;

	scanf("%d", &cnt);

	for (int i = 0; i < cnt; i++)
	{
		scanf("%d", &arry[i].data);
		arry[i].index = i;
	}

	qsort(arry, 0, cnt - 1);

	for (int i = 0; i < cnt; i++)
		printf("%d ", arry[i].index);

	return 0;
}