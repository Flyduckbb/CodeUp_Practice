#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double hz, bit, channel, sec;
	double mb;

	scanf("%lf %lf %lf %lf", &hz, &bit, &channel, &sec);

	if (hz <= 48000 && bit <= 32 && channel <= 5 && sec <= 6000)
	{
		mb = (hz * bit * channel * sec) / 8.0;
		printf("%.1lf MB", mb / (1024*1024));
	}

	return 0;
}
