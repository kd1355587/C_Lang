#include<stdio.h>
main()
{
	char i;
	printf("1��������");
	scanf("%c", &i);
	if ('a' <= i && 'z' >= i)
	{
		printf("�ϊ����ʂ�%c", i - 0x20);
	}
	else
	{
		if ('A' <= i && 'Z' >= i)
		{
			printf("�ϊ����ʂ�%c", i + 0x20);
		}
		else
		{
			printf("%c", i);
		}
	}
}