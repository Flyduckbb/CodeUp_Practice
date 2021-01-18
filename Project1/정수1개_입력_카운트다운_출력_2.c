#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	int a = 1;

	scanf("%d", &num);
	if (num > 0 && num < 101)
	{
		while (a)
		{
			if (num == 0)
				break;
			else
			{
				num--;
				printf("%d\n", num);
			}
		}
	}

	return 0;
}