#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	long long int a, b, c;
	scanf("%lld %lld %lld", &a, &b, &c);

	printf("%lld\n", a + b + c);
	printf("%.1lf", (double)(a + b + c) / 3);

	return 0;
}