#include<stdio.h>
main()
{
	int y,x;
	printf("¼—ï‚ğ“ü—Í");
	scanf("%d",&y);
	x = y % 4;
	if (x==0)
	{
		printf("‚¤‚é‚¤”N‚Å‚·");
	}
	else
	{
		printf("‚¤‚é‚¤”N‚Å‚Í‚ ‚è‚Ü‚¹‚ñ");
	}
}