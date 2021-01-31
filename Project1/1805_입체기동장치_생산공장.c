#include <stdio.h>
#include <stdlib.h>

typedef struct Serial_Number
{
	int num;
	int gas;
} sn;

int main(void)
{
	int cnt, swnum, swgas;
	sn arry[100];

	scanf("%d", &cnt);

	for (int i = 0; i < cnt; i++)
		scanf("%d %d", &arry[i].num, &arry[i].gas);

	for (int i = 0; i < cnt; i++)
	{
		for (int j = 0; j < cnt - i - 1; j++)
		{
			if (arry[j].num > arry[j +1].num)
			{
				swnum = arry[j].num;
				swgas = arry[j].gas;
				arry[j].num = arry[j + 1].num;
				arry[j].gas = arry[j + 1].gas;
				arry[j + 1].num = swnum;
				arry[j + 1].gas = swgas;
			}
		}
	}

	for (int i = 0; i < cnt; i++)
		printf("%d %d\n", arry[i].num, arry[i].gas);

	return 0;
}