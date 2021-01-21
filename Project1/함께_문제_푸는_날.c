#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int stu, pro, wok;
	int day = 1;

	scanf("%d %d %d", &stu, &pro, &wok);

	while (day % stu != 0 || day % pro != 0 || day % wok != 0)
		day++;

	printf("%d", day);

	return 0;
}