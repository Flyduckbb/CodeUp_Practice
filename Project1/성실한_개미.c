#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int map[10][10] = { 0 };

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
			scanf("%d", &map[i][j]);
	}

	int x = 1, y = 1;
	for(int i=0; i<30; i++)
	{
		if (map[x][y] == 0)
		{
			map[x][y] = 9;
			y++;
		}
		else if (map[x][y] == 1)
		{
			x++;
			y--;
		}
		else if (map[x][y] == 2)
		{
			map[x][y] = 9;
			break;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
			printf("%d ", map[i][j]);
		printf("\n");
	}

	return 0;
}