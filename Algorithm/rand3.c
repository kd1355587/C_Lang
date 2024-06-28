#include<stdio.h>
#include<stdlib.h>		//乱数を使うときに必要
#include<time.h>		//乱数を使うときに必要
main()
{
	int k;
	srand(time(0));
	k = rand() % 100+1;
	if (k <= 30)
	{
		printf("会心の一撃\n");
		printf("%d", k);
	}
	else
	{
		printf("通常攻撃\n");
	}
}