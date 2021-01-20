#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int w, h, b;
	double mb;

	scanf("%d %d %d", &w, & h, & b);

	if (1 <= w && w <= 1024)
	{
		if (1 <= h && h <= 1024)
		{
			if (b <= 40 && b % 4 == 0)
			{
				mb = (w * h * b) / 8.0;

				printf("%.2lf MB", mb / (1024*1024));

				return 0;
			}
		}
	}
}