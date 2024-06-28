#include<stdio.h>
main()
{
	char* p_ride[3] = { "car","bus","shinkansen" };
	int i;
	for ( i = 0; i < 3; i++)
	{
		printf("%s\n", p_ride[i]);
	}

	/*
	while (*p_ride[0])
	{
		putchar(*p_ride[0]++);
	}
	printf("\n");
	while (*p_ride[1])
	{
		putchar(*p_ride[1]++);
	}
	printf("\n");
	while (*p_ride[2])
	{
		putchar(*p_ride[2]++);
	}
	printf("\n");
	*/
}