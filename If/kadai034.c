#include<stdio.h>
main()
{
	char i;
	printf("�A���t�@�x�b�g�H");
	scanf("%c", &i);
	if ('a' <= i && i <= 'z')
	{
		printf("�������ł�");
	}
	else
	{
		if ('A' <= i && i <= 'Z')
		{
			printf("�啶���ł�");
		}
		else
		{
			printf("ERROR");
		}
	}
}