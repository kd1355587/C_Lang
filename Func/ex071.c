#include<stdio.h>
int gokei(int a, int b,int c);
float heikin(int a,int b,int c);
main()
{
	int a, b, c;
	printf("�������R����:");
	scanf("%d%d%d", &a, &b, &c);
	printf("���v��%d�@���ς�%.2f", gokei(a, b, c), heikin(a, b, c));
}
int gokei(int a, int b,int c)
{
	return(a + b + c);
}
float heikin(int a, int b,int c)
{
	return(a + b + c)/3.0;
}
