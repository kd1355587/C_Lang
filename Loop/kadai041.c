#include<stdio.h>
main()
{
	int i = 0, j = 0, k = 0;
	while (i!=-999)
	{
		printf("����(-999�ŏI��)");
		scanf("%d", &i);
		j += i;
		k++;
	}
	j += 999;
	i = j / k;
	printf("���v:%d", j);
	printf("����:%d", i);
}