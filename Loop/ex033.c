#include<stdio.h>
main()
{
	float su,kei,t;
	t = 0;
	kei = 0;
	su = 0;
	for (;su!= -999;)
	{
		kei += su;
		t++;
		printf("”‚ÍH");
		scanf("%f", &su);
	}
	if (t != 0)
	{
		t = t - 1;
		printf("‡Œv%.0f\n", kei);
		printf("•½‹Ï%.2f\n", (float)kei / t);
	}
}