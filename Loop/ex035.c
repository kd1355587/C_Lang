#include<stdio.h>
main()
{
	int i, gokei;
	gokei = 0;
	while (1)
	{
		printf("��������");
		scanf("%d", &i);
		if (i == -999) break;
		gokei += i;
	}
	printf("���v��%d", gokei);
}