#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;

	scanf("%X", &num);

	for (int hex = 1; hex < 16; hex++)
		printf("%X*%X=%X\n", num, hex, num * hex);

	return 0;
}