#include<stdio.h>
main()
{
	int su, kei;
	kei = 0;
	for (su = 1; su <= 10; su++)
		{
		kei += su;
		printf("%dから%dまでの和=%d\n", 1, su, kei);
		}
}