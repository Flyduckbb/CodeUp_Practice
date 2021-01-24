#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int cnt, putX, putY;
	int arry[20][20] = { 0 };

	scanf("%d", &cnt);

	for (int i = 1; i <= cnt; i++)
	{
		scanf("%d %d", &putX, &putY);
		arry[putX-1][putY-1] = 1;
	}

	for (int i = 0; i < 19; i++)
	{
		for (int j = 0; j < 19; j++)
		{
			printf("%d ", arry[i][j]);
		}
		printf("\n");
	}

	return 0;
}