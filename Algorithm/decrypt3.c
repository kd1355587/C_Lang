#include<stdio.h>
#include<stdlib.h>
#include<time.h>		
main()
{
	char s[21], k[20];
	int i = 0;
	printf("ｓを入力 ");
	scanf("%s", &s[0]);
	printf("複合化キー ");
	scanf("%s", &k[0]);
	while (s[i] != '\0')
	{
		s[i] -= (k[i]-'0');
		i++;
	}
	printf("複合化文字列%s", s);
}