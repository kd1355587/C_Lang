#include<stdio.h>
#include<stdlib.h>		//�������g���Ƃ��ɕK�v
#include<time.h>		//�������g���Ƃ��ɕK�v
main()
{
	int dice;
	
	srand(time(0));
	dice = rand() % 6;
	dice=dice + 1;
	printf("�T�C�R����%d�ł�\n",dice);
}