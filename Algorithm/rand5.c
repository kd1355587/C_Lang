#include<stdio.h>
#include<stdlib.h>		//乱数を使うときに必要
#include<time.h>		//乱数を使うときに必要
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