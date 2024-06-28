#include<stdio.h>
main()
{
	char i;
	printf("アルファベット？");
	scanf("%c", &i);
	if ('a' <= i && i <= 'z')
	{
		printf("小文字です");
	}
	else
	{
		if ('A' <= i && i <= 'Z')
		{
			printf("大文字です");
		}
		else
		{
			printf("ERROR");
		}
	}
}