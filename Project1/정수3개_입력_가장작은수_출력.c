#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	long long int a, b, c;
	scanf("%lld %lld %lld", &a, &b, &c);
	printf("%lld", ((a < b ? a : b) < c) ? ((a < b ? a : b)) : c);

	return 0;
}