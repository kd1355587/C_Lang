#include<stdio.h>
main()
{
	int i, gokei;
	gokei = 0;
	while (1)
	{
		printf("”‚ğ“ü‚ê‚Ä");
		scanf("%d", &i);
		if (i == -999) break;
		gokei += i;
	}
	printf("‡Œv%d", gokei);
}