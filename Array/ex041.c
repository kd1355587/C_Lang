#include<stdio.h>
main()
{
	int i;
	float box[3], sum;
	for (sum = 0, i = 0; i < 3; i++)
	{
		printf("��������͂��Ă�������");
		scanf("%f", &box[i]);
		sum += box[i];
	}
	printf("���v��%.2f�ł��B\n���ς�%.2f�ł��B\n",sum,sum/3);
}