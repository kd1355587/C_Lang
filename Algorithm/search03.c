#include<stdio.h>
#include<stdlib.h>
#include<time.h>		
main()
{
	int low, high, mid, s, d[11] = { 10,15,18,23,28,35,47,55,68,78,96 };
	printf("’Tõ’l‚“‚ğ“ü—Í");
	scanf("%d", &s);
	low = 0;
	high = 10;
	while(low<=high)
	{
		mid = (low + high) / 2;
		if (s == d[mid])
		{
			break;
		}
		if (s > d[mid])
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	if (low > high)
	{
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
	}
	else
	{ 
		printf("d[%d]‚Å%d‚ğŒ©‚Â‚¯‚½\n", mid,s);
	}
}