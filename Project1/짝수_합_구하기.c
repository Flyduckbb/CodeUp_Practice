#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int sum = 0;
	int num;

	scanf("%d", &num);

	if (0 <= num && num <= 100)
	{
		for (int i = 1; i <= num; i++)
			if (i % 2 == 0) sum += i;

		printf("%d", sum);
	}

	return 0;
}