#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;

	scanf("%d", &num);

	if (0 <= num && num <= 100)
	{
		for (int i = 0; i <= num; i++)
			printf("%d\n", i);
	}

	return 0;
}