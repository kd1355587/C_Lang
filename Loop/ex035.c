#include<stdio.h>
main()
{
	int i, gokei;
	gokei = 0;
	while (1)
	{
		printf("数を入れて");
		scanf("%d", &i);
		if (i == -999) break;
		gokei += i;
	}
	printf("合計＝%d", gokei);
}