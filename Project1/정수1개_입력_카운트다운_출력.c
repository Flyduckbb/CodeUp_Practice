#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	scanf("%d", &num);
	if (num > 0 && num < 101)
	{
		while (num != 0)
		{
			for (int i = num; i > 0; i--)
				printf("%d\n", i);
			break;
		}
	}
	
	return 0;
}