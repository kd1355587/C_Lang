#include<stdio.h>
main()
{
	int i=0,j=1;
	while (i<=300)
	{
		printf("%d", j);
		i += j;
		j++;
		if (i <= 300)
		{
			printf("+");
		}
	}
	printf("=%d", i);
}