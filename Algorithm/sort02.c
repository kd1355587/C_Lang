#include<stdio.h>
#define SIZE 5
main()
{
	int i, j, w, d[SIZE] = { 30,7,25,16,10 };
	for (i = 4; i >= 0; i--)
	{
		for ( j = 0; j <= SIZE; j++)
		{
			if (d[j]>d[j+1])
			{
				w = d[j];
				d[j] = d[j+1];
				d[j+1] = w;
			}
		}
	}
	for ( i = 0; i < SIZE; i++)
	{
		printf("%d", d[i]);
	}
}