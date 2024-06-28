#include<stdio.h>
main()
{
	char i;
	printf("アルファベット小文字?");
	scanf("%c", &i);
	i = i - 0x20;
	i = i + 0x01;
	for (; i <= 0x5A; i++)
	{
		printf("%c", i);
	}
}