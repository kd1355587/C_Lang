#include<stdio.h>
main()
{
	int a, b, c, gokei;
	printf("演算子1~4を入力");
	scanf("%d", &a);
	if (a>4)
	{
		printf("演算子がありません");
	}
	else
	{
		printf("２つの整数を入力");
		scanf("%d %d", &b, &c);
		if (a == 1)
		{
			gokei = b + c;
			printf("%d", gokei);
		}
		else
		{
			if (a == 2)
			{
				gokei = b - c;
				printf("%d", gokei);
			}
			else
			{
				if (a == 3)
				{
					gokei = b * c;
					printf("%d", gokei);
				}
				else
				{
					if (a == 4)
					{
						gokei = b / c;
						printf("%d", gokei);
					}
				}
			}
		}
	}
}