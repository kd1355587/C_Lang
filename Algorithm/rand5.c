#include<stdio.h>
#include<stdlib.h>		//�������g���Ƃ��ɕK�v
#include<time.h>		//�������g���Ƃ��ɕK�v
main()
{
	int kazu,i;
	srand(time(0));
	for ( i = 0; i < 100; i++)
	{
		kazu = rand() % 300;
		printf("%d\n", kazu);
	}

}