#include<stdio.h>
void get_sumavg(float x, float y, float* sum, float* avg);
main()
{
	float su1, su2, sum, avg;
	printf("������2����");
	scanf("%f%f",&su1,&su2);
	get_sumavg(su1, su2, &sum, &avg);
	printf("���v��%.0f ���ς�%.2f", sum, avg);
}

void get_sumavg(float x, float y, float* sum, float* avg)
{
	*sum = x + y;
	*avg = x + y / 2;
	return;
}