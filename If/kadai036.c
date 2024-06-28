#include<stdio.h>
main()
{
	int i, j;
	printf("®”1H");
	scanf("%d", &i);
	printf("®”2H");
	scanf("%d", &j);
	if (i>j)
	{
		printf("%d‚Ì‚Ù‚¤‚ª%d‚æ‚è%d¬‚³‚¢", j, i, i - j);
	}
	else
	{
		printf("%d‚Ì‚Ù‚¤‚ª%d‚æ‚è%d¬‚³‚¢", i, j, j - i);
	}
}