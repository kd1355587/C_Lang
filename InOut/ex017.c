#include<stdio.h>
main()
{
	float su1, su2, su3,gokei,heikin;
	printf("��ڂ̎����F");
	scanf("%f",&su1);
	printf("��ڂ̎����F");
	scanf("%f",&su2);
	printf("�O�ڂ̎����F");
	scanf("%f",&su3);
	gokei = su1 + su2 + su3;
	printf("���v=%.2f\n", gokei);
	heikin = gokei / 3;
	printf("����=%.2f\n", heikin);
}