#include<stdio.h>
#include<stdlib.h>		//乱数を使うときに必要
#include<time.h>		//乱数を使うときに必要
main()
{
	int un, i;
	srand(time(0));
	un = rand() % 5 + 1;
	printf("今日のあなたの運勢は、");
	for (i = 0; i < un; i++)
	{
		printf("☆");
	}
	printf(" death");
}