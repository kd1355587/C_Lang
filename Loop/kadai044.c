#include<stdio.h>
main()
{
	int i=0;
	while (i != -999)
	{
		printf("整数(-999で入力終了)");
		scanf("%d", &i);
		if (i != -999)
		{
			printf("\n8進数 = %o   16進数 = %x\n", i, i);
		}

	}
}	