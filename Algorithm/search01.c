#include<stdio.h>
#include<stdlib.h>
#include<time.h>		
main()
{
	int s, i, d[10] = {10,5,30,77,16,3,47,29,37,33};
	printf("’Tõ’l‚“‚ğ“ü—Í");
	scanf("%d", &s);
	for ( i = 0; i < 10; i++)
	{
		if (s==d[i])
		{
			break;
		}
	}
	if (i == 10)
	{
		printf("‚İ‚Â‚©‚ç‚È‚©‚Á‚½\n");
	}
	else
	{
		printf("’Tõ’l%d‚ğd[%d]‚Å”­Œ©\n", s,i);
	}
}