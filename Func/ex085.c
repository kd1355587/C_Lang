#include<stdio.h>
void renketu(char* p_a, char* p_b);
main()
{
	char a[256], b[256];
	printf("�z��a:");
	scanf("%s",a);
	printf("�z��b:");
	scanf("%s",b);
	renketu(a, b);
	printf("�z��a:%s\n", a);
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