#include<stdio.h>
main()
{
	char i;
	printf("1文字入力");
	scanf("%c", &i);
	if ('a' <= i && 'z' >= i)
	{
		printf("変換結果は%c", i - 0x20);
	}
	else
	{
		if ('A' <= i && 'Z' >= i)
		{
			printf("変換結果は%c", i + 0x20);
		}
		else
		{
			printf("%c", i);
		}
	}
}