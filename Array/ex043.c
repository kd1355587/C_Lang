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
	printf("文字列:%s\n", &moji[0]);
	printf("文字数は%d文字\n", i);
	printf("文字数は%d\n", strlen(moji));
}