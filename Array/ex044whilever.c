#include<stdio.h>
main()
{
	char moji1[40], moji2[40], nige[40];
	int i;
	i = 0;
	printf("������1�����");
	scanf("%s", &moji1[0]);
	printf("������2�����");
	scanf("%s", &moji2[0]);
	printf("moji1 = %s  moji2 = %s\n", moji1, moji2);
	while (moji1[i] != '\0')
	{
		nige[i] = moji1[i];
		moji1[i] = moji2[i];
		moji2[i] = nige[i];
		i++;
	}
	printf("����ւ����\n");
	printf("moji1 = %s  moji2 = %s\n", &moji1[0], &moji2[0]);
	printf("\n\n%s", &nige[0]);
	
}