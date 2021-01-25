#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int h, w, cnt;
	int l, d, x, y;
	int arry[100][100] = { 0 };

	scanf("%d %d", &h, &w);
	scanf("%d", &cnt);

	for (int i = 0; i < cnt; i++)
	{
		scanf("%d %d %d %d", &l, &d, &x, &y);

		if (d == 1)
		{
			for (int j = 0; j < l; j++)
				arry[x+j-1][y-1] = 1;
		}
		else
		{
			for (int j = 0; j < l; j++)
				arry[x-1][y+j-1] = 1;
		}
	}

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
			printf("%d ", arry[i][j]);
		printf("\n");
	}

	return 0;
}