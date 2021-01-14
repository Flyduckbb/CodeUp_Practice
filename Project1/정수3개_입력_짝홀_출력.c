#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned long long int a, b, c;
	scanf("%u %u %u", &a, &b, &c);
	
	if (a % 2 == 0)
		printf("even\n");
	else
		printf("odd\n");

	if (b % 2 == 0)
		printf("even\n");
	else
		printf("odd\n");

	if (c % 2 == 0)
		printf("even\n");
	else
		printf("odd\n");

	return 0;
}