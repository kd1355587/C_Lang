#include<stdio.h>
#include<stdlib.h>
main(int argc,char *argv[])
{
	int i1,i2,ans;
	
	i1 = atoi(argv[1]);
	i2 = atoi(argv[2]);
	ans = i1 + i2;
	printf("%d + %d = %d", i1, i2, ans);
}