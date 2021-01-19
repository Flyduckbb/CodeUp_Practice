#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num, sum = 0;

	scanf("%d", &num);

	for (int i = 1; i <= 1000; i++)
	{
		sum += i;
		if (sum >= num)
		{
			printf("%d", i);
			break;
		}
	}

	return 0;
}