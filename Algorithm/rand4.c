#include<stdio.h>
#include<stdlib.h>		//�������g���Ƃ��ɕK�v
#include<time.h>		//�������g���Ƃ��ɕK�v
main()
{
	int un, i;
	srand(time(0));
	un = rand() % 5 + 1;
	printf("�����̂��Ȃ��̉^���́A");
	for (i = 0; i < un; i++)
	{
		printf("��");
	}
	printf(" death");
}