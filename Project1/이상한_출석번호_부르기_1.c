#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n,m;
	int stu[23] = {0};

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &m);
		stu[m-1] += 1;
	}

	for (int i = 0; i < 23; i++)
		printf("%d ", stu[i]);

	return 0;
}