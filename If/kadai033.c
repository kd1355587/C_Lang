#include<stdio.h>
main()
{
	char i;
	printf("アルファベット？");
	scanf("%c", &i);
	if (0x61 < i < 0 && i < 0x7A)
	{
		printf("小文字です");
	}
	else
	{
		printf("大文字です");
	}
}