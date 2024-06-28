#include<stdio.h>
main()
{
	int i,j=0;
	for ( i = 0; i <60; i++)
	{
		printf("%d", i);
		if (i==20*j)
		{
			printf("\n");
			j++;
		}
	}
}