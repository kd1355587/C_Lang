#include<stdio.h>
void get_maxmin(int x, int y,int z, int* max, int* min);
main()
{
	int su1, su2,su3, max, min;
	printf("®”‚ð3‚Â“ü—Í");
	scanf("%d%d%d",&su1,&su2,&su3);
	get_maxmin(su1, su2,su3, &max, &min);
	printf("Å‘å‚Í%d Å¬‚Í%d", max, min);
}

void get_maxmin(int x, int y, int z,int* max, int* min)
{
	*max = (x > y) ? (x > z ? x : z) : (y > z ? y : z);
	*min = (x < y) ? (x < z ? x : z) : (y < z ? y : z);
	return;
}