#include<stdio.h>
main()
{
	float i = 0, j = 0, k = 0;
	while (i!=-999)
	{
		printf("整数を入力?(-999で終了)");
		scanf("%f", &i);
		k += i;
		j++;
	}
	k = k + 999;
	printf("合計 = %.0f \n", k);
	printf("平均 = %.2f \n", k / j);
}