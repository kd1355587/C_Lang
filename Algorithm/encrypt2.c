#include<stdio.h>
#include<stdlib.h>
#include<time.h>		
main()
{
	int i = 0, n, k[21];
	char s[21];
	srand(time(0));
	printf("�������");
	scanf("%s", &s);
	while (s[i]!='\0')
	{
		k[i] = rand() % 6;
		s[i] += k[i];
		i++;
	}
	printf("�Í���������%s\n", s);
	printf("�Í����L�[��");
	for (n = 0; n < i; n++)
	{
		printf("%d", k[n]);
	}
}