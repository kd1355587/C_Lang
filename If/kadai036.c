#include<stdio.h>
main()
{
	int i, j;
	printf("����1�H");
	scanf("%d", &i);
	printf("����2�H");
	scanf("%d", &j);
	if (i>j)
	{
		printf("%d�̂ق���%d���%d������", j, i, i - j);
	}
	else
	{
		printf("%d�̂ق���%d���%d������", i, j, j - i);
	}
}