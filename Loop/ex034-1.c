#include<stdio.h>
main()
{
	int i;
	i = 0;
	printf("数を入れて");
	scanf("%d", &i);
	do
	{
		printf("*****\n");
		i--;
	} while (i > 0);
}