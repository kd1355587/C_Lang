#include<stdio.h>
#include<stdlib.h>
#include<time.h>		
main()
{
	int s, i, d[11] = {10,5,30,77,16,3,47,29,37,33,0};
	printf("探索値ｓを入力");
	scanf("%d", &s);
	for ( d[10]=s, i = 0;s != d[i]; i++)
	{
	}
	if (i==10)
	{
		printf("見つからなかった");
	}
	else
	{
		printf("%d見つけた", i);
	}
}