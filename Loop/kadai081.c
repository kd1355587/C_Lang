#include<stdio.h>
main()
{
	int i = 0, k = 0, l = 0;
	float j = 0;
	while (i != -999)
	{
		printf("�����H(�]999�ŏI��)");
		scanf("%d", &i);
		k += i;
		l++;
	}
	k = k + 999;
	j = k / l;
	printf("���v = %d\n���� = %.3f", k, j);
}