#include<stdio.h>
#include<stdlib.h>		//乱数を使うときに必要
#include<time.h>		//乱数を使うときに必要
main()
{
	int player,cp;
	printf("何を出しますか？\n(1：グー　2：チョキ　3：パー)");
	scanf("%d", &player);
	srand(time(0));
	cp = rand() % 2;
	if (player==1)
	{
		printf("プレイヤーはグーです\n");
	}
	if (player == 2)
	{
		printf("プレイヤーはチョキです\n");
	}
	if (player == 3)
	{
		printf("プレイヤーはパーです\n");
	}
	if (cp == 0)
	{
		printf("cpuはグーです\n");
	}
	if (cp == 1)
	{
		printf("cpuはチョキです\n");
	}
	if (cp == 2)
	{
		printf("cpuはパーです\n");
	}
	if (player==1&&cp==0||player==2&&cp==1||player==3&&cp==2)
	{
		printf("あいこです\n");
	}
	if (player == 1 && cp == 3 || player == 2 && cp == 0 || player == 3 && cp == 1)
	{
		printf("cpuの勝ちです\n");
	}
	if (player == 3 && cp == 0 || player == 1 && cp == 1 || player == 2 && cp == 2)
	{
		printf("playerの勝ちです\n");
	}
}