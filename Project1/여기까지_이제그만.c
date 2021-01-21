#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	long long int num, sum = 0;

	scanf("%lld", &num);

	for (int i = 0; i <= num; i++)
	{
		sum += i;
		if (sum >= num)
		{
			printf("%lld", sum);
			break;
		}
	}

	return 0;
}