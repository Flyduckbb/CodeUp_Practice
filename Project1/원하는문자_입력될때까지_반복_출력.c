#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char ch;

	do
	{
		scanf("%c ", &ch);
		printf("%c\n", ch);
	} while (ch != 'q');

	return 0;
}