#include<stdio.h>
main()
{
	float i,j;
	printf("2�̎����l?");
	scanf("%f%f", &i, &j);
	printf("* * * %.0f �� %.0f �̎l�����Z * * *\n", i, j);
	printf("�a = %f  �� = %f  �� = %f  �� = %f", i + j, i - j, i * j, i / j);
}