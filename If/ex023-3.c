#include<stdio.h>
main()
{
	int a, b, c, gokei;
	printf("���Z�q1~4�����");
	scanf("%d", &a);
	if (a>4)
	{
		printf("���Z�q������܂���");
	}
	else
	{
		printf("�Q�̐��������");
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