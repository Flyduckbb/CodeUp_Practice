#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned int a, b;
	scanf("%u %u", &a, &b);

	printf("%u\n", a + b);
	printf("%u\n", a - b);
	printf("%u\n", a * b);
	printf("%u\n", a / b);
	printf("%u\n", a % b);
	printf("%.2lf", (double)a / (double)b);

	return 0;
}