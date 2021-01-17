#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int cnt;
	long long int num;
	goto enter;
enter:
	scanf("%d", &cnt);
	goto again;
again:
	for (int i = 0; i < cnt; i++)
	{
		scanf("%lld", &num);
		printf("%lld\n", num);
	}
	goto exit;
exit:
	return 0;
}