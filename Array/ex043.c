#include<stdio.h>
main()
{
	int i;
	char moji[] = "orange";
	i = 0;
	//int a[] = {1,2,3};
	while (moji[i] != '\0')
	{
		i++;
	}
	printf("������:%s\n", &moji[0]);
	printf("��������%d����\n", i);
	printf("��������%d\n", strlen(moji));
}