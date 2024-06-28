#include<stdio.h>
main()
{
	float x[3][2], kei;
	int i,j;
	for (i = 0; i <=2; i++)
	{
		for (kei=0,j=0; j <2; j++)
		{
			printf("x[%d][%d] =", i, j);
			scanf("%f", &x[i][j]);
			kei += x[i][j];
		}
		printf("\n%ds–Ú‚Ì•½‹Ï=%.2f\n", i, kei / 2);
	}
}