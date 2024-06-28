#include<stdio.h>
main()
{
	int i=0;
	do 
	{
		printf("%d ", i);
		if (i==10)
		{
			printf("\n");
		}
		i++;
	} while (i <= 20);
}