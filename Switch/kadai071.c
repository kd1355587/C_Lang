#include<stdio.h>
main()
{
	int i, j;
	char k;
	printf("整数1？");
	scanf("%d", &i);
	printf("整数2？");
	scanf("%d", &j);
	printf("演算子？");
	scanf("%s", &k);
	switch (k)
	{
	case '+':printf("%d + %d = %d", i, j, i + j);
		break;
	case '-':printf("%d - %d = %d", i, j, i - j);
		break;
	case '*':printf("%d * %d = %d", i, j, i * j);
		break;
	case '/':printf("%d / %d = %d", i, j, i / j);
		break;
	case '%':printf("%d % %d = %d", i, j, i % j);
		break;
	default:
		break;
	}
}