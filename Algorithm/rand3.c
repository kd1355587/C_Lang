#include<stdio.h>
#include<stdlib.h>		//�������g���Ƃ��ɕK�v
#include<time.h>		//�������g���Ƃ��ɕK�v
main()
{
	int k;
	srand(time(0));
	k = rand() % 100+1;
	if (k <= 30)
	{
		printf("��S�̈ꌂ\n");
		printf("%d", k);
	}
	else
	{
		printf("�ʏ�U��\n");
	}
}