#include<stdio.h>
#include<stdlib.h>
#include<time.h>		
main()
{
	char s[21];
	int i=0,k[20];
	printf("ｓを入力");
	scanf("%s", &s[0]);
	while (s[i] != '\0')
	{
		printf("s[%d]の複合化キー",i);
		scanf("%d", &k[i]);
		s[i] -= k[i];
		i++;
	}
	printf("複合化文字列%s", s);
}