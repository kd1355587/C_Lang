#include<stdio.h>
main()
{
	int i, j;
	char k;
	printf("����1�H");
	scanf("%d", &i);
	printf("����2�H");
	scanf("%d", &j);
	printf("���Z�q�H");
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