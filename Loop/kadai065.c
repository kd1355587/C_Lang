#include<stdio.h>
main()
{
	float i = 0, j = 0, k = 0;
	while (i!=-999)
	{
		printf("���������?(-999�ŏI��)");
		scanf("%f", &i);
		k += i;
		j++;
	}
	k = k + 999;
	printf("���v = %.0f \n", k);
	printf("���� = %.2f \n", k / j);
}