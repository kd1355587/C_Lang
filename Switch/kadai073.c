#include<stdio.h>
main()
{
	int i;
	char j;
	printf("10�i���̐����H");
	scanf("%d", &i);
	printf("�A���t�@�x�b�g�H(o or h or d)");
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