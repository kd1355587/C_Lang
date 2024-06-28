#include<stdio.h>
main()
{
	int ope;
	printf("®”‚ð“ü—Í");
	scanf("%d", &ope);
	ope = ope / 10;
	switch (ope)
	{
		if (ope >= 1 && ope <= 4)
		{
			case  1 :
				printf("‚P‚O“_‘ä‚Å‚·");
				break;
			case 2 :
				printf("‚Q‚O“_‘ä‚Å‚·");
				break;
			case 3:
				printf("‚R‚O“_‘ä‚Å‚·");
				break;
			case 4:
				printf("‚S‚O“_‘ä‚Å‚·");
				break;
		}
	default:
		printf("ƒGƒ‰[");
	}
}