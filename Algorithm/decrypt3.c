#include<stdio.h>
#include<stdlib.h>
#include<time.h>		
main()
{
	char s[21], k[20];
	int i = 0;
	printf("������� ");
	scanf("%s", &s[0]);
	printf("�������L�[ ");
	scanf("%s", &k[0]);
	while (s[i] != '\0')
	{
		s[i] -= (k[i]-'0');
		i++;
	}
	printf("������������%s", s);
}