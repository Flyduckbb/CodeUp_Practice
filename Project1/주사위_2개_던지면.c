#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, m;

	scanf("%d %d", &n, &m);

	if (n < 11 && m < 11)
	{
		for (int i=1; i <= n; i++)
			for (int j=1; j <= m; j++)
				printf("%d %d\n", i, j);
	}

	return 0;
}