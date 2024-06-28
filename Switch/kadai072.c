#include<stdio.h>
main()
{
	char i;
	printf("アルファベット？");
	scanf("%c", &i);
	switch (i)
	{
	case'a':printf("America\nAustralia\n");
		break;
	case'e':printf("Engrand\n");
		break;
	case'f':printf("France\n");
		break;
	case'j':printf("Japan\n");
		break;

	default:
		break;
	}
}