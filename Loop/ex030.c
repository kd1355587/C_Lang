#include<stdio.h>
main()
{
	int su,su1;
	su1 = 0;
	printf("��������");
	scanf("%d", &su);
	while (su1 <= 10)
	{
		printf("%d+%d=%d\n", su, su1, su + su1);
		su1++;
	}
}