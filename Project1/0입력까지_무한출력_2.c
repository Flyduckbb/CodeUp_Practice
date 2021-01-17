#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 1;
	while (a)
	{
		long long int num;

		scanf("%lld", &num);

		if (num == 0)
			a = 0;
		else
			printf("%lld\n", num);
	}

	return 0;
}