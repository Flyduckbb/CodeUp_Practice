#include <stdio.h>
#include <stdlib.h>

typedef struct data_rebuild {
	int data;
	int index;
} DR;

int main(void)
{
	DR arry[50000];
	int cnt;

	scanf("%d", &cnt);

	for (int i = 0; i < cnt; i++)
	{
		scanf("%d", &arry[i].data);
		arry[i].index = i;
	}

	q_srt(arry->data, 0, cnt - 1);

	for (int i = 0; i < cnt; i++)
		printf("%d ", arry[i].index);

	return 0;
}