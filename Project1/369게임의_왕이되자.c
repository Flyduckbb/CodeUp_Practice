#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;

	scanf("%d", &num);

	if (num >= 1 && num < 10)
	{
		for (int i = 1; i <= num; i++)
		{
			if (i % 3 == 0)
				printf("X ");
			else
				printf("%d ", i);
		}
	}

	return 0;
}