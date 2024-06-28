//ガチャのプログラム
//変数kazuに0~99の数を入れる
//それが〇〇より小さければ
//スーパーレア
//それ以外はレア

#include<stdio.h>
#include<stdlib.h>		//乱数を使うときに必要
#include<time.h>		//乱数を使うときに必要
main()
{
	int k,i;
	srand(time(0));
	for (i = 0; i < 1000000000000000000; i++)
	{
		k = rand() % 10000000000000000000 + 1;
		if (k <= 3000)
		{
			printf("☆☆☆☆\t");
			if (k <= 1)
			{
				printf("\n\n\n\n\n\n\n☆☆☆☆☆\t\n\n\n\n\n");
			}
		}
		else
		{
			printf("☆☆☆\t");
		}
	}
}