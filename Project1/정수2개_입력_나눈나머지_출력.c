#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned int a, b;
	scanf("%u %u", &a, &b);
	printf("%u", a % b);

	return 0;
}