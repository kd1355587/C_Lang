#include<stdio.h>
main()
{
	int i;
	char j;
	printf("10進数の整数？");
	scanf("%d", &i);
	printf("アルファベット？(o or h or d)");
	scanf("%s", &j);
	switch (j)
	{
	case'o':printf("%o", i);
		break;
	case'O':printf("%o", i);
		break;
	case'h':printf("%x", i);
		break;
	case'H':printf("%x", i);
		break;
	default:printf("%d", i);
		break;
	}
}