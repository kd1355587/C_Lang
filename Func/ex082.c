#include<stdio.h>
#include<string.h>
void shojun(int tbl[], int cnt);
void kojun(int tbl[], int cnt);
main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 },i;
	char s[128];
	printf("ソート方向を入力：");
	gets(s);
	if (strcmp(s, "降順")== 0) { kojun(data, 8); }
	if (strcmp(s, "昇順") == 0) { shojun(data, 8); }
	for ( i = 0; i < 8; i++)
	{
		printf("%d", data[i]);
	}
	return 0;
}

void shojun(int tbl[], int cnt)
{
	int i,w,j;
	for ( i = 0; i < cnt; i++)
	{
		for (j = i + 1; j < cnt; j++)
		{
			if (tbl[i] > tbl[j])
			{
				w = tbl[i];
				tbl[i] = tbl[j];
				tbl[j] = w;
			}
		}
	}
}
void kojun(int tbl[], int cnt)
{
	int i,w,j;
	for ( i = 0; i < cnt; i++)
	{
		for (j = i + 1; j < cnt; j++)
		{
			if (tbl[i] < tbl[j])
			{
				w = tbl[i];
				tbl[i] = tbl[j];
				tbl[j] = w;
			}
		}
	}
}