#include<stdio.h>
main()
{
	int i;
	printf("0から100までの整数？");
	scanf("%d" ,&i);
	if (90 <= i)
	{
		printf("その数値の判定結果は「5」です");
	}
	else
	{
		if (80 <= i)
		{
			printf("その数値の判定結果は「4」です");
		}
		else
		{

			if (50 <= i)
			{
				printf("その数値の判定結果は「3」です");
			}
			else
			{

				if (30 <= i)
				{
					printf("その数値の判定結果は「2」です");
				}
				else
				{
					if (i<30)
					{
						printf("その数値の判定結果は「1」です");
					}
				}
			}
		}
	}
}