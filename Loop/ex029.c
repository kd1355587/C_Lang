#include<stdio.h>
main()
{
	int i,l;
	l = 0;
	printf("数を入れて");
	scanf("%d", &i);
	while (i > l)
	{
		l++;
		printf("*");
	}
}