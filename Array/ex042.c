#include<stdio.h>
main()
{
	int i;
	char data[] = "apple";
	i = 0;
	printf("1�������\��\n");
	while (data[i] != '\0')
	{
		printf("%c", data[i]);
		i++;
	}
	printf("\n������ŕ\��\n%s", &data[0]);
}