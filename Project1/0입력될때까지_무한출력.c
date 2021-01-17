#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	long long int num;

	goto enter;
enter:
	scanf("%lld", &num);

	if (num != 0)
	{
		printf("%lld\n", num);
		goto enter;
	}
	else
		goto exit;

exit:
	return 0;
}