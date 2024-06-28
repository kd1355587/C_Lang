#include<stdio.h>
main()
{
	int a=100, b=200, c;
	int *p_a=&a, *p_b=&b;
	c = *p_a;
	*p_a = *p_b;
	*p_b = c;
	printf("%d %d",a,b);
}