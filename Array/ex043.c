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
	printf("•¶š—ñ:%s\n", &moji[0]);
	printf("•¶š”‚Í%d•¶š\n", i);
	printf("•¶š”‚Í%d\n", strlen(moji));
}