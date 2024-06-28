#include<stdio.h>
void renketu(char* p_a, char* p_b);
main()
{
	char a[256], b[256];
	printf("”z—ña:");
	scanf("%s",a);
	printf("”z—ñb:");
	scanf("%s",b);
	renketu(a, b);
	printf("”z—ña:%s\n", a);
}

void renketu(char* p_a, char* p_b)
{
	for (; *p_a != '\0'; p_a++);
	for (; *p_b != '\0'; p_a++, p_b++)
	{
		*p_a = *p_b;
	}
	*p_a = '\0';
	return;
}