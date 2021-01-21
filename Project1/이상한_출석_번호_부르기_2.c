#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int cnt;
	int stu[10000] = { 0 };

	scanf("%d", &cnt);

	for (int i = 0; i < cnt; i++)
		scanf("%d", &stu[i]);

	for (int i = cnt-1; i >= 0; i--)
		printf("%d ", stu[i]);

	return 0;
}