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
		printf("���́H");
		scanf("%f", &su);
	}
	if (t != 0)
	{
		t = t - 1;
		printf("���v��%.0f\n", kei);
		printf("���ρ�%.2f\n", (float)kei / t);
	}
}