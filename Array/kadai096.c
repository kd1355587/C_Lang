#include<stdio.h>
main()
{
	double c[10];
	int i=0,d=0,j;
	while (i!=-999)
	{
		printf("����(-999�ŏI��)?");
		scanf("%d", &i);
		if (i == -999)
		{
			continue;
		}
		c[d] = i;
		d++;
	}
	printf("�z�� c = ");
	for ( j = 0; j < d; j++)
	{
		printf("%.0f ", c[j]);
	}
}