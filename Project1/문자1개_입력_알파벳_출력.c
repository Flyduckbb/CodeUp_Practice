#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char ch, alph = 'a';

	scanf("%c", &ch);

	do
	{
		printf("%c ", alph);
		alph++;
	} while (alph < ch + 1);

	return 0;
}