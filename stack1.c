#include <stdio.h>

int main()
{
	int cookie;
	cookie = 0;
	char buf[16];
	printf("&buf: %p, &cookie: %p\n", buf, &cookie);
	gets(buf);
	printf("\ncookie = %10x \n", cookie);
	if (cookie == 0x41424344)
	{
		printf("You win!\n");
	}
}