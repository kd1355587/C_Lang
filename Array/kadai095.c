#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int c = 0, e = 0;
	float d = 0;
	int i;
	printf("zña©çzñbÌÁZÊðzñcÉi[·é\n");
	printf("zñ a = ");
	for ( i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	for (i = 0; i < 10; i++)
	{
		c += a[i];
		e++;
	}
	d = c / e;
	printf("\nv = %d     ½Ï = %.0f", c, d);
	printf("\nzñ b = ");
	for ( i = 0; i < 10; i++)
	{
		printf("%d ", b[i]);
	}
	c = 0;
	for ( i = 0; i < 10; i++)
	{
		c += b[i];
	}
	d = c / e;
	printf("\nv = %d     ½Ï = %.0f", c, d);
}