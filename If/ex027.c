#include<stdio.h>
main()
{
	char moji;
	printf("���������");
	scanf("%c", &moji);
	if (moji >= 'A' && moji <= 'Z')
	{
		moji = moji + 0x20;
		printf("�ϊ������%c", moji);
	}
	else
	{
		if (moji >= 'a' && moji <= 'z')
		{
			moji = moji - 0x20;
			printf("�ϊ������%c", moji);
		}
		else
		{
			if (moji >= '0' && moji <= '9')
			{
				printf("�G���[\n");
			}
			else
			{
				printf("�G���[");
			}
		}
	}
}