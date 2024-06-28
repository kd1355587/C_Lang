#include<stdio.h>
main()
{
	int i = 0, j = 0;
	do
	{
		i++;
		j += i;
		printf("%d ", i);
		if (j<=300)
		{
			printf("+ ");
		}
	}while(j <= 300);
	printf("= %d", j);
}