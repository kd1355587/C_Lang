#include<stdio.h>
main()
{
	long int i;
	printf("整数？");
	scanf("%ld", &i);
	printf("2倍すると%ld\n3倍すると%ld\n4倍すると%ld\n", i * 2, i * 3, i * 4);
}