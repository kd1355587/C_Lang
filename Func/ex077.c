#include<stdio.h>
void get_maxmin(int x, int y,int z, int* max, int* min);
main()
{
	int su1, su2,su3, max, min;
	printf("整数を3つ入力");
	scanf("%d%d%d",&su1,&su2,&su3);
	get_maxmin(su1, su2,su3, &max, &min);
	printf("最大は%d 最小は%d", max, min);
}

void get_maxmin(int x, int y, int z,int* max, int* min)
{
	*max = (x > y) ? (x > z ? x : z) : (y > z ? y : z);
	*min = (x < y) ? (x < z ? x : z) : (y < z ? y : z);
	return;
}