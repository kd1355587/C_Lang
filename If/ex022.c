#include<stdio.h>
main()
{
	int nen;
	printf("西暦を入力");
	scanf("%d", &nen);
	if (1989<=nen)
	{
		printf("平成生まれです");
	}
	else {
		printf("平成生まれではありません");
	}
}