#include<stdio.h>
main()
{
	char i;
	printf("1•¶Žš“ü—Í");
	scanf("%c", &i);
	if ('a' <= i && 'z' >= i)
	{
		printf("•ÏŠ·Œ‹‰Ê‚Í%c", i - 0x20);
	}
	else
	{
		if ('A' <= i && 'Z' >= i)
		{
			printf("•ÏŠ·Œ‹‰Ê‚Í%c", i + 0x20);
		}
		else
		{
			printf("%c", i);
		}
	}
}