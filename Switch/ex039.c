#include <stdio.h>
main()
{
	char flg;
	int d1, d2, d3;
	printf("処理を入力");
	scanf("%c", &flg);
	printf("整数を入力");
	scanf("%d%d%d", &d1, &d2, &d3);

	switch (flg)
	{
	case = 'd':
	case ='D':
		if (d1>d2)
			if (d1 > d3)
			{
				
		{
			printf("最大値は%dです",d1);
		}
		else
		{
			if (d2 > d3) 
			{
				printf("最大値は%dです", d2);
			}
			else
			{
				printf("最大値は%dです", d3);
			}
		}
		break;
	default:
		break;
	}
}