#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int cnt,x,y;
	int arry[20][20];

	for (int i = 0; i < 19; i++)
	{
		for (int j = 0; j < 19; j++)
			scanf("%d", &arry[i][j]);
	}

	scanf("%d", &cnt);

	for (int i = 0; i < cnt; i++)
	{
		scanf("%d %d", &x, &y);

		for (int j = 0; j < 19; j++)
		{
			if (arry[x-1][j] == 1)
				arry[x-1][j] = 0;
			else
				arry[x-1][j] = 1;
		}

		for (int j = 0; j < 19; j++)
		{
			if (arry[j][y-1] == 1)
				arry[j][y-1] = 0;
			else
				arry[j][y-1] = 1;
		}
	}

	for (int i = 0; i < 19; i++)
	{
		for (int j = 0; j < 19; j++)
			printf("%d ", arry[i][j]);

		printf("\n");
	}

	return 0;
}