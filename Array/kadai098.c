#include<stdio.h>
main()
{
	int data[] = { 10,5,23,29,2,6,3,1,70,100 };
	int max, min, i, j;
	for (i = 0, j = 1; i < 10; i++,j++)
	{
		if (data[i]>=data[j])
		{
			max = data[i];
			min = data[j];
		}
		else
		{
			max = data[j];
			min = data[i];
		}
	}
	printf("max = %d\nmin = %d", max, min);
}