#include<stdio.h>
main()
{
	int i;
	for ( i = 0; i < 21; i++)
	{
		if (i%2)
		{
			printf("%d ", i);
		}
		else
		{
			continue;
		}

	}
}