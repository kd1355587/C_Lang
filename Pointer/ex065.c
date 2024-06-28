#include<stdio.h>
#include<string.h>

#define CNT 4  //配列のサイズ
main()
{
	char* p_tbl[] = { "Programming2","Algorithm","Programming1","C" };
	int i,j;
	char* p_work;
	for (i = 0; i < CNT-1; i++)
	{
		for (j = 1+i; j < CNT; j++)
		{
			if (strcmp(p_tbl[i], p_tbl[j]) == 1)//-1にしたら降順
			{
				p_work = p_tbl[i];
				p_tbl[i] = p_tbl[j];
				p_tbl[j] = p_work;
			}
		}
	}
	for ( i = 0; i < CNT; i++)
	{
		printf("%s\n", p_tbl[i]);
	}
}