#include<stdio.h>
main()
{
	int i=0;
	char j;
	while (i != -1)
	{
		printf("文字コード(-1で入力終了)");
		scanf("%x", &i);
		j = i;
		printf("\n%c\n",j);
	}
}