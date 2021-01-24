#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int count, min=23;
	int num[10000];

	scanf("%d", &count);

	for (int i = 0; i < count; i++)
	{
		scanf("%d", &num[i]);
		
		if (min > num[i])
			min = num[i];
	}

	printf("%d", min);

	return 0;
}