#include<stdio.h>
main()
{
	int i,x;
	i = 0;
	x = 0;
	printf("数を入れて");
	scanf("%d", &i);
	do
	{
		while(x<5)
		{
			printf("*");
			x++;
		}
		x = 0;
		printf("\n");
		i--;
	} while (i > 0);
}