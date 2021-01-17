#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	long long int num;

	scanf("%lld", &num);

	if (num < 0)
	{
		printf("minus\n");

		if (num % 2 == 0)
			printf("even");
		else
			printf("odd");
	}
	else
	{
		printf("plus\n");

		if (num % 2 == 0)
			printf("even");
		else
			printf("odd");
	}

	return 0;
}