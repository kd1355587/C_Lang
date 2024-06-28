#include<stdio.h>
main()
{
	int i, j, k;
	printf("     1 2 3 4 5 6 7 8 9\n");
	printf("     =================\n");
	for (j = 1; j < 10; j++)
	{
		printf("\n%d |  ", j);
		for (i = 1; i < 10; i++)
		{
			printf("%d ", i*j);
		}
	}
}