#include<stdio.h>
main()
{
	int y,x;
	printf("西暦を入力");
	scanf("%d",&y);
	x = y % 4;
	if (x==0)
	{
		printf("うるう年です");
	}
	else
	{
		printf("うるう年ではありません");
	}
}