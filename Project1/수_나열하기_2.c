#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	long long int a, r, n;

	scanf("%lld %lld %lld", &a, &r, &n);

	for (int i = 1; i < n; i++)
	{
		a *= r;
	}

	printf("%lld", a);

	return 0;

}