#include<stdio.h>
#include<stdlib.h>		//乱数を使うときに必要
#include<time.h>		//乱数を使うときに必要
main()
{
	int dice;
	
	srand(time(0));
	dice = rand() % 6;
	dice=dice + 1;
	printf("サイコロは%dです\n",dice);
}