#include<stdio.h>
main()
{
	float su1, su2, su3,gokei,heikin;
	printf("一つ目の実数：");
	scanf("%f",&su1);
	printf("二つ目の実数：");
	scanf("%f",&su2);
	printf("三つ目の実数：");
	scanf("%f",&su3);
	gokei = su1 + su2 + su3;
	printf("合計=%.2f\n", gokei);
	heikin = gokei / 3;
	printf("平均=%.2f\n", heikin);
}