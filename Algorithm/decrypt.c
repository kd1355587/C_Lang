#include<stdio.h>
#include<stdlib.h>
#include<time.h>		
main()
{
	char s[20];
	int i;
	printf("�������");
	scanf("%s", &s);
	i = 0;
	while (s[i]!='\0')
	{
		s[i] = s[i] - 1;
		i++;
	}
	printf("������������%s��\��",s);
}