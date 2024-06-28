#include<stdio.h>
main()
{
	int i;
	char data[] = "apple";
	i = 0;
	printf("1•¶Žš‚¸‚Â•\Ž¦\n");
	while (data[i] != '\0')
	{
		printf("%c", data[i]);
		i++;
	}
	printf("\n•¶Žš—ñ‚Å•\Ž¦\n%s", &data[0]);
}