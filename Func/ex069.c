#include<stdio.h>
main()
{
	int a,sum=0,i=0;
	printf("�����F");
	while (scanf("%d", &a) != EOF)
	{
		sum += a;
		printf("�����F");
		i++;
	}
	printf("���v=%d ����=%.2f\n", sum,(float)sum/i);
}