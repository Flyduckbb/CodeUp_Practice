#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;

	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		if (i % 3 == 0)
			continue;
		printf("%d ", i);
	}

	return 0;
}