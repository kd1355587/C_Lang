#include<stdio.h>
main()
{
	int i, j;
	printf("整数1？");
	scanf("%d", &i);
	printf("整数2？");
	scanf("%d", &j);
	if (i>j)
	{
		printf("%dのほうが%dより%d小さい", j, i, i - j);
	}
	else
	{
		printf("%dのほうが%dより%d小さい", i, j, j - i);
	}
}