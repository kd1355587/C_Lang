#include<stdio.h>
#include<stdlib.h>
#include<time.h>		
main()
{
	int a = 100, b;
	int *p_a;
	p_a = &a;	//アドレスのセット
	b = *p_a;	

	printf("a = %d b = %d *p_a = %d\n",a,b,*p_a);


}