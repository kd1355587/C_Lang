#include<stdio.h>
main()
{
	int ope;
	printf("���������");
	scanf("%d", &ope);
	ope = ope / 10;
	switch (ope)
	{
		if (ope >= 1 && ope <= 4)
		{
			case  1 :
				printf("�P�O�_��ł�");
				break;
			case 2 :
				printf("�Q�O�_��ł�");
				break;
			case 3:
				printf("�R�O�_��ł�");
				break;
			case 4:
				printf("�S�O�_��ł�");
				break;
		}
	default:
		printf("�G���[");
	}
}