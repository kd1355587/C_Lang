#include<stdio.h>
main()
{
	int tuki;
	printf("������́F");
	scanf("%d", &tuki);
	if (tuki == 2)
	{
		printf("�ŏI���͂Q�W���ł�\n");
	}
	else
	{
		if (tuki == 4 || tuki == 6 || tuki == 9 || tuki == 11)
		{
			printf("�ŏI���͂R�O���ł�\n");
		}
		else
		{
			printf("�ŏI���͂R�P���ł�\n");
		}
	}
}