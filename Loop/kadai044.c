#include<stdio.h>
main()
{
	int i=0;
	while (i != -999)
	{
		printf("����(-999�œ��͏I��)");
		scanf("%d", &i);
		if (i != -999)
		{
			printf("\n8�i�� = %o   16�i�� = %x\n", i, i);
		}

	}
}	