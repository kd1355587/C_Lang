#include<stdio.h>
main()
{
	int su, kei;
	kei = 0;
	for (su = 1; su <= 10; su++)
		{
		kei += su;
		printf("%d����%d�܂ł̘a=%d\n", 1, su, kei);
		}
}