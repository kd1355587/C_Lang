#include<stdio.h>
main()
{
	char moji;
	printf("文字を入力");
	scanf("%c", &moji);
	if (moji >= 'A' && moji <= 'Z')
	{
		moji = moji + 0x20;
		printf("変換すると%c", moji);
	}
	else
	{
		if (moji >= 'a' && moji <= 'z')
		{
			moji = moji - 0x20;
			printf("変換すると%c", moji);
		}
		else
		{
			if (moji >= '0' && moji <= '9')
			{
				printf("エラー\n");
			}
			else
			{
				printf("エラー");
			}
		}
	}
}