#include<stdio.h>
main()
{
	int i;
	printf("0����100�܂ł̐����H");
	scanf("%d" ,&i);
	if (90 <= i)
	{
		printf("���̐��l�̔��茋�ʂ́u5�v�ł�");
	}
	else
	{
		if (80 <= i)
		{
			printf("���̐��l�̔��茋�ʂ́u4�v�ł�");
		}
		else
		{

			if (50 <= i)
			{
				printf("���̐��l�̔��茋�ʂ́u3�v�ł�");
			}
			else
			{

				if (30 <= i)
				{
					printf("���̐��l�̔��茋�ʂ́u2�v�ł�");
				}
				else
				{
					if (i<30)
					{
						printf("���̐��l�̔��茋�ʂ́u1�v�ł�");
					}
				}
			}
		}
	}
}