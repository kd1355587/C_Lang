#include<stdio.h>
main()
{
	int i,k;
	char j;
	for (i = 0x20,j = 0x20; i <= 0x7F; i++,j++)
	{
		printf("%x : %c", i,j);
	}
}